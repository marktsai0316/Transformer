/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 - 2020 Intel Corporation. <BR>

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

#include <PiDxe.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/DxeServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PcdLib.h>
#include <Library/HobLib.h>
#include <Library/SystemInfoLib.h>
#include <Protocol/PciIo.h>
#include <IndustryStandard/Pci.h>
#include <Upi/KtiHost.h>
#include <PcieRegs.h>
#include <Protocol/IioUds.h>
#include <Library/KtiApi.h>
#include <Library/MmPciBaseLib.h>
#include <Library/IoLib.h>
#include <Library/RcrbAccessLib.h>
#include <Library/IioSysInfoLib.h>
#include <Library/UsraCsrLib.h>
#include <RcRegs.h>

//
//Usra backup
//
#include <Library/EmulationConfigurationLib.h>

#ifndef _CXL_DP_INIT_H_
#define _CXL_DP_INIT_H_

typedef struct {
  UINT8   SocketId;
  UINT8   StackId;
  UINT64  RcrbBase;
} CXL_STACK;

#endif
