/** @file
  PCH private PMC Library for all PCH generations.
  All function in this library is available for PEI, DXE, and SMM,
  But do not support UEFI RUNTIME environment call.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2020 Intel Corporation.

  The source code contained or described herein and all documents related to the
  source code ("Material") are owned by Intel Corporation or its suppliers or
  licensors. Title to the Material remains with Intel Corporation or its suppliers
  and licensors. The Material may contain trade secrets and proprietary and
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

  This file contains an 'Intel Peripheral Driver' and is uniquely identified as
  "Intel Reference Module" and is licensed for Intel CPUs and chipsets under
  the terms of your license agreement with Intel or your vendor. This file may
  be modified by the user, subject to additional terms of the license agreement.

@par Specification Reference:
**/

#include <Base.h>
#include <Uefi/UefiBaseType.h>
#include <Library/IoLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/PmcLib.h>
#include <Library/PciSegmentLib.h>
#include <Library/PchPcrLib.h>
#include <Library/PchInfoLib.h>
#include <Library/TimerLib.h>
#include <Library/PmcPrivateLib.h>
#include <Library/PsfLib.h>
#include <PchReservedResources.h>
#include <Register/PchRegs.h>
#include <Register/PmcRegs.h>
#include <IndustryStandard/Pci30.h>
#include <Library/PchPciBdfLib.h>
#include <Library/PeiPchPcieClocksLib.h>
#include <Library/PreSiliconEnvDetectLib.h>
#include <Library/PmcSocLib.h>

/**
  Send PMC IPC1 Normal Read/Write command

  @param[in]  Command           Command to be issued to PMC IPC 1 interface
  @param[in]  SubCmdId          SUB_CMD_ID for provided Command
  @param[in]  CmdSize           Total size in byte to be sent via PMC IPC 1 interface
  @param[in]  WriteBufPtr       Pointer to Structure of 4 DWORDs to be issued to PMC IPC 1 interface
  @param[out] ReadBufPtr        Pointer to Structure of 4 DWORDs to be filled by PMC IPC 1 interface

  @retval EFI_SUCCESS             Command was executed successfully
  @retval EFI_INVALID_PARAMETER   Invalid command size
  @retval EFI_DEVICE_ERROR        IPC command failed with an error
  @retval EFI_TIMEOUT             IPC command did not complete after 1s
**/
EFI_STATUS
PmcSendCommand (
  IN  UINT8                    Command,
  IN  UINT8                    SubCmdId,
  IN  UINT8                    CmdSize,
  IN  PMC_IPC_COMMAND_BUFFER   *WriteBufPtr,
  OUT PMC_IPC_COMMAND_BUFFER   *ReadBufPtr
  )
{
  EFI_STATUS             Status;
  UINT32                 PchPwrmBase;
  UINT32                 IpcSts;
  UINTN                  Timeout;

  //This function among other is used during reading debug log level.
  //When command to access NMI control register command is detected all debug logging MUST be skipped to avoid dead loop here.
  if (WriteBufPtr->Buf0 != V_PMC_PWRM_IPC_CMD_WBUF0_PROXY_NMI) {
    DEBUG ((DEBUG_INFO, "PmcSendCommand(): IPC_COMMAND=0x%02X, IPC_SUB_CMD = 0x%02X, IPC_SIZE=0x%02X \n", Command, SubCmdId, CmdSize));
    DEBUG ((DEBUG_INFO, "WBUF0=0x%08X, WBUF1=0x%08X, WBUF2=0x%08X, WBUF3=0x%08X \n", WriteBufPtr->Buf0, WriteBufPtr->Buf1, WriteBufPtr->Buf2, WriteBufPtr->Buf3));
  }
  if (CmdSize > 16) {
    ASSERT (FALSE);
    return EFI_INVALID_PARAMETER;
  }

  //
  // Program the Write Buffer 0 with the Data that needs to be written to PMC
  //
  PchPwrmBase = PmcGetPwrmBase ();
  MmioWrite32 ((PchPwrmBase + R_PMC_PWRM_IPC_WBUF0), WriteBufPtr->Buf0);
  MmioWrite32 ((PchPwrmBase + R_PMC_PWRM_IPC_WBUF1), WriteBufPtr->Buf1);
  MmioWrite32 ((PchPwrmBase + R_PMC_PWRM_IPC_WBUF2), WriteBufPtr->Buf2);
  MmioWrite32 ((PchPwrmBase + R_PMC_PWRM_IPC_WBUF3), WriteBufPtr->Buf3);
  //
  // Program the command register with command and size
  //
  MmioWrite32 (
    PchPwrmBase + R_PMC_PWRM_IPC_CMD,
    (UINT32) ((CmdSize << N_PMC_PWRM_IPC_CMD_SIZE) |
      (SubCmdId << N_PMC_PWRM_IPC_CMD_CMD_ID) |
      (Command << N_PMC_PWRM_IPC_CMD_COMMAND))
    );

  //
  // Read the IPC_STS register to get BUSY or Error status
  //
  Timeout = 0;
  Status = EFI_SUCCESS;
  while (TRUE) {
    IpcSts = MmioRead32 (PchPwrmBase + R_PMC_PWRM_IPC_STS);
    if ((IpcSts & B_PMC_PWRM_IPC_STS_BUSY) == 0) {
      Status = EFI_SUCCESS;
      break;
    }

    if (Timeout > (1000 * 100)) {
      Status = EFI_TIMEOUT;
      break;
    }
    MicroSecondDelay (10);
    Timeout++;
  }

  if ((IpcSts & B_PMC_PWRM_IPC_STS_ERROR) != 0) {
    Status = EFI_DEVICE_ERROR;
  }

  if (EFI_ERROR (Status)) {
    if (WriteBufPtr->Buf0 != V_PMC_PWRM_IPC_CMD_WBUF0_PROXY_NMI) {
      DEBUG ((DEBUG_ERROR, "PmcSendCommand() Error: IPC_STS=0x%08X\n", IpcSts));
    }
    return Status;
  }

  if (ReadBufPtr != NULL) {
    //
    // Fill the  ReadBuffer contents with the Data that needs to be read from PMC
    //
    ReadBufPtr->Buf0 = MmioRead32(PchPwrmBase + R_PMC_PWRM_IPC_RBUF0);
    ReadBufPtr->Buf1 = MmioRead32(PchPwrmBase + R_PMC_PWRM_IPC_RBUF1);
    ReadBufPtr->Buf2 = MmioRead32(PchPwrmBase + R_PMC_PWRM_IPC_RBUF2);
    ReadBufPtr->Buf3 = MmioRead32(PchPwrmBase + R_PMC_PWRM_IPC_RBUF3);
    if (WriteBufPtr->Buf0 != V_PMC_PWRM_IPC_CMD_WBUF0_PROXY_NMI) {
      DEBUG ((DEBUG_INFO, "RBUF0=0x%08X, RBUF1=0x%08X, RBUF2=0x%08X, RBUF3=0x%08X \n", ReadBufPtr->Buf0, ReadBufPtr->Buf1, ReadBufPtr->Buf2, ReadBufPtr->Buf3));
    }
  }

  return Status;
}

