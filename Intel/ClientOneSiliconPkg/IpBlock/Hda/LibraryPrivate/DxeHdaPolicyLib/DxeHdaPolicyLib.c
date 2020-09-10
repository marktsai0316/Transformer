/** @file
  This file provides services for Hda policy function

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 Intel Corporation.

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
#include <Uefi.h>
#include <Library/DebugLib.h>
#include <Library/SiConfigBlockLib.h>
#include <Library/ConfigBlockLib.h>
#include <Protocol/PchPolicy.h>
#include <HdAudioConfig.h>

/**
  Print HDAUDIO_DXE_CONFIG and serial out.

  @param[in] PchPolicy            Pointer to a PCH_POLICY_PROTOCOL
**/
VOID
HdaDxePrintConfig (
  IN PCH_POLICY_PROTOCOL    *PchPolicy
  )
{
  EFI_STATUS            Status;
  HDAUDIO_DXE_CONFIG    *HdaDxeConfig;
  UINT32                Index;

  Status = GetConfigBlock ((VOID *) PchPolicy, &gHdAudioDxeConfigGuid, (VOID *) &HdaDxeConfig);
  ASSERT_EFI_ERROR (Status);

  DEBUG ((DEBUG_INFO, "------------------ HD-Audio DXE Config ------------------\n"));

  for (Index = 0; Index < PCH_MAX_HDA_SNDW_LINK_NUM; Index++) {
    DEBUG ((DEBUG_INFO, " SNDW%d AutonomousClockStop  : %d\n", Index, HdaDxeConfig->SndwConfig[Index].AutonomousClockStop));
    DEBUG ((DEBUG_INFO, " SNDW%d DODS                 : %d\n", Index, HdaDxeConfig->SndwConfig[Index].DataOnDelaySelect));
    DEBUG ((DEBUG_INFO, " SNDW%d DOAS                 : %d\n", Index, HdaDxeConfig->SndwConfig[Index].DataOnActiveIntervalSelect));
  }
  DEBUG ((DEBUG_INFO, " DSP Feature Mask              : 0x%x\n", HdaDxeConfig->DspFeatureMask));
}

/**
  Load Config block default

  @param[in] ConfigBlockPointer         Pointer to config block
**/
VOID
HdaDxeLoadConfigDefault (
  IN VOID          *ConfigBlockPointer
  )
{
  HDAUDIO_DXE_CONFIG  *HdAudioDxeConfig;
  HdAudioDxeConfig = ConfigBlockPointer;

  DEBUG ((DEBUG_INFO, "HdaDxeConfig->Header.GuidHob.Name = %g\n", &HdAudioDxeConfig->Header.GuidHob.Name));
  DEBUG ((DEBUG_INFO, "HdaDxeConfig->Header.GuidHob.Header.HobLength = 0x%x\n", HdAudioDxeConfig->Header.GuidHob.Header.HobLength));
}

STATIC COMPONENT_BLOCK_ENTRY  mHdaBlocks = {
  &gHdAudioDxeConfigGuid,
  sizeof (HDAUDIO_DXE_CONFIG),
  HDAUDIO_DXE_CONFIG_REVISION,
  HdaDxeLoadConfigDefault
};

/**
  Get Hda config block table size.

  @retval      Size of config block
**/
UINT16
HdaDxeGetConfigBlockTotalSize (
  VOID
  )
{
  return mHdaBlocks.Size;
}

/**
  Add Hda ConfigBlock.

  @param[in] ConfigBlockTableAddress    The pointer to config block table

  @retval EFI_SUCCESS                   The policy default is initialized.
  @retval EFI_OUT_OF_RESOURCES          Insufficient resources to create buffer
**/
EFI_STATUS
HdaDxeAddConfigBlock (
  IN VOID           *ConfigBlockTableAddress
  )
{
  return AddComponentConfigBlocks (ConfigBlockTableAddress, &mHdaBlocks, 1);
}
