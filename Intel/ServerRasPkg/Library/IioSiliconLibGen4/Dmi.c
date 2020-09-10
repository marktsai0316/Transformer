/** @file
  Implementation of CBDMA IIO RAS lib.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2016 Intel Corporation. <BR>

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

#include <Library/CpuCsrAccessLib.h>
#include <RcRegs.h>
#include <Library/MmPciExtLib.h>
#include <Library/IoLib.h>
#include <Library/RasMailBoxLib.h>
#include <Library/RasDebugLib.h>
#include <Library/IioSiliconLib.h>
#include <Register/IioRegDef.h>
#include <Register/PcieRegDef.h>
#include <Library/PcieStdLib.h>
#include <Library/PcieRasLib.h>
#include <IioRegs.h>
#include <IndustryStandard/PciExpress21.h>

/**
   Enable DMI device RAS feature.

   @param  [in]  Socket  -- socket number
   @param  [in]  Bus  -- Bus number
   @param  [in]  Device -- Device number
   @param  [in]  Function -- function number

   @retval None

**/
VOID
EFIAPI
EnableDmiDevice (
   IN  UINT8    Socket,
   IN  UINT8    Bus,
   IN  UINT8    Device,
   IN  UINT8    Function
   )
 {
  UINT8            CapabilitiesOffset;

  RAS_DEBUG((LEVEL_FUNC_FLOW, "EnableDmiDevice!\n"));
  if (!PcieIsDevicePresent (Socket, Bus, Device, Function, NULL) || !PcieIsDmiPort (Socket, Bus, Device, Function, NULL)) {
    return ;
  }

  CapabilitiesOffset = PcieGetCapabilitiesOffset (Socket, Bus, Device, Function, NULL, EFI_PCI_CAPABILITY_ID_PCIEXP);
  RAS_DEBUG ((LEVEL_FUNC_FLOW, "EnableDmiDevice  EFI_PCI_CAPABILITY_ID_PCIEXP = %x \n", CapabilitiesOffset));
  if (CapabilitiesOffset == 0) {
    return ;
  }

  //
  //PCIE basic error handling enable...
  //
  //
  // Program IIO PCIE Addtional Errors Settings
  //
  IioXPProgramCorrErrors (Socket, Bus, Device, Function);
  IioXPProgramUnCorrErrors (Socket, Bus, Device, Function);
  IioXPProgramErrSev (Socket, Bus, Device, Function);
  IioProgramCorrErrCnt (Socket, Bus, Device, Function);
  //
  // Program DMI AER and error control Settings
  //
  PcieConfigDevice(Socket, Bus, Device, Function, NULL);
 }
