/** @file
  Graphics Info FRu Lib implementation.

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
#include <Library/GraphicsInfoFruLib.h>
#include <Register/IgdRegs.h>

/**
  Checks if SKU is DisplayOnly

  @retval FALSE  SKU is not DisplayOnly
  @retval TRUE   SKU is DisplayOnly
**/
BOOLEAN
EFIAPI
IsDisplayOnlySku (
  VOID
  )
{
  UINT16    GtDid;

  GtDid = PciSegmentRead16 (PCI_SEGMENT_LIB_ADDRESS (SA_SEG_NUM, IGD_BUS_NUM, IGD_DEV_NUM, IGD_FUN_NUM, PCI_DEVICE_ID_OFFSET));
  if (GtDid == V_SA_PCI_DEV_2_GT0_TGL_ID) {
    return TRUE;
  }

  return FALSE;
}

/**
  Check for Gen9 Graphics Supported Platforms

  @retval FALSE  Gen9 not Supported
  @retval TRUE   Gen9 Supported
**/
BOOLEAN
EFIAPI
IsGraphicsGen9 (
  VOID
  )
{
  return FALSE;
}