/**
  This function checks if SCI interrupt is enabled

  @retval SCI Enable state
**/
BOOLEAN
PmcIsSciEnabled (
  VOID
  )
{
  return ((IoRead8 (PmcGetAcpiBase () + R_ACPI_IO_PM1_CNT) & B_ACPI_IO_PM1_CNT_SCI_EN) != 0);
}

/**
  This function triggers Software GPE
**/
VOID
PmcTriggerSwGpe (
  VOID
  )
{
  IoOr32 (PmcGetAcpiBase () + R_ACPI_IO_GPE_CNTL, B_ACPI_IO_GPE_CNTL_SWGPE_CTRL);
}

/**
  Restore Bus Master Enable (BME) bit in PMC device (clear the bit) after PCIe enumaration.

  Read from PMC Command register always returns 0 on I/O enable bit (bit 0).
  Use read/modify/write procedure to PMC Command register causes erasing I/O space enable bit that disables ACPI I/O space.
  PCIe enumerators can use such method and can override I/O enable bit.
  To prevent I/O space disabling by enumerators Bus Master Enable (BME) bit should be set.
  In this case enumerator skips the device during enumeration.

   @param[in] PmcPciCfgBase              PMC PCI config base address

   @retval EFI_SUCCESS                   Successfully completed.
   @retval EFI_UNSUPPORTED               Cannot access PMC device.
 **/
EFI_STATUS
PmcEnableIOSpaceAndBusMaster (
  UINT64           PmcPciCfgBase
  )
{
  if (PciSegmentRead16 (PmcPciCfgBase) == 0xFFFF) {
    ASSERT (FALSE);
    return EFI_UNSUPPORTED;
  }

  //
  // Enable IO space and Bus Master in PMC device
  //
  PciSegmentOr16 (
    PmcPciCfgBase + PCI_COMMAND_OFFSET,
    (UINT16) (EFI_PCI_COMMAND_IO_SPACE | EFI_PCI_COMMAND_BUS_MASTER)
    );
  return EFI_SUCCESS;
}

