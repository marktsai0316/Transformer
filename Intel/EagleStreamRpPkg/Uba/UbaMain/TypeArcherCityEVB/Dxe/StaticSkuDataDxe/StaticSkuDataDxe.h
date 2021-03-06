/** @file
  UBA static sku data update dxe driver.

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

#ifndef _STATIC_SKU_DATA_DXE_H_
#define _STATIC_SKU_DATA_DXE_H_

#include <Base.h>
#include <Uefi.h>

#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/IoLib.h>

#include <Protocol/UbaCfgDb.h>

EFI_STATUS
InstallMpTableData (
  IN UBA_CONFIG_DATABASE_PROTOCOL    *UbaConfigProtocol
) ;

EFI_STATUS
InstallPirqData (
  IN UBA_CONFIG_DATABASE_PROTOCOL    *UbaConfigProtocol
);


EFI_STATUS
InstallAcpiFixupTableData (
  IN UBA_CONFIG_DATABASE_PROTOCOL    *UbaConfigProtocol
);


#endif // _STATIC_SKU_DATA_DXE_H_
