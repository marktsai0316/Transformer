/** @file
  Pch SATA library for CedarFork SouthCluster.
  All function in this library is available for PEI, DXE, and SMM,
  But do not support UEFI RUNTIME environment call.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2020 Intel Corporation.

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

#include <Base.h>
#include <Uefi/UefiBaseType.h>
#include <Library/DebugLib.h>
#include <Library/PchInfoLib.h>
#include <PchLimits.h>
#include <Register/PchRegsSata.h>
#include <Library/SataLib.h>

/**
  Get Maximum available Sata Controller Number

  @param[in] None

  @retval Maximum Sata Controller Number
**/
UINT8
MaxSataControllerNum (
  VOID
  )
{
  return PCH_MAX_SATA_CONTROLLERS;
}
/**
  Get Pch Maximum Sata Port Number

  @param[in]  SataCtrlIndex       SATA controller index

  @retval Pch Maximum Sata Port Number
**/
UINT8
GetPchMaxSataPortNum (
  IN UINT32      SataCtrlIndex
  )
{
  ASSERT (SataCtrlIndex < MaxSataControllerNum ());

  return 8;
}

/**
  Get SATA controller PCIe Device Number

  @param[in]  SataCtrlIndex       SATA controller index

  @retval SATA controller PCIe Device Number
**/
UINT8
SataDevNumber (
  IN UINT32  SataCtrlIndex
  )
{
  ASSERT (SataCtrlIndex < MaxSataControllerNum ());

  if (SataCtrlIndex == SATA_1_CONTROLLER_INDEX) {
    return PCI_DEVICE_NUMBER_PCH_SATA_1;
  } else if (SataCtrlIndex == SATA_2_CONTROLLER_INDEX) {
    return PCI_DEVICE_NUMBER_PCH_SATA_2;
  } else if (SataCtrlIndex == SATA_3_CONTROLLER_INDEX) {
    return PCI_DEVICE_NUMBER_PCH_SATA_3;
  } else {
    ASSERT (FALSE);
    return 0;
  }
}

/**
  Get SATA controller PCIe Function Number

  @param[in]  SataCtrlIndex       SATA controller index

  @retval SATA controller PCIe Function Number
**/
UINT8
SataFuncNumber (
  IN UINT32  SataCtrlIndex
  )
{
  ASSERT (SataCtrlIndex < MaxSataControllerNum ());

  if (SataCtrlIndex == SATA_1_CONTROLLER_INDEX) {
    return PCI_FUNCTION_NUMBER_PCH_SATA_1;
  } else if (SataCtrlIndex == SATA_2_CONTROLLER_INDEX) {
    return PCI_FUNCTION_NUMBER_PCH_SATA_2;
  } else if (SataCtrlIndex == SATA_3_CONTROLLER_INDEX) {
    return PCI_FUNCTION_NUMBER_PCH_SATA_3;
  } else {
    ASSERT (FALSE);
    return 0;
  }
}