/**
  Set PCH ACPI base address.
  The Address should not be 0 and should be 256 bytes aligned. It is IO space, so must not exceed 0xFFFF.
  Only address matching PcdAcpiBaseAddress is the acceptable value for ACPI IO Base

  @param[in] Address                    Address for ACPI base address.

  @retval EFI_SUCCESS                   Successfully completed.
  @retval EFI_INVALID_PARAMETER         Invalid base address passed.
  @retval EFI_UNSUPPORTED               DMIC.SRL is set.
**/
EFI_STATUS
PmcSetAcpiBase (
  IN  UINT16                            Address
  )
{

  if (Address != PcdGet16 (PcdAcpiBaseAddress)) {
    DEBUG ((DEBUG_ERROR, "PmcSetAcpiBase Error. Invalid Address: %x.\n", Address));
    ASSERT (FALSE);
    return EFI_INVALID_PARAMETER;
  }

  PsfSetPmcAbase (Address);

  if (IsEbgPch ()) {
    PmcEnableIOSpaceAndBusMaster (PmcPciCfgBase ());
  }
  return EFI_SUCCESS;
}

/**
  Set PCH PWRM base address.

  @param[in] PmcBase                    PMC PCI base address
  @param[in] Address                    Address for PWRM base address.

  @retval EFI_SUCCESS                   Successfully completed.
  @retval EFI_UNSUPPORTED               DMIC.SRL is set.
**/
EFI_STATUS
PmcSetPwrmBase (
  IN  UINT64                            PmcBase,
  IN  UINT32                            Address
  )
{
  if (Address == 0) {
    DEBUG ((DEBUG_ERROR, "PmcSetPwrmBase Error. Null Address.\n"));
    ASSERT (FALSE);
    return EFI_INVALID_PARAMETER;
  }

  if (PciSegmentRead16 (PmcBase) == 0xFFFF) {
    ASSERT (FALSE);
    return EFI_UNSUPPORTED;
  }

  //
  // Disable PWRMBASE in PMC Device first before changing PWRM base address.
  //
  PciSegmentAnd16 (
    PmcBase + PCI_COMMAND_OFFSET,
    (UINT16) ~EFI_PCI_COMMAND_MEMORY_SPACE
    );

  //
  // Program PWRMBASE in PMC Device
  //
  PciSegmentAndThenOr32 (
    PmcBase + R_PMC_CFG_BASE,
    (UINT32) (~B_PMC_CFG_PWRM_BASE_MASK),
    Address
    );

  //
  // Enable PWRMBASE in PMC Device
  //
  PciSegmentOr16 (
    PmcBase + PCI_COMMAND_OFFSET,
    EFI_PCI_COMMAND_MEMORY_SPACE
    );
  return EFI_SUCCESS;
}

/**
  This function checks if function disable (static and non-static power gating)
  configuration is locked

  @retval lock state
**/
BOOLEAN
PmcIsFunctionDisableConfigLocked (
  VOID
  )
{
  return ((MmioRead32 (PmcGetPwrmBase () + R_PMC_PWRM_ST_PG_FDIS_PMC_1) & B_PMC_PWRM_ST_PG_FDIS_PMC_1_ST_FDIS_LK) != 0);
}

/**
  This function locks HOST SW power gating control
**/
VOID
PmcLockHostSwPgCtrl (
  VOID
  )
{
  MmioOr32 (PmcGetPwrmBase () + R_PMC_PWRM_HSWPGCR1, B_PMC_PWRM_SW_PG_CTRL_LOCK);
}

/**
  This function checks if HOST SW Power Gating Control is locked

  @retval lock state
**/
BOOLEAN
PmcIsHostSwPgCtrlLocked (
  VOID
  )
{
  //
  // Get lock info from PWRMBASE + HSWPGCR1
  //
  return ((MmioRead32 (PmcGetPwrmBase () + R_PMC_PWRM_HSWPGCR1) & B_PMC_PWRM_SW_PG_CTRL_LOCK) != 0);
}

/**
  This function checks if LAN wake from DeepSx is enabled

  @retval Lan Wake state
**/
BOOLEAN
PmcIsLanDeepSxWakeEnabled (
  VOID
  )
{
  //
  // Get wake info from PWRMBASE + DSX_CFG
  //
  return ((MmioRead32 (PmcGetPwrmBase () + R_PMC_PWRM_DSX_CFG) & (UINT32) B_PMC_PWRM_DSX_CFG_LAN_WAKE_EN) != 0);
}

