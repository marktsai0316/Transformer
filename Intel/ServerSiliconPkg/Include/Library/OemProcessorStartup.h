/** @file
  Processor Startup Initialization Module.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2017 - 2018 Intel Corporation. <BR>

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
**/

#ifndef _OEMPROCESSOR_STARTUP_H_
#define _OEMPROCESSOR_STARTUP_H_

EFI_STATUS
EFIAPI
PlatformSecMain_OemHook (
  IN OUT   EFI_SEC_PEI_HAND_OFF        *SecCoreData,
  IN       EFI_PEI_PPI_DESCRIPTOR      *PpiList
  );

EFI_STATUS
EFIAPI
PlatformInformationSecMain_OemHook (
  IN CONST EFI_PEI_SERVICES                      **PeiServices,
  IN OUT   UINT64                                *StructureSize,
  OUT      EFI_SEC_PLATFORM_INFORMATION_RECORD   *PlatformInformationRecord
  );

#endif