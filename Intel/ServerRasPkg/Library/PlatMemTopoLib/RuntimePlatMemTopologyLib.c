
/** @file
  Construct of RuntimePlatMemTopologyLib.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2018 Intel Corporation. <BR>

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

#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <PlatMemTopologyLibInternal.h>


extern     MEM_TOPOLOGY  *mMemTopology;

EFI_EVENT  mVirtualAddressChangeEventMemTopology;


/**
  Notification function of EVT_SIGNAL_VIRTUAL_ADDRESS_CHANGE.

  This is a notification function registered on EVT_SIGNAL_VIRTUAL_ADDRESS_CHANGE event.
  It convers pointer to new virtual address.

  @param  Event        Event whose notification function is being invoked.
  @param  Context      Pointer to the notification function's context.
  
  @retval VOID

**/
VOID
EFIAPI
FixVirtualAddressesMemTopology (
  IN EFI_EVENT        Event,
  IN VOID             *Context
  )
{
  RAS_DEBUG ((LEVEL_BASIC_FLOW, "memory topology virtual address before:%lx  \n", mMemTopology));
  gRT->ConvertPointer (0, (VOID **) &mMemTopology);
  RAS_DEBUG ((LEVEL_BASIC_FLOW, "memory topology virtual address after:%lx  \n", mMemTopology));
}


/**

  The constructor function initialize runtime memory topology library.

  @param  ImageHandle   The firmware allocated handle for the EFI image.
  @param  SystemTable   A pointer to the EFI System Table.

  @retval EFI_SUCCESS   The constructor always returns EFI_SUCCESS.

**/
EFI_STATUS
EFIAPI
InitRuntimeMemTopology (
  IN EFI_HANDLE                ImageHandle,
  IN EFI_SYSTEM_TABLE          *SystemTable
  )
{
  BOOLEAN        NewAllocation;
  EFI_STATUS     Status;

  RAS_DEBUG ((LEVEL_BASIC_FLOW, "register memory topology into virtual address change.\n"));
  Status = gBS->CreateEventEx (
                  EVT_NOTIFY_SIGNAL,
                  TPL_NOTIFY,
                  FixVirtualAddressesMemTopology,
                  NULL,
                  &gEfiEventVirtualAddressChangeGuid,
                  &mVirtualAddressChangeEventMemTopology
                  );
  ASSERT_EFI_ERROR (Status);

  mMemTopology = GetRasGlobalData (L"RuntimePlatMemTopology", sizeof (MEM_TOPOLOGY), &NewAllocation);
  RAS_ASSERT (mMemTopology != NULL);

  if (NewAllocation) {


    //
    //Due to EDK2 build tool design limitation, it could not generated right sequence of constructor list at corner case(discrete node 
    //library dependency tree). It causes a couple of hang issues in drivers which use MemTopologyLib.
    //Hence it requires library should put as less initialization code at constructor as possible. This is why moving InitializeMemTopology 
    //out of constructor.
    //
    //Note: As InitializeMemTopology routine contains boot service code, caller code must ensure that it is invoked at boot phase.
    //
    mMemTopology->MemTopologyInitFlag = FALSE;
  }

  return EFI_SUCCESS;
}