/**
  Disables USB2 Core PHY PowerGating during power on for Chipsetinit table update
**/
VOID
PmcUsb2CorePhyPowerGatingDisable (
  VOID
  )
{
  MmioAnd32 (PmcGetPwrmBase () + R_PMC_PWRM_CFG, (UINT32) ~B_PMC_PWRM_CFG_ALLOW_USB2_CORE_PG);
}

/**
  This function reads CPU Early Power-on Configuration (EPOC)

  @retval CPU EPOC value
**/
UINT32
PmcGetCpuEpoc (
  VOID
  )
{
  return MmioRead32 (PmcGetPwrmBase () + R_PMC_PWRM_CPU_EPOC);
}

/**
  This function sets CPU Early Power-on Configuration (EPOC)

  @param[in] CpuEpocValue      CPU EPOC value
**/
VOID
PmcSetCpuEpoc (
  IN UINT32     CpuEpocValue
  )
{
  MmioWrite32 (PmcGetPwrmBase () + R_PMC_PWRM_CPU_EPOC, CpuEpocValue);
}

/**
  This function sets DRAM_RESET# Control Pin value

  @param[in] DramResetVal      0: Pin output is low
                               1: Pin output is tri-stated
**/
VOID
PmcSetDramResetCtlState (
  IN UINT32     DramResetVal
  )
{
  ASSERT (DramResetVal < 2);

  MmioAndThenOr32 (
    PmcGetPwrmBase () + R_PMC_PWRM_CFG2,
    (UINT32)~B_PMC_PWRM_CFG2_DRAM_RESET_CTL,
    DramResetVal << N_PMC_PWRM_CFG2_DRAM_RESET_CTL
    );
}

/**
  This function enables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh
**/
VOID
PmcEnableCf9GlobalReset (
  VOID
  )
{
  MmioOr32 (PmcGetPwrmBase () + R_PMC_PWRM_ETR3, (UINT32) (B_PMC_PWRM_ETR3_CF9GR));
}

/**
  This function disables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh.
**/
VOID
PmcDisableCf9GlobalReset (
  VOID
  )
{
  MmioAnd32 (PmcGetPwrmBase () + R_PMC_PWRM_ETR3, (UINT32) ~B_PMC_PWRM_ETR3_CF9GR);
}

/**
  This function disables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh.
  Global Reset configuration is locked after programming
**/
VOID
PmcDisableCf9GlobalResetWithLock (
  VOID
  )
{
  MmioAndThenOr32 (
    PmcGetPwrmBase () + R_PMC_PWRM_ETR3,
    (UINT32) ~B_PMC_PWRM_ETR3_CF9GR,
    (UINT32) B_PMC_PWRM_ETR3_CF9LOCK
    );
}

/**
  This function disables CF9 reset without Resume Well reset.
  Cf9 0x6/0xE reset will also reset resume well logic.
**/
VOID
PmcDisableCf9ResetWithoutResumeWell (
  VOID
  )
{

  MmioAnd32 (PmcGetPwrmBase () + R_PMC_PWRM_ETR3, (UINT32) ~B_PMC_PWRM_ETR3_CWORWRE);
}

/**
  This function checks PMC Set Strap Message interface

  @retval State of PMC Set Strap Message Interface
**/
BOOLEAN
PmcIsSetStrapMsgInterfaceEnabled (
  VOID
  )
{
  return ((MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_SSMC)) & B_PMC_PWRM_SSMC_SSMS) != 0);
}

/**
  This function sets 16-bit PMC Set Strap Message interface data.

  @param[in] StrapData          Strap Set Data
**/
VOID
PmcSetStrapMsgData (
  IN UINT16           StrapData
  )
{
  UINT32  PchPwrmBase;

  PchPwrmBase = PmcGetPwrmBase ();

  MmioWrite32 ((UINTN) (PchPwrmBase + R_PMC_PWRM_SSMD), (UINT32)StrapData);
  MmioOr32 ((UINTN) (PchPwrmBase + R_PMC_PWRM_SSMC), B_PMC_PWRM_SSMC_SSMS);
}

