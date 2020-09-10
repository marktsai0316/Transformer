/** @file
  Source code file for Silicon Init Pre Memory module.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2019 Intel Corporation.

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

#include "SiInitPreMem.h"
#include <Library/PchInfoLib.h>
#include <Library/PerformanceLib.h>
#include <Library/PchTraceHubLib.h>


/**
  Slicon Initializes after Policy PPI produced, All required polices must be installed before the callback

  @param[in] PeiServices          General purpose services available to every PEIM.
  @param[in] NotifyDescriptor     The notification structure this PEIM registered on install.
  @param[in] Ppi                  The memory discovered PPI.  Not used.

  @retval EFI_SUCCESS             Succeeds.
**/
EFI_STATUS
EFIAPI
SiInitPreMemOnPolicy (
  IN  EFI_PEI_SERVICES             **PeiServices,
  IN  EFI_PEI_NOTIFY_DESCRIPTOR    *NotifyDescriptor,
  IN  VOID                         *Ppi
  );

static EFI_PEI_NOTIFY_DESCRIPTOR  mSiInitNotifyList[] = {
  {
    EFI_PEI_PPI_DESCRIPTOR_NOTIFY_DISPATCH | EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST,
    &gSiPreMemPolicyPpiGuid,
    SiInitPreMemOnPolicy
  }
};

/**
  Slicon Initializes after Policy PPI produced, All required polices must be installed before the callback

  @param[in] PeiServices          General purpose services available to every PEIM.
  @param[in] NotifyDescriptor     The notification structure this PEIM registered on install.
  @param[in] Ppi                  The memory discovered PPI.  Not used.

  @retval EFI_SUCCESS             Succeeds.
**/
EFI_STATUS
EFIAPI
SiInitPreMemOnPolicy (
  IN  EFI_PEI_SERVICES             **PeiServices,
  IN  EFI_PEI_NOTIFY_DESCRIPTOR    *NotifyDescriptor,
  IN  VOID                         *Ppi
  )
{
  EFI_STATUS              Status;
  SI_POLICY_PPI           *SiPolicyPpi;
  SI_PREMEM_POLICY_PPI    *SiPreMemPolicyPpi;

  PERF_START (NULL, "Silicon Init After PPI", "PEI", 0);

  DEBUG ((DEBUG_INFO, "SiInitPreMemOnPolicy() Start\n"));
  SiPolicyPpi = NULL;
  Status = PeiServicesLocatePpi (
             &gSiPolicyPpiGuid,
             0,
             NULL,
             (VOID **)&SiPolicyPpi
             );
  //
  // Prevent from potential execution in PostMem phase
  //
  if (Status == EFI_SUCCESS) {
    return EFI_SUCCESS;
  }

  Status = PeiServicesLocatePpi (
             &gSiPreMemPolicyPpiGuid,
             0,
             NULL,
             (VOID **)&SiPreMemPolicyPpi
             );

  ASSERT_EFI_ERROR (Status);

  //
  // Validate PCH policies
  //
  PchValidatePolicy (SiPreMemPolicyPpi);

  //
  // Initialize PCH after Policy PPI produced
  //
  PchOnPolicyInstalled (SiPreMemPolicyPpi);


  DEBUG ((DEBUG_INFO, "SiInitPreMemOnPolicy() - End\n"));
  PERF_END (NULL, "Silicon Init After PPI", "PEI", 0);
  return EFI_SUCCESS;
}

/**
  Silicon Initializes before Policy PPI produced

  @param[in] FileHandle           The file handle of the file, Not used.
  @param[in] PeiServices          General purpose services available to every PEIM.

  @retval EFI_SUCCESS             The function completes successfully
**/
EFI_STATUS
EFIAPI
SiInitPrePolicy (
  IN  EFI_PEI_FILE_HANDLE      FileHandle,
  IN CONST EFI_PEI_SERVICES  **PeiServices
  )
{
  EFI_STATUS                            Status;
  PERF_START (NULL, "Silicon Init Before PPI", "PEI", 0);
  DEBUG ((DEBUG_INFO, "SiInitPrePolicy() Start\n"));

  //
  // Initializes PCH before Policy initialized
  //
  PERF_START_EX (&gPerfPchPrePolicyGuid, NULL, NULL, AsmReadTsc(), 0x50E0);
  PchInitPrePolicy ();
  PERF_END_EX (&gPerfPchPrePolicyGuid, NULL, NULL, AsmReadTsc(), 0x50E1);

  //
  // Register Silicon init call back after PlatformPolicy PPI produced
  //
  Status = PeiServicesNotifyPpi (mSiInitNotifyList);
  ASSERT_EFI_ERROR (Status);

  DEBUG ((DEBUG_INFO, "SiInitPrePolicy() - End\n"));
  PERF_END (NULL, "Silicon Init Before PPI", "PEI", 0);
  return EFI_SUCCESS;
}
