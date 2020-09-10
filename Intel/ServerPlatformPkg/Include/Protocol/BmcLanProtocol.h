/** @file
  BMC Lan Protocol.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2017 Intel Corporation. <BR>

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

#ifndef _BMC_LAN_PROTOCOL_H_
#define _BMC_LAN_PROTOCOL_H_

#define EFI_BMC_LAN_PROTOCOL_GUID { 0x989d5548, 0xac40, 0x45f3, { 0xad, 0xf5, 0xd0, 0x5f, 0x94, 0xa8, 0x91, 0xae } }

typedef struct _EFI_BMC_LAN_PROTOCOL EFI_BMC_LAN_PROTOCOL;

typedef
EFI_STATUS
(EFIAPI *EFI_BMC_CFG_SET_VARIABLE) (
  IN EFI_BMC_LAN_PROTOCOL            *This,
  EFI_STATUS                    Status
  );

typedef
EFI_STATUS
(EFIAPI *EFI_BMC_CFG_GET_VARIABLE) (
  IN EFI_BMC_LAN_PROTOCOL       *This,
  EFI_STATUS                    Status
  );

struct _EFI_BMC_LAN_PROTOCOL {
  EFI_BMC_CFG_SET_VARIABLE      EfiBmcCfgSetVariable;
  EFI_BMC_CFG_GET_VARIABLE      EfiBmcCfgGetVariable;
};

extern EFI_GUID gEfiBmcLanProtocolGuid;

#endif