/**
  This function sets 32-bit PMC Set Strap Message interface data.

  @param[in] StrapData1          Strap Set Data DW1
  @param[in] StrapData2          Strap Set Data DW2 if supported
  @param[in] StrapData3          Strap Set Data DW3 if supported
**/
VOID
PmcSetStrapMsgData32 (
  IN UINT32           StrapData1,
  IN UINT32           StrapData2,
  IN UINT32           StrapData3
  )
{
  UINT32  PchPwrmBase;

  PchPwrmBase = PmcGetPwrmBase ();

  MmioWrite32 ((UINTN) (PchPwrmBase + R_PMC_PWRM_SSMD), StrapData1);
  if (PmcIsExtendedStrapsSupported ()) {
    MmioWrite32 ((UINTN) (PchPwrmBase + R_PMC_PWRM_SSMD_DW2), StrapData2);
    MmioWrite32 ((UINTN) (PchPwrmBase + R_PMC_PWRM_SSMD_DW3), StrapData3);
  }
  MmioOr32 ((UINTN) (PchPwrmBase + R_PMC_PWRM_SSMC), B_PMC_PWRM_SSMC_SSMS);
}

/**
  This function read 16-bit PMC Set Strap Message interface data.

  @retval 16-bit Strap Message Data
**/
UINT16
PmcGetStrapMsgData (
  VOID
  )
{
  return MmioRead16 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_SSMD));
}

/**
  This function read 32-bit PMC Set Strap Message interface data.

  @param[out] StrapData1          Strap Get Data DW1
  @param[out] StrapData2          Strap Get Data DW2 if supported
  @param[out] StrapData3          Strap Get Data DW3 if supported
**/
VOID
PmcGetStrapMsgData32 (
  OUT UINT32  *CpuStrapData1,
  OUT UINT32  *CpuStrapData2,
  OUT UINT32  *CpuStrapData3
  )
{
  *CpuStrapData1 = MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_SSMD));
  if (PmcIsExtendedStrapsSupported ()) {
    *CpuStrapData2 = MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_SSMD_DW2));
    *CpuStrapData3 = MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_SSMD_DW3));
  }
}

/**
  This function locks PMC Set Strap Message interface
**/
VOID
PmcLockSetStrapMsgInterface (
  VOID
  )
{
  MmioOr32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_SSML), B_PMC_PWRM_SSML_SSL);
}

/**
  This function clears RTC Power Failure status (RTC_PWR_FLR)
**/
VOID
PmcClearRtcPowerFailureStatus (
  VOID
  )
{
  //
  // Set B_PMC_PWRM_GEN_PMCON_B_RTC_PWR_STS to 0 to clear it.
  //
  MmioAnd8 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_GEN_PMCON_B), (UINT8) (~B_PMC_PWRM_GEN_PMCON_B_RTC_PWR_STS));
}

/**
  This function will clear the DISB - DRAM Initialization Scratchpad Bit.
**/
VOID
PmcClearDramInitScratchpad (
  VOID
  )
{
  //
  // Clear B_PMC_PWRM_GEN_PMCON_A_DISB.
  // NOTE: Byte access to not clear BIT18 and BIT16
  //
  MmioAnd8 (PmcGetPwrmBase () + R_PMC_PWRM_GEN_PMCON_A + 2, (UINT8) ~((B_PMC_PWRM_GEN_PMCON_A_DISB | B_PMC_PWRM_GEN_PMCON_A_MS4V | B_PMC_PWRM_GEN_PMCON_A_SUS_PWR_FLR) >> 16));
}

/**
  This function enables PCI Express* PME events
**/
VOID
PmcEnablePciExpressPmeEvents (
  VOID
  )
{
  MmioOr32 (PmcGetPwrmBase () + R_PMC_PWRM_GEN_PMCON_B, B_PMC_PWRM_GEN_PMCON_B_BIOS_PCI_EXP_EN);
}

/**
  This function checks if eSPI SMI Lock is set

  @retval eSPI SMI Lock state
**/
BOOLEAN
PmcIsEspiSmiLockSet (
  VOID
  )
{
  return ((MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_GEN_PMCON_A)) & B_PMC_PWRM_GEN_PMCON_A_ESPI_SMI_LOCK) != 0);
}

