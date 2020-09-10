/** @file

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

  Unless otherwise agreed by Intel in writing, you may not remove or alter this notice
  or any other notice embedded in Materials by Intel or Intel's suppliers or licensors in any way.
**/


#include "FruCpuFeatureSgx3v0.h"

// Might need a static global to speed things up
SIP_CORE_3V0_PPI *mSipCore3v0 = NULL;

EFI_STATUS
EFIAPI
_ProgramPrmrr (
  IN FRU_CPU_FEATURE_SGX_3V0_PPI *This,
  IN CONST EFI_PEI_SERVICES      **PeiServices
  )
{
  EFI_STATUS Status = EFI_UNSUPPORTED;
  DEBUG ((EFI_D_INFO, "[FRU_SGX] %a BEGIN\n", __FUNCTION__));
  //
  // Locate Ppi
  //
  if (mSipCore3v0 == NULL) {
    Status = (*PeiServices)->LocatePpi (
      PeiServices,
      &gSecuritySipCore3v0PpiGuid,
      0,
      NULL,
      &mSipCore3v0
      );
  }
  if (EFI_ERROR(Status)) {
    goto Return_FruCpuFeatureSgx3v0_ProgramPrmrr;
  }

  // Initialize internal structures
  CopyMem (&mSipCore3v0->PrmrrData, &This->PrmrrData, sizeof(mSipCore3v0->PrmrrData));
  Status = mSipCore3v0->ProgramPrmrr (mSipCore3v0, PeiServices);
  DEBUG ((EFI_D_INFO, "[FRU_SGX] mSipCore3v0->ProgramPrmrr %r\n", Status));

Return_FruCpuFeatureSgx3v0_ProgramPrmrr:
  DEBUG ((EFI_D_INFO, "[FRU_SGX] %a END Status: %r\n", __FUNCTION__, Status));
  return Status;
}

EFI_STATUS
EFIAPI
_LockPrmrr (
  IN FRU_CPU_FEATURE_SGX_3V0_PPI *This,
  IN CONST EFI_PEI_SERVICES      **PeiServices
  )
{
  EFI_STATUS Status = EFI_UNSUPPORTED;
  return Status;
}

/**
  PEIM entry point

  @param FileHandle         Pointer to the PEIM FFS file header.
  @param PeiServices        General purpose services available to every PEIM.

  @retval EFI_SUCCESS       Operation completed successfully.
  @retval Otherwise         SGX initialization failed.

**/
EFI_STATUS
EFIAPI
FruCpuFeatureSgx3v0EntryPoint (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )
{
  EFI_STATUS                        Status        = EFI_UNSUPPORTED;

  STATIC FRU_CPU_FEATURE_SGX_3V0_PPI Ppi = {
  FRU_CPU_FEATURE_SGX_3V0_PPI_REVISION,
  {0},
  _ProgramPrmrr,
  _LockPrmrr
};

STATIC EFI_PEI_PPI_DESCRIPTOR PpiList = {
  EFI_PEI_PPI_DESCRIPTOR_PPI | EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST,
  &gSecurityFruCpuFeatureSgx3v0PpiGuid,
  &Ppi
};

  DEBUG ((EFI_D_INFO, "[FRU_SGX] %a ENTRY\n", __FUNCTION__));
  Status = (*PeiServices)->InstallPpi (PeiServices, &PpiList);

  return Status;
}

