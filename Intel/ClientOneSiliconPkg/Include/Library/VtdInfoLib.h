/** @file
  Header file for VtdInfoLib.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation.

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
#ifndef _VTD_INFO_LIB_H_
#define _VTD_INFO_LIB_H_

#include <Base.h>
#include <Uefi/UefiBaseType.h>
#include <Library/HobLib.h>

#define VTD_ENGINE_NUMBER             7

#pragma pack(1)

/**
  Get VTD Engine Base Address from PCD values.

  @param[in]  VtdEngineNumber        - Engine number for which VTD Base Adderess is required.

  @retval   VTD Engine Base Address
**/
UINT32
GetVtdBaseAddress (
  IN UINT8        VtdEngineNumber
  );

/**
  Read VTD Engine Base Address from VTD BAR Offsets.

  @param[in]  VtdEngineNumber        - Engine number for which VTD Base Adderess is required.

  @retval   VTD Engine Base Address
**/
UINT32
ReadVtdBaseAddress (
  IN UINT8        VtdEngineNumber
  );

/**
  GetMaxVtdEngineNumber: Get Maximum Vtd Engine Number

  @retval Vtd Engine Number
**/
UINT8
GetMaxVtdEngineNumber(
  VOID
);

/**
  GetIgdVtdOffset: Get IGD Vtd Engine Base Address

  @retval Vtd Engine Base Address for IGD
**/
UINT64
GetIgdVtdOffset(
  VOID
);

/**
  GetIpuVtdLowOffset: Get IPU Vtd Engine Low Base Address

  @retval Vtd Engine Low Base Address for IPU
**/
UINT64
GetIpuVtdLowOffset(
  VOID
);

/**
  GetIopVtdOffset: Get Iop Vtd Engine Base Address

  @retval Vtd Engine Base Address for all other - PEG, USB, SATA etc
**/
UINT32
GetIopVtdOffset(
  VOID
);

#pragma pack()
#endif // _VTD_INFO_LIB_H_