/**
  This function sets SW SMI Rate.

  @param[in] SwSmiRate        Refer to PMC_SWSMI_RATE for possible values
**/
VOID
PmcSetSwSmiRate (
  IN PMC_SWSMI_RATE          SwSmiRate
  )
{
  UINT32        PchPwrmBase;
  STATIC UINT8  SwSmiRateRegVal[4] = {
    V_PMC_PWRM_GEN_PMCON_A_SWSMI_RTSL_1_5MS,
    V_PMC_PWRM_GEN_PMCON_A_SWSMI_RTSL_16MS,
    V_PMC_PWRM_GEN_PMCON_A_SWSMI_RTSL_32MS,
    V_PMC_PWRM_GEN_PMCON_A_SWSMI_RTSL_64MS
  };

  ASSERT (SwSmiRate <= PmcSwSmiRate64ms);

  PchPwrmBase = PmcGetPwrmBase ();

  //
  // SWSMI_RATE_SEL BIT (PWRMBASE offset 1020h[7:6]) bits are in RTC well
  //
  MmioAndThenOr8 (
    PchPwrmBase + R_PMC_PWRM_GEN_PMCON_A,
    (UINT8)~B_PMC_PWRM_GEN_PMCON_A_SWSMI_RTSL,
    SwSmiRateRegVal[SwSmiRate]
    );
}

/**
  This function sets Periodic SMI Rate.

  @param[in] PeriodicSmiRate        Refer to PMC_PERIODIC_SMI_RATE for possible values
**/
VOID
PmcSetPeriodicSmiRate (
  IN PMC_PERIODIC_SMI_RATE    PeriodicSmiRate
  )
{
  UINT32        PchPwrmBase;
  STATIC UINT8  PeriodicSmiRateRegVal[4] = {
    V_PMC_PWRM_GEN_PMCON_A_PER_SMI_8S,
    V_PMC_PWRM_GEN_PMCON_A_PER_SMI_16S,
    V_PMC_PWRM_GEN_PMCON_A_PER_SMI_32S,
    V_PMC_PWRM_GEN_PMCON_A_PER_SMI_64S
  };

  ASSERT (PeriodicSmiRate <= PmcPeriodicSmiRate64s);

  PchPwrmBase = PmcGetPwrmBase ();

  MmioAndThenOr8 (
    PchPwrmBase + R_PMC_PWRM_GEN_PMCON_A,
    (UINT8)~B_PMC_PWRM_GEN_PMCON_A_PER_SMI_SEL,
    PeriodicSmiRateRegVal[PeriodicSmiRate]
    );
}

/**
  This function reads Power Button Level

  @retval State of PWRBTN# signal (0: Low, 1: High)
**/
UINT8
PmcGetPwrBtnLevel (
  VOID
  )
{
  if (MmioRead32 (PmcGetPwrmBase () + R_PMC_PWRM_GEN_PMCON_B) & B_PMC_PWRM_GEN_PMCON_B_PWRBTN_LVL) {
    return 1;
  } else {
    return 0;
  }
}

/**
  This function checks if memory is placed in self-refresh

  @retval Memory Placed In Self-Refresh state
**/
BOOLEAN
PmcIsMemoryPlacedInSelfRefreshState (
  VOID
  )
{
  return ((MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_GEN_PMCON_A)) & B_PMC_PWRM_GEN_PMCON_A_MEM_SR) != 0);
}

/**
  This function gets Group to GPE0 configuration

  @param[out] GpeDw0Value       GPIO Group to GPE_DW0 assignment
  @param[out] GpeDw1Value       GPIO Group to GPE_DW1 assignment
  @param[out] GpeDw2Value       GPIO Group to GPE_DW2 assignment
**/
VOID
PmcGetGpioGpe (
  OUT UINT32    *GpeDw0Value,
  OUT UINT32    *GpeDw1Value,
  OUT UINT32    *GpeDw2Value
  )
{
  UINT32 Data32;

  Data32 = MmioRead32 ((UINTN) (PmcGetPwrmBase () + R_PMC_PWRM_GPIO_CFG));

  *GpeDw0Value = ((Data32 & B_PMC_PWRM_GPIO_CFG_GPE0_DW0) >> N_PMC_PWRM_GPIO_CFG_GPE0_DW0);
  *GpeDw1Value = ((Data32 & B_PMC_PWRM_GPIO_CFG_GPE0_DW1) >> N_PMC_PWRM_GPIO_CFG_GPE0_DW1);
  *GpeDw2Value = ((Data32 & B_PMC_PWRM_GPIO_CFG_GPE0_DW2) >> N_PMC_PWRM_GPIO_CFG_GPE0_DW2);
}

