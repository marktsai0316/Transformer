/** @file
  PCH ADR Pei Config Library

@copyright
  INTEL CONFIDENTIAL
  Copyright 2019 - 2020 Intel Corporation.

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

  This file contains a 'Sample Driver' and is licensed as such under the terms
  of your license agreement with Intel or your vendor. This file may be modified
  by the user, subject to the additional terms of the license agreement.

@par Specification Reference:
**/

#include <Uefi/UefiBaseType.h>
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeiServicesLib.h>
#include <Ppi/SiPolicy.h>
#include <AdrConfig.h>

/**
  Retrieves pointer to ADR_CONFIG from PCH policy.

  @param[out] PchAdrConfig Pointer to pointer to ADR_CONFIG.
**/
VOID
PchAdrGetConfig (
  OUT ADR_CONFIG **PchAdrConfig
  )
{
  EFI_STATUS      Status;
  SI_POLICY_PPI  *SiPolicy;
  ADR_CONFIG     *AdrConfig;
  //
  // Get Policy settings through the SiPreMemPolicy PPI
  //
  Status = PeiServicesLocatePpi (
             &gSiPolicyPpiGuid,
             0,
             NULL,
             (VOID **) &SiPolicy
             );
  if (Status != EFI_SUCCESS) {
    //
    // SI_PREMEM_POLICY_PPI must be installed at this point
    //
    ASSERT (FALSE);
    return;
  }
  Status = GetConfigBlock ((VOID *) SiPolicy, &gAdrConfigGuid, (VOID *) &AdrConfig);
  ASSERT_EFI_ERROR (Status);
  *PchAdrConfig = AdrConfig;
}
