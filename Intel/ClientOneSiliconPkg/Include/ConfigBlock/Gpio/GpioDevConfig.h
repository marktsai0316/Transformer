/** @file
  GPIO device policy

@copyright
  INTEL CONFIDENTIAL
  Copyright 2017 - 2018 Intel Corporation.

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
#ifndef _GPIO_DEV_CONFIG_H_
#define _GPIO_DEV_CONFIG_H_

extern EFI_GUID gGpioDxeConfigGuid;

#define GPIO_DXE_CONFIG_REVISION 1

#pragma pack (push,1)

/**
  This structure contains the DXE policies which are related to GPIO device.

  <b>Revision 1:</b>
  - Inital version.
**/
typedef struct {
  CONFIG_BLOCK_HEADER   Header;          ///< Config Block Header
  /**
    If GPIO ACPI device is not used by OS it can be hidden. In such case
    no other device exposed to the system can reference GPIO device in one
    of its resources through GpioIo(..) or GpioInt(..) ACPI descriptors.
    <b>0: Disable</b>; 1: Enable
  **/
  UINT32  HideGpioAcpiDevice    :  1;
  UINT32  RsvdBits              : 31;    ///< Reserved bits

} GPIO_DXE_CONFIG;

#pragma pack (pop)

#endif // _GPIO_DEV_CONFIG_H_