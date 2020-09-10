/** @file
  This file contains information about VMD assigned devices.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation.

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
#ifndef _VMD_INFO_HOB_H_
#define _VMD_INFO_HOB_H_

#include <Library/VmdInfoLib.h>

extern EFI_GUID gVmdInfoHobGuid;

#pragma pack (1)

/**
  PCIe device detection information.
  This information will be used to display BIOS setup option to users.
**/

typedef struct {
  UINT8         DeviceDetected;
  UINT32        DevId;
  UINT8         ClassCode;
  UINT8         RpDev;
  UINT8         RpFunc;
  UINT8         PortEn;
  UINT8         RpIndex;
  UINT8         Reserved[2];
} PORT_INFO;

//
// VMD Port Info
//
typedef struct {
  PORT_INFO PortInfo[VMD_MAX_DEVICES];
} VMD_PORT_INFO;

//
// VMD Info Hob
//
typedef struct {
  EFI_HOB_GUID_TYPE      EfiHobGuidType;
  VMD_PORT_INFO          VmdPortInfo;
} VMD_INFO_HOB;

#pragma pack ()


#endif
