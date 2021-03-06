/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2008 - 2018 Intel Corporation. <BR>

  The source code contained or described herein and all documents related to the
  source code ("Material") are owned by Intel Corporation or its suppliers or
  licensors. Title to the Material remains with Intel Corporation or its suppliers
  and licensors. The Material may contain trade secrets and proprietary    and
  confidential information of Intel Corporation and its suppliers and licensors,
  and is protected by worldwide copyright and trade secret laws and treaty
  provisions. No part of the Material may be used, copied, reproduced, modified,
  published, uploaded, posted, transmitted, distributed, or disclosed in any way
  without Intel's prior express written permission.

  No license under any patent, copyright, trade secret or other intellectual
  property right is granted to or conferred upon you by disclosure or delivery
  of the Materials, either expressly, by implication, inducement, estoppel or
  otherwise. Any license under such intellectual property rights must be
  express and approved by Intel in writing.

  Unless otherwise agreed by Intel in writing, you may not remove or alter
  this notice or any other notice embedded in Materials by Intel or
  Intel's suppliers or licensors in any way.
**/

#include "HpIOXAccess.h"
#include "SmbAccess.h"
#include <PchAccess.h>
#include <Register/PchRegsLpc.h>
#include <Register/PchRegsSmbus.h>

#ifndef __GNUC__
#pragma optimize("", off)
#endif  //__GNUC__

UINT16      SmbBase;
UINT8       SmbusStateIndex;
UINT8       FirstSmbusEntry = 1;
UINT8       Count = 0;
UINT8       BusTries = 0;
UINT8       IOSESave;
UINT8       SmbSlaveAddress;
UINT8       SmbOperation;
UINT8       HostCmd;
UINT8       *CallBuffer;

UINTN SmbusStateMachine[4] = {

  (UINTN)&AcquireSmBus,
  (UINTN)&ReadWriteSmbus,
  (UINTN)&CheckForAccessComplete,
  (UINTN)-1,

};

NEXT_STATE_ENTRY  NSSmb;


EFI_STATUS
AcquireSmBus (
  VOID
  )
{
  UINT8              StsReg;
  static UINT8       BusAcquired;

  StsReg = 0;
  BusAcquired = 0;

  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &StsReg);

  if ( StsReg & B_SMBUS_IO_IUS ) {
    //Check if the SmBus Host controller in use.
     goto Error;
  }

  BusAcquired = 1;

  // Check for errors
  if ( StsReg & (B_SMBUS_IO_DERR + B_SMBUS_IO_BERR + B_SMBUS_IO_FAIL)) {
    return EFI_DEVICE_ERROR;
  }

  //Clear Host busy and read it back to check the previous transaction is completed.
  StsReg |= B_SMBUS_IO_HBSY;
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &StsReg);

  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &StsReg);
  if ( StsReg & B_SMBUS_IO_HBSY ) {
    goto Error;
  }

  StsReg = B_SMBUS_IO_HSTS_ALL;
  // Clear out any odd status information
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &StsReg);
  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &StsReg);
  // Inuse status bit set when read.
  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &StsReg);
  Count = 0;
  return EFI_SUCCESS;

Error:
  if(Count >= MAX_RETRY) {
    return EFI_DEVICE_ERROR;
  }
  else {
    Count++;
    return IN_PROGRESS;
  }
}


