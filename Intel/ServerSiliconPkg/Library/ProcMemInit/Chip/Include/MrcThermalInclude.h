/** @file

  MRC Thermal Hob Include file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 Intel Corporation. <BR>

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
#ifndef _MRC_THERMAL_INCLUDE_H_
#define _MRC_THERMAL_INCLUDE_H_

#include <SysHost.h>
#include <Library/BaseMemoryLib.h>
#include <Library/HobLib.h>
#include <Library/MemMcIpLib.h>
#include <Guid/MrcThermalHob.h>
#include <Library/MemoryServicesLib.h>

/**
  Function to save MRC Thermal register information to HOB.

  @param[in] Host - Pointer to System Host data structure

  @retval None
**/
VOID
SaveMrcThermalInfoToHob (
  IN PSYSHOST Host
  );

#endif