/**
  This function sets Group to GPE0 configuration

  @param[out] GpeDw0Value       GPIO Group to GPE_DW0 assignment
  @param[out] GpeDw1Value       GPIO Group to GPE_DW1 assignment
  @param[out] GpeDw2Value       GPIO Group to GPE_DW2 assignment
**/
VOID
PmcSetGpioGpe (
  IN UINT32    GpeDw0Value,
  IN UINT32    GpeDw1Value,
  IN UINT32    GpeDw2Value
  )
{
  UINT32               Data32Or;
  UINT32               Data32And;

  //
  // Program GPIO_CFG register
  //
  Data32And = (UINT32) ~(B_PMC_PWRM_GPIO_CFG_GPE0_DW2 | B_PMC_PWRM_GPIO_CFG_GPE0_DW1 | B_PMC_PWRM_GPIO_CFG_GPE0_DW0);
  Data32Or  = (UINT32) ((GpeDw2Value << N_PMC_PWRM_GPIO_CFG_GPE0_DW2) |
                        (GpeDw1Value << N_PMC_PWRM_GPIO_CFG_GPE0_DW1) |
                        (GpeDw0Value << N_PMC_PWRM_GPIO_CFG_GPE0_DW0));

  MmioAndThenOr32 (
    (PmcGetPwrmBase () + R_PMC_PWRM_GPIO_CFG),
    Data32And,
    Data32Or
    );
}

/**
  This function configures SoundWire buffer RCOMP

  @param[in] SndwRcomp    Soundwire RCOMP configuration
                          Soundwire 1 and/or 2 need to be set
                          to enabled when executing this function
**/
VOID
PmcConfigureSoundWireBufferRcomp (
  IN PMC_SNDW_RCOMP_BUFFER_CONFIG  SndwRcomp
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));

  // Only BIT0/1/2 can be set
  ASSERT ((SndwRcomp & (UINT32)~0x7) == 0);

  // BIT0 and/or BIT1 must be set
  ASSERT ((SndwRcomp & 0x3) != 0);

  Wbuf.Buf0 = (UINT32)SndwRcomp;
  Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_SNDW_RCOMP, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

/**
  This function enables and disables PCIe reference clocks

  @param[in] ModifyClocksMask       mask of Clock Enables to be modified in this call
  @param[in] EnabledClocksMask      mask of Clock Enables to be set
  @param[in] ModifyPortClkreqMask   mask of PCIe port CLKREQ enable to be set
  @param[in] EnabledPortClkreqMask  mask of PCIe port CLKREQ to enable
**/
VOID
PmcSetPcieClockEnableMask (
  UINT32 ModifyClocksMask,
  UINT32 EnabledClocksMask,
  UINT32 ModifyPortClkreqMask,
  UINT32 EnabledPortClkreqMask
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));

  Wbuf.Buf0 = ModifyClocksMask;
  Wbuf.Buf1 = EnabledClocksMask;
  Wbuf.Buf2 = ModifyPortClkreqMask;
  Wbuf.Buf3 = EnabledPortClkreqMask;

  Status = PmcSendCommand (V_PMC_PWRM_IPC_SRC_CLK_PORT_MAPPING_CMD, 0, 8, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

#define PMC_CRID_UIP_TIMEOUT  0x1000000
/**
  Wait for CRID update ready.
**/
STATIC
VOID
PmcWaitForCridUip (
  VOID
  )
{
  UINT32           PchPwrmBase;
  volatile UINT32  Timeout;

  PchPwrmBase = PmcGetPwrmBase ();
  Timeout     = 0;
  while (MmioRead32 (PchPwrmBase + R_PMC_PWRM_CRID_UIP) & B_PMC_PWRM_CRID_UIP_CRIP_UIP) {
    if (Timeout++ > PMC_CRID_UIP_TIMEOUT) {
      ASSERT (FALSE);
      break;
    }
  }
}

/**
  This function disables SA SSC
**/
VOID
PmcDisableSaSsc(
  VOID
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem(&Wbuf, sizeof(PMC_IPC_COMMAND_BUFFER));

  Wbuf.Buf0 = BIT0;
  Status = PmcSendCommand(V_PMC_PWRM_IPC_CMD_COMMAND_SSC_STATE, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR(Status);
}

/**
  Check if CRID mode is supported.

  @param[out] CridSupported   Return TRUE if Crid mode is supported.
  @param[out] OrgRid          Return original rid.
  @param[out] NewRid          Return new rid.

  @retval  EFI_SUCCESS        System can detect the CRID mode.
  @retval  EFI_UNSUPPORTED    System cannot detect the CRID mode.
**/
EFI_STATUS
PmcDetectCrid0 (
  BOOLEAN *CridSupported,
  UINT8   *OrgRid,
  UINT8   *NewRid
  )
{
  UINT64  PmcBase;
  UINT32  Crid;
  UINT32  PchPwrmBase;

  PmcBase = PmcPciCfgBase ();
  if (PciSegmentRead16 (PmcBase) == 0xFFFF) {
    ASSERT (FALSE);
    return EFI_UNSUPPORTED;
  }

  PchPwrmBase = PmcGetPwrmBase ();
  Crid = MmioRead32 (PchPwrmBase + R_PMC_PWRM_CRID);
  //
  // If Crid is locked or RID_SEL is changed then skip the detection.
  //
  if (((Crid & B_PMC_PWRM_CRID_CRID_LK) != 0) ||
      ((Crid & B_PMC_PWRM_CRID_RID_SEL) != 0))
  {
    ASSERT (FALSE);
    return EFI_UNSUPPORTED;
  }

  *OrgRid = PciSegmentRead8 (PmcBase + PCI_REVISION_ID_OFFSET);
  PmcWaitForCridUip ();
  MmioWrite8 (PchPwrmBase + R_PMC_PWRM_CRID, V_PMC_PWRM_CRID_RID_SEL_CRID0);
  PmcWaitForCridUip ();
  *NewRid = PciSegmentRead8 (PmcBase + PCI_REVISION_ID_OFFSET);
  MmioWrite8 (PchPwrmBase + R_PMC_PWRM_CRID, V_PMC_PWRM_CRID_RID_SEL_REVISIONID);
  PmcWaitForCridUip ();

  *CridSupported = (*OrgRid != *NewRid);
  return EFI_SUCCESS;
}

/**
  Configure PMC S0ix Policies

  @param[in] Data32  Input value for Wbuf0
**/
VOID
PmcConfigS0ixPolicies (
  IN UINT32                 Data32
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));


  //
  // Allow SLP_S0# assertion when debug enabled
  //
  Data32 |= BIT0;

  Wbuf.Buf0 = Data32;
  Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_SLP_CTRL, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

/**
  Disable ME devices. This function can be called only once during
  boot. Calling this function with DisableMe = FALSE will only tell PMC
  that we wish to keep ME enabled and to disallow any further attempts at disabling ME.

  @param[in] DisableMe  TRUE if this function should disable ME.
**/
VOID
PmcDisableMeDevices (
  IN BOOLEAN  DisableMe
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));
  if (IsSimicsEnvironment ()) {
    return;
  } else {
    Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_ME_DISABLE, DisableMe, 0, &Wbuf, NULL);
    ASSERT_EFI_ERROR (Status);
  }
}