EFI_STATUS
ReadWriteSmbus (
  VOID
)
{
  EFI_STATUS                  Status;
  BOOLEAN                     PecCheck=FALSE;
  UINT8                       AuxcReg, Temp;
  UINT8                       SmbusOperation=0;

  AuxcReg = 0;
  if(SmbOperation == SMB_READ) {
    SmbSlaveAddress |= 01;
  }

  //
  // SmbOperation Specifics (pre-execution)
  //
  Status = EFI_SUCCESS;

  switch (SmbOperation) {

      case SMB_WRITE:
          gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HD0), 1, &CallBuffer[0]);
          //
          // The "break;" command is not present here to allow code execution
          // do drop into the next case, which contains common code to this case.
          //
     case SMB_READ:
          SmbusOperation = V_SMBUS_IO_SMB_CMD_BYTE_DATA;
          break;

      default:
      DEBUG ((EFI_D_INFO, "default case.\n"));  //Auto added. Please review.
      break;
  };

  if (PecCheck == TRUE) {
    AuxcReg |= B_SMBUS_IO_AAC;
  }
  //
  // Set Auxiliary Control register
  //
  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_AUXC), 1, &AuxcReg);

  //
  // Reset the pointer of the internal buffer
  //
  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HCTL), 1, &Temp);

  //
  // Set SMBus slave address for the device to send/receive from
  //
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_TSA), 1, &SmbSlaveAddress);

  //
  // Set Command register
  //
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HCMD), 1, &HostCmd);

  //
  // Set Control Register (Initiate Operation, Interrupt disabled)
  //
  SmbusOperation += B_SMBUS_IO_START;
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HCTL), 1, &SmbusOperation);

  return EFI_SUCCESS;
}


BOOLEAN
IoDone (
  IN      UINT8           *StsReg
  )
/*++

Routine Description:

  This function provides a standard way to check if an SMBus transaction has
  completed.

Arguments:

  StsReg:   Not used for input.

Returns:

  StsReg:   On return, contains the value of the SMBus status register.
  Returns TRUE if transaction is complete, FALSE otherwise.

--*/
{
  // Wait for IO to complete
  /*  UINTN               StallIndex;
  UINTN                   StallTries;

  //
  // TickPeriod in 100ns so convert to us
  //
  StallTries = STALL_TIME / 10000;

  StallIndex = 0;
  while ((StallIndex < StallTries)) {
      gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, StsReg);
      if (*StsReg & (B_SMBUS_IO_INTR | B_SMBUS_IO_BYTE_DONE_STS | B_SMBUS_IO_DERR | B_SMBUS_IO_BERR)) {
          return TRUE;
      } else {
          StallIndex++;
      }
  }
  return FALSE;*/

  gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, StsReg);
  if (*StsReg & (B_SMBUS_IO_INTR | B_SMBUS_IO_BYTE_DONE_STS | B_SMBUS_IO_DERR | B_SMBUS_IO_BERR)) {
    return TRUE;
  } else {
    return FALSE;
  }
}

EFI_STATUS
CheckForAccessComplete (
  VOID
  )
{
  UINT8            AuxStsReg;
  UINT8            Temp;
  UINT8            StsReg;

  // Wait for IO to complete
  if (!(IoDone (&StsReg))) {
    return IN_PROGRESS;
  } else if (StsReg & B_SMBUS_IO_DERR) {
    gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_AUXS), 1, &AuxStsReg);
    if (AuxStsReg & B_SMBUS_IO_CRCE) {
      return EFI_CRC_ERROR;
    } else {
      return EFI_DEVICE_ERROR;
    }
  } else if (StsReg & B_SMBUS_IO_BERR) {
    // Clear the Bus Error for another try
    Temp = B_SMBUS_IO_BERR;
    gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &Temp);
    if(BusTries >= BUS_TRIES) {
      return EFI_DEVICE_ERROR;
    }
    else {
      BusTries++;
      return IN_PROGRESS;
    }
  }

  //
  // Clear Status Registers and exit
  //
  Temp = B_SMBUS_IO_HSTS_ALL;
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HSTS), 1, &Temp);
  Temp = B_SMBUS_IO_CRCE;
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_AUXS), 1, &Temp);
  Temp = 0;
  gSmst->SmmIo.Io.Write (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_AUXC), 1, &Temp);

  if(!(IOSESave & B_PCH_SMBUS_PCICMD_IOSE)) {

    // Restore the value back to the original state before the function gets control
    PciWrite8 (PCI_LIB_ADDRESS(
      DEFAULT_PCI_BUS_NUMBER_PCH,
      PCI_DEVICE_NUMBER_PCH_LPC,
      PCI_FUNCTION_NUMBER_PCH_SMBUS,
      R_PCH_SMBUS_PCICMD),
      IOSESave // Enable IO space
      );
  }

  //
  // successfull completion
  // Operation Specifics (post-execution)
  //
  switch (SmbOperation) {

  case SMB_READ:
    gSmst->SmmIo.Io.Read (&gSmst->SmmIo, SMM_IO_UINT8, (SmbBase + R_SMBUS_IO_HD0), 1, &CallBuffer[0]);
    break;

  default:
    break;
  };

  BusTries = 0;
  return EFI_SUCCESS;
}

