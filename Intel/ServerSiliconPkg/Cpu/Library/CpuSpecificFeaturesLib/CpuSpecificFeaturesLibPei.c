/** @file
  CPU Specific Features Library with PEI phase code.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2020 Intel Corporation. <BR>

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

#include <Library/PeiServicesLib.h>
#include <Library/CpuEarlyDataLib.h>
#include <Ppi/CpuLatePolicyPpi.h>

#include "CpuSpecificFeatures.h"

/**
  Get CPU Specific Features CPU Policy.

  @return The pointer to the Policy.

**/
CPU_POLICY_COMMON *
GetCpuSpecificFeaturesCpuPolicy (
  VOID
  )
{
  EFI_STATUS            Status;
  CPU_LATE_POLICY_PPI   *CpuLatePolicy;

  Status = PeiServicesLocatePpi (
             &gPeiCpuLatePolicyPpiGuid,
             0,
             NULL,
             (VOID **) &CpuLatePolicy
             );
  ASSERT_EFI_ERROR (Status);
  if (!EFI_ERROR (Status)) {
    return &CpuLatePolicy->Policy;
  }

  return NULL;
}

/**
  Register CPU features.

  @param  FileHandle    Handle of the file being invoked.
  @param  PeiServices   Describes the list of possible PEI Services.

  @retval EFI_SUCCESS   Register successfully
**/
RETURN_STATUS
EFIAPI
CpuSpecificFeaturesLibPeiConstructor (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )
{
  mCpuSpecificFeaturesCpuPolicy = GetCpuSpecificFeaturesCpuPolicy ();
  return CpuSpecificFeaturesLibConstructor ();
}