/**
  This function disables TraceHub by enabling power gating
**/
VOID
PmcDisableTraceHub (
  VOID
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));

  Wbuf.Buf0 = BIT0;
  Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_NPK_STATE, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

/**
  This function enables TraceHub by disabling power gating
**/
VOID
PmcEnableTraceHub (
  VOID
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));

  Wbuf.Buf0 = BIT1;
  Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_NPK_STATE, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

/**
  This function forces ACRO on during Sx that allows TraceHub to request for clock and use it for Sx debug
**/
VOID
PmcEnableTraceHubDebugForSx (
  VOID
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));

  Wbuf.Buf0 = BIT2;
  Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_NPK_STATE, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

/**
  This function removes force ACRO on during Sx that disallows TraceHub to request for clock and use it for Sx debug
**/
VOID
PmcDisableTraceHubDebugForSx (
  VOID
  )
{
  EFI_STATUS                Status;
  PMC_IPC_COMMAND_BUFFER    Wbuf;

  ZeroMem (&Wbuf, sizeof (PMC_IPC_COMMAND_BUFFER));

  Wbuf.Buf0 = BIT3;
  Status = PmcSendCommand (V_PMC_PWRM_IPC_CMD_COMMAND_NPK_STATE, 0, 4, &Wbuf, NULL);
  ASSERT_EFI_ERROR (Status);
}

/**
  This function checks if TraceHub is power gated

  @retval TraceHub power gating state
**/
BOOLEAN
PmcIsTraceHubPowerGated (
  VOID
  )
{
  //
  // Check HSWPGCR1 (PWRMBASE+0x1DD0)[0]
  //
  if ((MmioRead32 (PmcGetPwrmBase () + R_PMC_PWRM_HSWPGCR1) & B_PMC_PWRM_NPK_VNN_SW_PG_CTRL) == B_PMC_PWRM_NPK_VNN_SW_PG_CTRL) {
    return TRUE;
  }

  return FALSE;
}