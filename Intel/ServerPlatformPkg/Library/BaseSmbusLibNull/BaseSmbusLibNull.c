/** @file
  Null Base Subus Library instance with empty functions.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2011 - 2017 Intel Corporation. <BR>

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

#include <Library/BaseLib.h>
#include <Base.h>
#include <Library/SmbusLib.h>
#include <Library/DebugLib.h>

/**
  Executes an SMBUS quick read command.

  Executes an SMBUS quick read command on the SMBUS device specified by SmBusAddress.
  Only the SMBUS slave address field of SmBusAddress is required.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If PEC is set in SmBusAddress, then ASSERT().
  If Command in SmBusAddress is not zero, then ASSERT().
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS  The SMBUS command was executed.
                        RETURN_TIMEOUT  A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

**/
VOID
EFIAPI
SmBusQuickRead (
  IN  UINTN                     SmBusAddress,
  OUT RETURN_STATUS             *Status       OPTIONAL
  )
{
  ASSERT (!SMBUS_LIB_PEC (SmBusAddress));
  if (SMBUS_LIB_PEC (SmBusAddress)) {
    return;
  }
  ASSERT (SMBUS_LIB_COMMAND (SmBusAddress) == 0);
  if (SMBUS_LIB_COMMAND (SmBusAddress) != 0) {
    return;
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    return;
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    return;
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
}

/**
  Executes an SMBUS quick write command.

  Executes an SMBUS quick write command on the SMBUS device specified by SmBusAddress.
  Only the SMBUS slave address field of SmBusAddress is required.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If PEC is set in SmBusAddress, then ASSERT().
  If Command in SmBusAddress is not zero, then ASSERT().
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

**/
VOID
EFIAPI
SmBusQuickWrite (
  IN  UINTN                     SmBusAddress,
  OUT RETURN_STATUS             *Status       OPTIONAL
  )
{
  ASSERT (!SMBUS_LIB_PEC (SmBusAddress));
  if (SMBUS_LIB_PEC (SmBusAddress)) {
    return;
  }
  ASSERT (SMBUS_LIB_COMMAND (SmBusAddress) == 0);
  if (SMBUS_LIB_COMMAND (SmBusAddress) != 0) {
    return;
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    return;
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    return;
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
}

/**
  Executes an SMBUS receive byte command.

  Executes an SMBUS receive byte command on the SMBUS device specified by SmBusAddress.
  Only the SMBUS slave address field of SmBusAddress is required.
  The byte received from the SMBUS is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Command in SmBusAddress is not zero, then ASSERT().
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The byte received from the SMBUS.

**/
UINT8
EFIAPI
SmBusReceiveByte (
  IN  UINTN          SmBusAddress,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_COMMAND (SmBusAddress) == 0);
  if (SMBUS_LIB_COMMAND (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS send byte command.

  Executes an SMBUS send byte command on the SMBUS device specified by SmBusAddress.
  The byte specified by Value is sent.
  Only the SMBUS slave address field of SmBusAddress is required.  Value is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Command in SmBusAddress is not zero, then ASSERT().
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Value         The 8-bit value to send.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The parameter of Value.

**/
UINT8
EFIAPI
SmBusSendByte (
  IN  UINTN          SmBusAddress,
  IN  UINT8          Value,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_COMMAND (SmBusAddress) == 0);
  if (SMBUS_LIB_COMMAND (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS read data byte command.

  Executes an SMBUS read data byte command on the SMBUS device specified by SmBusAddress.
  Only the SMBUS slave address and SMBUS command fields of SmBusAddress are required.
  The 8-bit value read from the SMBUS is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The byte read from the SMBUS.

**/
UINT8
EFIAPI
SmBusReadDataByte (
  IN  UINTN          SmBusAddress,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS write data byte command.

  Executes an SMBUS write data byte command on the SMBUS device specified by SmBusAddress.
  The 8-bit value specified by Value is written.
  Only the SMBUS slave address and SMBUS command fields of SmBusAddress are required.
  Value is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Value         The 8-bit value to write.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The parameter of Value.

**/
UINT8
EFIAPI
SmBusWriteDataByte (
  IN  UINTN          SmBusAddress,
  IN  UINT8          Value,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS read data word command.

  Executes an SMBUS read data word command on the SMBUS device specified by SmBusAddress.
  Only the SMBUS slave address and SMBUS command fields of SmBusAddress are required.
  The 16-bit value read from the SMBUS is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The byte read from the SMBUS.

**/
UINT16
EFIAPI
SmBusReadDataWord (
  IN  UINTN          SmBusAddress,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS write data word command.

  Executes an SMBUS write data word command on the SMBUS device specified by SmBusAddress.
  The 16-bit value specified by Value is written.
  Only the SMBUS slave address and SMBUS command fields of SmBusAddress are required.
  Value is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Value         The 16-bit value to write.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The parameter of Value.

**/
UINT16
EFIAPI
SmBusWriteDataWord (
  IN  UINTN          SmBusAddress,
  IN  UINT16         Value,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS process call command.

  Executes an SMBUS process call command on the SMBUS device specified by SmBusAddress.
  The 16-bit value specified by Value is written.
  Only the SMBUS slave address and SMBUS command fields of SmBusAddress are required.
  The 16-bit value returned by the process call command is returned.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Length in SmBusAddress is not zero, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Value         The 16-bit value to write.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The 16-bit value returned by the process call command.

**/
UINT16
EFIAPI
SmBusProcessCall (
  IN  UINTN          SmBusAddress,
  IN  UINT16         Value,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS read block command.

  Executes an SMBUS read block command on the SMBUS device specified by SmBusAddress.
  Only the SMBUS slave address and SMBUS command fields of SmBusAddress are required.
  Bytes are read from the SMBUS and stored in Buffer.
  The number of bytes read is returned, and will never return a value larger than 32-bytes.
  If Status is not NULL, then the status of the executed command is returned in Status.
  It is the caller's responsibility to make sure Buffer is large enough for the total number of bytes read.
  SMBUS supports a maximum transfer size of 32 bytes, so Buffer does not need to be any larger than 32 bytes.
  If Length in SmBusAddress is not zero, then ASSERT().
  If Buffer is NULL, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Buffer        Pointer to the buffer to store the bytes read from the SMBUS.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_SUCCESS The SMBUS command was executed.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The number of bytes read.

**/
UINTN
EFIAPI
SmBusReadBlock (
  IN  UINTN          SmBusAddress,
  OUT VOID           *Buffer,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (Buffer != NULL);
  if (Buffer == NULL) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) == 0);
  if (SMBUS_LIB_LENGTH (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS write block command.

  Executes an SMBUS write block command on the SMBUS device specified by SmBusAddress.
  The SMBUS slave address, SMBUS command, and SMBUS length fields of SmBusAddress are required.
  Bytes are written to the SMBUS from Buffer.
  The number of bytes written is returned, and will never return a value larger than 32-bytes.
  If Status is not NULL, then the status of the executed command is returned in Status.
  If Length in SmBusAddress is zero or greater than 32, then ASSERT().
  If Buffer is NULL, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  Buffer        Pointer to the buffer to store the bytes read from the SMBUS.

  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The number of bytes written.

**/
UINTN
EFIAPI
SmBusWriteBlock (
  IN  UINTN          SmBusAddress,
  OUT VOID           *Buffer,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (Buffer != NULL);
  if (Buffer == NULL) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) >= 1);
  if (SMBUS_LIB_LENGTH (SmBusAddress) < 1) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) <= 32);
  if (SMBUS_LIB_LENGTH (SmBusAddress) > 32) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}

/**
  Executes an SMBUS block process call command.

  Executes an SMBUS block process call command on the SMBUS device specified by SmBusAddress.
  The SMBUS slave address, SMBUS command, and SMBUS length fields of SmBusAddress are required.
  Bytes are written to the SMBUS from WriteBuffer.  Bytes are then read from the SMBUS into ReadBuffer.
  If Status is not NULL, then the status of the executed command is returned in Status.
  It is the caller's responsibility to make sure ReadBuffer is large enough for the total number of bytes read.
  SMBUS supports a maximum transfer size of 32 bytes, so Buffer does not need to be any larger than 32 bytes.
  If Length in SmBusAddress is zero or greater than 32, then ASSERT().
  If WriteBuffer is NULL, then ASSERT().
  If ReadBuffer is NULL, then ASSERT().
  If any reserved bits of SmBusAddress are set, then ASSERT().

  @param  SmBusAddress  Address that encodes the SMBUS Slave Address,
                        SMBUS Command, SMBUS Data Length, and PEC.
  @param  WriteBuffer   Pointer to the buffer of bytes to write to the SMBUS.
  @param  ReadBuffer    Pointer to the buffer of bytes to read from the SMBUS.
  @param  Status        Return status for the executed command.
                        This is an optional parameter and may be NULL.
                        RETURN_TIMEOUT A timeout occurred while executing the SMBUS command.
                        RETURN_DEVICE_ERROR  The request was not completed because a failure
                        reflected in the Host Status Register bit.  Device errors are a result
                        of a transaction collision, illegal command field, unclaimed cycle
                        (host initiated), or bus errors (collisions).
                        RETURN_CRC_ERROR  The checksum is not correct (PEC is incorrect)
                        RETURN_UNSUPPORTED  The SMBus operation is not supported.

  @return The number of bytes written.

**/
UINTN
EFIAPI
SmBusBlockProcessCall (
  IN  UINTN          SmBusAddress,
  IN  VOID           *WriteBuffer,
  OUT VOID           *ReadBuffer,
  OUT RETURN_STATUS  *Status        OPTIONAL
  )
{
  ASSERT (WriteBuffer != NULL);
  if (WriteBuffer == NULL) {
    CpuDeadLoop ();
  }
  ASSERT (ReadBuffer != NULL);
  if (ReadBuffer  == NULL) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) >= 1);
  if (SMBUS_LIB_LENGTH (SmBusAddress) < 1) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_LENGTH (SmBusAddress) <= 32);
  if (SMBUS_LIB_LENGTH (SmBusAddress) > 32) {
    CpuDeadLoop ();
  }
  ASSERT (SMBUS_LIB_RESERVED (SmBusAddress) == 0);
  if (SMBUS_LIB_RESERVED (SmBusAddress) != 0) {
    CpuDeadLoop ();
  }
  if (Status != NULL) {
    *Status = RETURN_UNSUPPORTED;
  }
  return 0;
}