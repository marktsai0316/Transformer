/** @file
  Code File for CPU Power Management

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2006 - 2020 Intel Corporation. <BR>

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

#include "CpuPpmIncludes.h"

/**

  This routine is called to program DYNAMIC_PERF_POWER_CTL.  It will be call multiple time passing any the SocketNumber to be programmed.

  @param SocketNumber          Socket index that is executing.
  @param DynamicPerPowerCtl    Pointer to DYNAMIC_PER_POWER_CTL instance.

  @retval                      None

**/
VOID
EFIAPI
InitializeDynamicPerfPowerCtl (
  UINT8                     SocketNumber,
  DYNAMIC_PER_POWER_CTL     *DynamicPerPowerCtl
  )
{

  SetDynamicPerPowerCtlData (
    SocketNumber,
    DynamicPerPowerCtl->UncrPerfPlmtOvrdEn,
    DynamicPerPowerCtl->EetOverrideEn,
    DynamicPerPowerCtl->IoBwPlmtOvrdEn,
    DynamicPerPowerCtl->IomApmOvrdEn,
    DynamicPerPowerCtl->KtiApmOvrdEn
    );
}
