/** @file
  DMI policy

@copyright
  INTEL CONFIDENTIAL
  Copyright 2015 - 2020 Intel Corporation.

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
#ifndef _PCH_DMI_CONFIG_H_
#define _PCH_DMI_CONFIG_H_

#define PCH_DMI_CONFIG_REVISION 1
extern EFI_GUID gPchDmiConfigGuid;


#pragma pack (push,1)


/**
 The PCH_DMI_CONFIG block describes the expected configuration of the PCH for DMI.
   <b>Revision 1</b>:
  - Initial version.
**/
typedef struct {
  CONFIG_BLOCK_HEADER   Header;         ///< Config Block Header

  UINT32     PwrOptEnable      :  1;    ///< <b>0: Disable</b>; 1: Enable DMI Power Optimizer on PCH side.
  UINT32     DmiAspmCtrl       :  8;    ///< ASPM configuration on the PCH side of the DMI/OPI Link. Default is <b>PchPcieAspmAutoConfig</b>
  UINT32     CwbEnable         :  1;    ///< 0: Disable; <b>1: Enable</b> Central Write Buffer feature configurable and enabled by default
  UINT32     L1RpCtl           :  1;    ///< 0: Disable; <b>1: Enable</b> Allow DMI enter L1 when all root ports are in L1, L0s or link down. Disabled by default.
  /**
   When set to TRUE turns on:
     - L1 State Controller Power Gating
     - L1 State PHY Data Lane Power Gating
     - PHY Common Lane Power Gating
     - Hardware Autonomous Enable
     - PMC Request Enable and Sleep Enable
  **/
  UINT32     DmiPowerReduction :  1;
  UINT32     ClockGating       :  1;    ///< 0: Disable; 1: Enable clock gating.
  UINT32     Rsvdbits          : 19;    ///< Reserved bits
} PCH_DMI_CONFIG;

#pragma pack (pop)

#endif // _PCH_DMI_CONFIG_H_