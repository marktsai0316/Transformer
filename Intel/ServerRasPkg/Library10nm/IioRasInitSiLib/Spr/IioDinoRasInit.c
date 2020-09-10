/** @file
  Implement north bridge PCI express port initialization

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

#include <Base.h>
#include <Uefi.h>
#include <Library/DebugLib.h>

#include <IioSetupDefinitions.h>
#include <Library/IioDataHubLib.h>
#include <Library/UsraCsrLib.h>
#include <RcRegs.h>
#include <PcieRegs.h>
#include <Library/IioDataHubLib.h>
#include <Library/KtiApi.h>
#include <Library/IioSysInfoLib.h>
#include <Library/RasDebugLib.h>

/**
  IIO DINO RAS Initialization before PCI scan
  @param IioGlobalData  - IioGlobalData Pointer
  @param IioIndex       - Index to Socket

  @retval None
**/
VOID
EFIAPI
IioRasDinoInitBeforePciScan (
  IN  UINT8               IioIndex
  )
{

  PSF_1_PSF_GLOBAL_CONFIG_SB_PSF_DINO_STRUCT       Psf1GlobalConfigDino;
  UINT8                                            StackIndex;
  UINT8                                            BoxInst;

  DEBUG ((DEBUG_INFO, "IioRasDinoInitBeforePciScan...\n"));

  for (StackIndex = IIO_STACK8; StackIndex < MAX_IIO_STACK_SPR; StackIndex++) {
    if (IfStackPresent (IioIndex, StackIndex) == FALSE) {
      continue;
    }

    DEBUG ((DEBUG_INFO, "IioRasDinoInitBeforePciScan Socket %d, stack %d\n", IioIndex, StackIndex));
    BoxInst = StackIndex - IIO_STACK8;
    Psf1GlobalConfigDino.Data = UsraCsrRead (IioIndex, BoxInst, PSF_1_PSF_GLOBAL_CONFIG_SB_PSF_DINO_REG);
    Psf1GlobalConfigDino.Bits.encmdpardetingress = 1;
    Psf1GlobalConfigDino.Bits.encmdpardetegress = 1;
    S3UsraCsrWrite (IioIndex, BoxInst, PSF_1_PSF_GLOBAL_CONFIG_SB_PSF_DINO_REG, Psf1GlobalConfigDino.Data);
  }
}