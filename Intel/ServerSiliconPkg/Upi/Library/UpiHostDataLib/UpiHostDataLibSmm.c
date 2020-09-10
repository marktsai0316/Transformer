/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2017 Intel Corporation. <BR>

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

#include <Uefi.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/SmmServicesTableLib.h>
#include <Library/UpiHostDataLib.h>
#include <Library/HobLib.h>
#include "UpiHostData.h"

//
// Global variables
//
GLOBAL_REMOVE_IF_UNREFERENCED KTI_HOST *mSmmKtiProtocol = NULL;

/**
  The constructor function initialize global SMM KTI Host protocol data pointer
  get data from Hob and install protocol for SMM KTI Host protocol

  Standard EFI driver point.

  @param ImageHandle         -  A handle for the image that is initializing this driver.
  @param SystemTable         -  A pointer to the EFI system table.

  @retval EFI_SUCCESS   The constructor should returns EFI_SUCCESS.
**/
EFI_STATUS
EFIAPI
UpiHostDataLibSmmConstructor (
  IN EFI_HANDLE              ImageHandle,
  IN EFI_SYSTEM_TABLE        *SystemTable
  )
{
  EFI_STATUS                 Status;
  KTI_HOST_IN                *KtiHostInDataPtr;
  KTI_HOST_OUT               *KtiHostOutDataPtr;
  KTI_HOST_NVRAM             *KtiHostNvramDataPtr;
  KTI_HOST                   *SmmKtiProtocol;
  EFI_HANDLE                 Handle;
  VOID                       *GuidHob;

  Status = gSmst->SmmLocateProtocol (&gSmmKtiProtocolGuid, NULL, &mSmmKtiProtocol);

  if (!EFI_ERROR (Status)) {
    return EFI_SUCCESS;
  }

  //
  // Get data from Hob and install protocol
  //
  GuidHob = GetFirstGuidHob (&gEfiKtiHostInDataHobGuid);
  ASSERT (GuidHob != NULL);
  KtiHostInDataPtr = (KTI_HOST_IN *)(GET_GUID_HOB_DATA (GuidHob));

  GuidHob = GetFirstGuidHob (&gEfiKtiHostOutDataHobGuid);
  ASSERT (GuidHob != NULL);
  KtiHostOutDataPtr = (KTI_HOST_OUT *)(GET_GUID_HOB_DATA (GuidHob));

  GuidHob = GetFirstGuidHob (&gEfiKtiHostNvramDataHobGuid);
  ASSERT (GuidHob != NULL);
  KtiHostNvramDataPtr = (KTI_HOST_NVRAM *)(GET_GUID_HOB_DATA (GuidHob));

  Status = gSmst->SmmAllocatePool (EfiRuntimeServicesData, sizeof (KTI_HOST), (VOID **)&SmmKtiProtocol);
  if (EFI_ERROR (Status) || (SmmKtiProtocol == NULL)) {
    ASSERT_EFI_ERROR (Status);
    return Status;
  }

  CopyMem ((VOID *)&(SmmKtiProtocol->HostIn), (VOID *)KtiHostInDataPtr, sizeof (KTI_HOST_IN));
  CopyMem ((VOID *)&(SmmKtiProtocol->HostOut), (VOID *)KtiHostOutDataPtr, sizeof (KTI_HOST_OUT));
  CopyMem ((VOID *)&(SmmKtiProtocol->HostNvram), (VOID *)KtiHostNvramDataPtr, sizeof (KTI_HOST_NVRAM));

  Handle = NULL;
  Status = gSmst->SmmInstallProtocolInterface (
                    &Handle,
                    &gSmmKtiProtocolGuid,
                    EFI_NATIVE_INTERFACE,
                    SmmKtiProtocol
                    );
  if (EFI_ERROR (Status)) {
    Status = gSmst->SmmFreePool ((VOID *)SmmKtiProtocol);
    ASSERT_EFI_ERROR (Status);
    return Status;
  }

  gSmst->SmmLocateProtocol (&gSmmKtiProtocolGuid, NULL, &mSmmKtiProtocol);

  return EFI_SUCCESS;
}

/**
  Get the KTI Host data pointer.
  @param KtiHostType  -  The KTI host data type defined in KTI_HOST_TYPE
  @return pointer of the KTI Host data

 **/
VOID *
EFIAPI
GetKtiHostDataPtr (
  KTI_HOST_TYPE KtiHostType
  )
{
  ASSERT (KtiHostType < KtiHostMax);
  ASSERT (mSmmKtiProtocol != NULL);

  if (KtiHostType == KtiHostIn) {
    return &(mSmmKtiProtocol->HostIn);
  } else if (KtiHostType == KtiHostOut) {
    return &(mSmmKtiProtocol->HostOut);
  } else if (KtiHostType == KtiHostNvram) {
    return &(mSmmKtiProtocol->HostNvram);
  } else {
    ASSERT (0);
    return NULL;
  }
}