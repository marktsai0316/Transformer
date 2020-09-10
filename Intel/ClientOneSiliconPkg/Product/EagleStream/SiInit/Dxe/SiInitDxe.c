/** @file
  Source code file for the Silicon Init DXE module

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

@par Specification
**/
#include <SiInitDxe.h>
#include <PchConfigHob.h>
#include <PchInfoHob.h>
#include <Library/HobLib.h>
#include <Library/PmcPrivateLib.h>

//
// Module-wide global variables
//
EFI_EVENT  EndOfDxeEvent;

/**
  Program PCH Compatibility Revision ID

**/
VOID
ProgramPchCrid (
  VOID
  )
{
  EFI_PEI_HOB_POINTERS            HobPtr;
  PCH_CONFIG_HOB                  *PchConfigHob;
  PCH_INFO_HOB                    *PchInfoHob;

  //
  // Do Crid programming as late as possible so others can get the true PCH stepping.
  //
  HobPtr.Guid = GetFirstGuidHob (&gPchConfigHobGuid);
  ASSERT (HobPtr.Guid != NULL);
  PchConfigHob = (PCH_CONFIG_HOB *) GET_GUID_HOB_DATA (HobPtr.Guid);

  HobPtr.Guid = GetFirstGuidHob (&gPchInfoHobGuid);
  ASSERT (HobPtr.Guid != NULL);
  PchInfoHob = (PCH_INFO_HOB *) GET_GUID_HOB_DATA (HobPtr.Guid);

  if (PchInfoHob->CridSupport && PchConfigHob->General.Crid) {
    PmcSetCrid0WithS3BootScript ();
  }

  PmcLockCridWithS3BootScript ();

}


/**
  This function handles PlatformInit task at the end of DXE

  @param[in]  Event
  @param[in]  *Context
**/
VOID
EFIAPI
SiInitEndOfDxe (
  IN EFI_EVENT Event,
  IN VOID      *Context
  )
{
  //
  // Program PCH Compatibility Revision ID
  //
  ProgramPchCrid ();

  gBS->CloseEvent (Event);

  return;
}


/**
  Entry point for the driver.

  @param[in]  ImageHandle  Image Handle.
  @param[in]  SystemTable  EFI System Table.

  @retval     EFI_SUCCESS  Function has completed successfully.
  @retval     Others       All other error conditions encountered result in an ASSERT.
**/
EFI_STATUS
EFIAPI
SiInitDxe (
  IN EFI_HANDLE               ImageHandle,
  IN EFI_SYSTEM_TABLE         *SystemTable
  )
{
  EFI_STATUS          Status;

  DEBUG ((DEBUG_INFO, "SiInitDxe - Start\n"));
  ///
  /// Performing SiInitEndOfDxe after the gEfiEndOfDxeEventGroup is signaled.
  ///
  Status = gBS->CreateEventEx (
                  EVT_NOTIFY_SIGNAL,
                  TPL_CALLBACK,
                  SiInitEndOfDxe,
                  NULL,
                  &gEfiEndOfDxeEventGroupGuid,
                  &EndOfDxeEvent
                  );
  ASSERT_EFI_ERROR (Status);

  return Status;
}
