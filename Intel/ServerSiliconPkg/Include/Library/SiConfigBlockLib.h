/** @file
  Prototype of the SiConfigBlockLib library.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2015 - 2016 Intel Corporation. <BR>

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

#ifndef _SI_CONFIG_BLOCK_LIB_H_
#define _SI_CONFIG_BLOCK_LIB_H_


typedef
VOID
(*LOAD_DEFAULT_FUNCTION) (
  IN VOID   *ConfigBlockPointer
  );

typedef struct {
  EFI_GUID               *Guid;
  UINT16                 Size;
  UINT8                  Revision;
  LOAD_DEFAULT_FUNCTION  LoadDefault;
} COMPONENT_BLOCK_ENTRY;

/**
  GetComponentConfigBlockTotalSize get config block table total size.

  @param[in] ComponentBlocks    Component blocks array
  @param[in] TotalBlockCount    Number of blocks

  @retval                       Size of config block table
**/
UINT16
EFIAPI
GetComponentConfigBlockTotalSize (
  IN COMPONENT_BLOCK_ENTRY *ComponentBlocks,
  IN UINT16                TotalBlockCount
  );

/**
  AddComponentConfigBlocks add all config blocks.

  @param[in] ConfigBlockTableAddress    The pointer to add config blocks
  @param[in] ComponentBlocks            Config blocks array
  @param[in] TotalBlockCount            Number of blocks

  @retval EFI_SUCCESS                   The policy default is initialized.
  @retval EFI_OUT_OF_RESOURCES          Insufficient resources to create buffer
**/
EFI_STATUS
EFIAPI
AddComponentConfigBlocks (
  IN VOID                  *ConfigBlockTableAddress,
  IN COMPONENT_BLOCK_ENTRY *ComponentBlocks,
  IN UINT16                TotalBlockCount
  );
#endif // _SI_CONFIG_BLOCK_LIB_H_