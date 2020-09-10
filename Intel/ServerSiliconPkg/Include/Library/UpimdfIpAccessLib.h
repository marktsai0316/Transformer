/** @file

  This is the library class header file for UPIMDF IP Access lib.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 - 2020 Intel Corporation. <BR>

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

#ifndef __UPIMDF_IP_ACCESS_LIB_H__
#define __UPIMDF_IP_ACCESS_LIB_H__

#include <Uefi.h>
#include <Base.h>
#include <Library/UsraAccessApi.h>

#define UPIMDF_INSTANCE_BROADCAST     0xFF

/**
  UPIMDF Read access

  @param Socket        - The Socket number
  @param UpiPort       - The UPI Port number
  @param UpimdfInsId   - The specified UPIMDF instance ID (0 ~ (MAX_UPIMDF_INSTANCE-1))
  @param CsrOffset     - The UPIMDF Csr Offset

  @return Value.
**/
UINT32
EFIAPI
UpimdfIpReadAccess32 (
  IN UINT8    Socket,
  IN UINT8    UpiPort,
  IN UINT8    UpimdfInsId,
  IN UINT32   CsrOffset
  );

/**
  UPIMDF write access

  @param Socket        - The Socket number
  @param UpiPort       - The UPI Port number
  @param UpimdfInsId   - The specified UPIMDF instance ID (0 ~ (MAX_UPIMDF_INSTANCE-1)), 0xFF -- Broadcase write
  @param CsrOffset     - The UPIMDF Csr Offset
  @param Data32        - The Data write to the registers

  @return .
**/
VOID
EFIAPI
UpimdfIpWriteAccess32 (
  IN UINT8    Socket,
  IN UINT8    UpiPort,
  IN UINT8    UpimdfInsId,
  IN UINT32   CsrOffset,
  IN UINT32   Data32
  );

#endif //__UPIMDF_IP_ACCESS_LIB_H__