EFI_STATUS
SmbusReadWrite (
  IN      UINT8    SlaveAddress,
  IN      UINT8    Operation,
  IN      UINT8    Command,
  IN OUT  VOID     *Buffer
  )
/*++

Routine Description:

  This function provides a standard way to execute Smbus protocols
  as defined in the SMBus Specification.

Arguments:

  Slave Address: Smbus Slave device the command is directed at
  Operation: Which SMBus protocol will be used

Returns:

  EFI_SUCCESS           The operation completed successfully.
    Length              Contain the actual number of bytes read/written.
    Buffer              Contain the data read/written.
  EFI_UNSUPPORTED
  EFI_INVALID_PARAMETER Length or Buffer is NULL for any operation besides
                        quick read or quick write.
  EFI_TIMEOUT           The transaction did not complete within an internally
                        specified timeout period, or the controller is not
                        available for use.
  EFI_DEVICE_ERROR      There was an Smbus error (NACK) during the operation.
                        This could indicate the slave device is not present
                        or is in a hung condition.

--*/
{
  EFI_STATUS                  Status;

  SmbSlaveAddress = SlaveAddress;
  SmbOperation    = Operation;
  HostCmd         = Command;
  CallBuffer      = Buffer;

  //
  // Get the SMBUS base Address
  //

  SmbBase = PciRead16 (PCI_LIB_ADDRESS(
                       DEFAULT_PCI_BUS_NUMBER_PCH,
                       PCI_DEVICE_NUMBER_PCH_LPC,
                       PCI_FUNCTION_NUMBER_PCH_SMBUS,
                       R_PCH_SMBUS_BASE)
            );

  SmbBase &= 0xFFE0;

  IOSESave = PciRead8 (PCI_LIB_ADDRESS(
                       DEFAULT_PCI_BUS_NUMBER_PCH,
                       PCI_DEVICE_NUMBER_PCH_LPC,
                       PCI_FUNCTION_NUMBER_PCH_SMBUS,
                       R_PCH_SMBUS_PCICMD)
             );

  if(!(IOSESave & B_PCH_SMBUS_PCICMD_IOSE)) {

    PciWrite8 (PCI_LIB_ADDRESS(
               DEFAULT_PCI_BUS_NUMBER_PCH,
               PCI_DEVICE_NUMBER_PCH_LPC,
               PCI_FUNCTION_NUMBER_PCH_SMBUS,
               R_PCH_SMBUS_PCICMD),
               (IOSESave |B_PCH_SMBUS_PCICMD_IOSE) // Enable IO space
              );

  }

  if(FirstSmbusEntry)  {
    //
    // First time call initialize with the start of the SmbusStateMachine.
    //
    SmbusStateIndex = 0;
    FirstSmbusEntry = 0;
    NSSmb.NextEntryPointer = (NEXT_ENTRY_POINTER)SmbusStateMachine[SmbusStateIndex];
  }

   // Call the entry in the SMBUS state machine table
  Status  = NSSmb.NextEntryPointer();
  if(Status == IN_PROGRESS) {
    return Status;
  }

  if(EFI_ERROR(Status)) {
    FirstSmbusEntry = 1;
    return Status;
  }

  SmbusStateIndex++;
  // Set FirstSmbusEntry to TRUE if it is last entry.
  if((UINTN)SmbusStateMachine[SmbusStateIndex] == (UINTN)-1){
    FirstSmbusEntry = 1;
    return EFI_SUCCESS;
  } else {
    NSSmb.NextEntryPointer = (NEXT_ENTRY_POINTER)SmbusStateMachine[SmbusStateIndex];
    return IN_PROGRESS;
  }
}



