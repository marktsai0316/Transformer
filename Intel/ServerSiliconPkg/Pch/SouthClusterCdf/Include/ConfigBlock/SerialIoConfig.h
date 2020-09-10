/** @file
  Serial IO policy

@copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2018 Intel Corporation.

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
#ifndef _SERIAL_IO_CONFIG_H_
#define _SERIAL_IO_CONFIG_H_

#define SERIAL_IO_CONFIG_REVISION 2
extern EFI_GUID gSerialIoConfigGuid;

#include <SerialIoDevices.h>

#pragma pack (push,1)

/**
  The PCH_SERIAL_IO_CONFIG block provides the configurations to set the Serial IO controllers

    Revision 1:
  - Inital version.
  <b>Revision 2:</b>
  - Added Chip Select default mode selection (HW or SW) in SERIAL_IO_SPI_CONFIG.
  - Added Chip Select default state selection (Low or High) in SERIAL_IO_SPI_CONFIG when SW is in control.
**/
typedef struct {
  CONFIG_BLOCK_HEADER   Header;                                              ///< Config Block Header
  SERIAL_IO_SPI_CONFIG  SpiDeviceConfig[PCH_MAX_SERIALIO_SPI_CONTROLLERS];   ///< SPI Configuration
  SERIAL_IO_I2C_CONFIG  I2cDeviceConfig[PCH_MAX_SERIALIO_I2C_CONTROLLERS];   ///< I2C Configuration
  SERIAL_IO_UART_CONFIG UartDeviceConfig[PCH_MAX_SERIALIO_UART_CONTROLLERS]; ///< UART Configuration
} PCH_SERIAL_IO_CONFIG;

#pragma pack (pop)

#endif // _SERIAL_IO_CONFIG_H_
