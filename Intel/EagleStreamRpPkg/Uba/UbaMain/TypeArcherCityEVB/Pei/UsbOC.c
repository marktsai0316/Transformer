/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2018 - 2020 Intel Corporation. <BR>

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

#include "PeiBoardInit.h"
#include <PchLimits.h>
#include <ConfigBlock.h>
#include <UsbConfig.h>
#include <Usb2PhyConfig.h>
#include <Library/PchInfoLib.h>
#include <Library/DebugLib.h>
#include <Library/UbaUsbOcUpdateLib.h>
#include <Library/PcdLib.h>


USB_OVERCURRENT_PIN TypeArcherCityEVBUsb20OverCurrentMappings[MAX_USB2_PORTS] = {
  0x4,           //Port00: Internal
  0x4,           //Port01: Internal
  0x2,           //Port02: Rear Panel
  0x7,           //Port03: Rear Panel
  0x3,           //Port04: Internal
  0x5,           //Port05: Internal
  0x3,           //Port06: Internal
  0x5,           //Port07: Internal
  0x1,           //Port08: Rear Panel
  USB_OC_SKIP,   //Port09: Internal - No OC
  USB_OC_SKIP,   //Port10: NC
  0x6,           //Port11: Front Panel
  USB_OC_SKIP,   //Port12: NC
  0x6,           //Port13: Front Panel
  USB_OC_SKIP,
  USB_OC_SKIP
};

USB_OVERCURRENT_PIN TypeArcherCityEVBUsb30OverCurrentMappings[MAX_USB3_PORTS] = {
  USB_OC_SKIP,
  USB_OC_SKIP,
  USB_OC_SKIP,
  USB_OC_SKIP,
  USB_OC_SKIP,
  USB_OC_SKIP,
  USB_OC_SKIP,
  USB_OC_SKIP,
  0x1,           //Port08: Real Panel
  0x6            //Port09: Front Panel
};

USB2_PHY_PARAMETERS TypeArcherCityEVBUsb20AfeParams[14] = {
  {4, 0, 3, 1},   // PP0
  {4, 0, 3, 1},   // PP1
  {4, 0, 3, 1},   // PP2
  {4, 0, 3, 1},   // PP3
  {4, 0, 3, 1},   // PP4
  {4, 0, 3, 1},   // PP5
  {4, 0, 3, 1},   // PP6
  {4, 0, 3, 1},   // PP7
  {7, 0, 2, 1},   // PP8
  {7, 0, 2, 1},   // PP9
  {4, 0, 3, 1},   // PP10
  {4, 0, 3, 1},   // PP11
  {4, 0, 3, 1},   // PP12
  {4, 0, 3, 1},   // PP13
};

EFI_STATUS
TypeArcherCityEVBPlatformUsbOcUpdateCallback (
  IN OUT   USB_OVERCURRENT_PIN   **Usb20OverCurrentMappings,
  IN OUT   USB_OVERCURRENT_PIN   **Usb30OverCurrentMappings,
  IN OUT   USB2_PHY_PARAMETERS   **Usb20AfeParams
  )
{
  *Usb20OverCurrentMappings = &TypeArcherCityEVBUsb20OverCurrentMappings[0];
  *Usb30OverCurrentMappings = &TypeArcherCityEVBUsb30OverCurrentMappings[0];
  *Usb20AfeParams           = TypeArcherCityEVBUsb20AfeParams;
  return EFI_SUCCESS;
}

PLATFORM_USBOC_UPDATE_TABLE  TypeArcherCityEVBUsbOcUpdate = {
   PLATFORM_USBOC_UPDATE_SIGNATURE,
   PLATFORM_USBOC_UPDATE_VERSION,
   TypeArcherCityEVBPlatformUsbOcUpdateCallback
};

EFI_STATUS
TypeArcherCityEVBPlatformUpdateUsbOcMappings (
  IN UBA_CONFIG_DATABASE_PPI    *UbaConfigPpi
  )
{
  EFI_STATUS                   Status;

  DEBUG ((DEBUG_INFO,"UBA PEI: %a\n",__FUNCTION__));

  Status = UbaConfigPpi->AddData (
                           UbaConfigPpi,
                           &gPeiPlatformUbaOcConfigDataGuid,
                           &TypeArcherCityEVBUsbOcUpdate,
                           sizeof(TypeArcherCityEVBUsbOcUpdate)
                           );

  return Status;
}


