/** @file
  TraceHubStatusCodeHandlerSmm implementation.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2013 - 2014 Intel Corporation. <BR>

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

#include <TraceHubStatusCodeHandlerSmm.h>

EFI_SMM_RSC_HANDLER_PROTOCOL    *mRscHandlerProtocol = NULL;

/**
  Entry point of SMM TraceHub Status Code Driver.

  This function is the entry point of SMM TraceHub Status Code Driver.

  @param  ImageHandle       The firmware allocated handle for the EFI image.
  @param  SystemTable       A pointer to the EFI System Table.

  @retval EFI_SUCCESS       The entry point is executed successfully.

**/
EFI_STATUS
EFIAPI
TraceHubStatusCodeHandlerSmmEntry (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  )
{
  EFI_STATUS                Status;

  Status = gSmst->SmmLocateProtocol (
                    &gEfiSmmRscHandlerProtocolGuid,
                    NULL,
                    (VOID **) &mRscHandlerProtocol
                    );
  ASSERT_EFI_ERROR (Status);

  if (FeaturePcdGet (PcdStatusCodeUseTraceHub)) {
    mRscHandlerProtocol->Register (TraceHubStatusCodeReportWorkerSmm);
  }

  return EFI_SUCCESS;
}
