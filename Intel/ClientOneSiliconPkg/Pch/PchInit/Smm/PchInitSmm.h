/** @file
  Header file for PCH Init SMM Handler

@copyright
  INTEL CONFIDENTIAL
  Copyright 2012 - 2020 Intel Corporation.

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

#ifndef _PCH_INIT_SMM_H_
#define _PCH_INIT_SMM_H_

#include <PiDxe.h>
#include <Library/DebugLib.h>
#include <Library/IoLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/SmmServicesTableLib.h>
#include <Library/DxeServicesTableLib.h>
#include <Library/BaseMemoryLib.h>
#include <Protocol/SmmSxDispatch2.h>
#include <Protocol/SmmIoTrapDispatch2.h>
#include <Library/S3BootScriptLib.h>
#include <Library/HobLib.h>
#include <Protocol/SmmCpu.h>
#include <Library/TimerLib.h>

#include <IndustryStandard/Pci30.h>
#include <Library/PmcLib.h>
#include <Library/PchPcieRpLib.h>
#include <Library/PchInfoLib.h>
#include <Library/SataSocLib.h>
#include <Library/GpioLib.h>
#include <Library/GpioNativeLib.h>
#include <Library/EspiLib.h>
#include <Library/PciSegmentLib.h>
#include <Library/ConfigBlockLib.h>
#include <Library/PciExpressHelpersLib.h>
#include <Protocol/PchPcieSmiDispatch.h>
#include <Protocol/PchTcoSmiDispatch.h>
#include <Protocol/PchSmiDispatch.h>
#include <Protocol/PchEspiSmiDispatch.h>
#include <Protocol/PchSmmIoTrapControl.h>
#include <Protocol/PchNvsArea.h>
#include <Protocol/PcieIoTrap.h>
#include <SiConfigHob.h>
#include <PchConfigHob.h>
#include <Library/PmcPrivateLib.h>

extern EFI_SMM_IO_TRAP_DISPATCH2_PROTOCOL        *mPchIoTrap;
extern EFI_SMM_SX_DISPATCH2_PROTOCOL             *mSxDispatch;

extern PCH_NVS_AREA                              *mPchNvsArea;
extern UINT16                                    mAcpiBaseAddr;

extern EFI_PHYSICAL_ADDRESS                      mResvMmioBaseAddr;
extern UINTN                                     mResvMmioSize;

//
// NOTE: The module variables of policy here are only valid in post time, but not runtime time.
//
extern PCH_CONFIG_HOB                            *mPchConfigHob;
extern SI_CONFIG_HOB_DATA                        *mSiConfigHobData;

/**
  Register PCIE Hotplug SMI dispatch function to handle Hotplug enabling

  @param[in] ImageHandle          The image handle of this module
  @param[in] SystemTable          The EFI System Table

  @retval EFI_SUCCESS             The function completes successfully
**/
EFI_STATUS
EFIAPI
InitializePchPcieSmm (
  IN      EFI_HANDLE            ImageHandle,
  IN      EFI_SYSTEM_TABLE      *SystemTable
  );

/**
  Program Common Clock and ASPM of Downstream Devices

  @param[in] PortIndex                  Pcie Root Port Number
  @param[in] RpDevice                   Pcie Root Pci Device Number
  @param[in] RpFunction                 Pcie Root Pci Function Number

  @retval EFI_SUCCESS                   Root port complete successfully
  @retval EFI_UNSUPPORTED               PMC has invalid vendor ID
**/
EFI_STATUS
PchPcieSmi (
  IN  UINT8                             PortIndex,
  IN  UINT8                             RpDevice,
  IN  UINT8                             RpFunction
  );

/**
  PCIE Hotplug SMI call back function for each Root port

  @param[in] DispatchHandle             Handle of this dispatch function
  @param[in] RpContext                  Rootport context, which contains RootPort Index,
                                        and RootPort PCI BDF.
**/
VOID
EFIAPI
PchPcieSmiRpHandlerFunction (
  IN  EFI_HANDLE                        DispatchHandle,
  IN  PCH_PCIE_SMI_RP_CONTEXT           *RpContext
  );

/**
  PCIE Link Active State Change Hotplug SMI call back function for all Root ports

  @param[in] DispatchHandle             Handle of this dispatch function
  @param[in] RpContext                  Rootport context, which contains RootPort Index,
                                        and RootPort PCI BDF.
**/
VOID
EFIAPI
PchPcieLinkActiveStateChange (
  IN  EFI_HANDLE                        DispatchHandle,
  IN  PCH_PCIE_SMI_RP_CONTEXT           *RpContext
  );

/**
  PCIE Link Equalization Request SMI call back function for all Root ports

  @param[in] DispatchHandle             Handle of this dispatch function
  @param[in] RpContext                  Rootport context, which contains RootPort Index,
                                        and RootPort PCI BDF.
**/
VOID
EFIAPI
PchPcieLinkEqHandlerFunction (
  IN  EFI_HANDLE                        DispatchHandle,
  IN  PCH_PCIE_SMI_RP_CONTEXT           *RpContext
  );

/**
  An IoTrap callback to config PCIE power management settings

  @param[in] DispatchHandle  - The handle of this callback, obtained when registering
  @param[in] DispatchContext - Pointer to the EFI_SMM_IO_TRAP_DISPATCH_CALLBACK_CONTEXT

**/
VOID
EFIAPI
PchPcieIoTrapSmiCallback (
  IN     EFI_HANDLE                     DispatchHandle,
  IN     EFI_SMM_IO_TRAP_CONTEXT        *CallbackContext,
  IN OUT VOID                           *CommBuffer,
  IN OUT UINTN                          *CommBufferSize
  );

/**
  Initializes the PCH SMM handler for PCH save and restore

  @param[in] ImageHandle - Handle for the image of this driver
  @param[in] SystemTable - Pointer to the EFI System Table

  @retval EFI_SUCCESS    - PCH SMM handler was installed
**/
EFI_STATUS
EFIAPI
PchInitLateSmm (
  IN      EFI_HANDLE            ImageHandle,
  IN      EFI_SYSTEM_TABLE      *SystemTable
  );

/**
  Initialize PCH Sx entry SMI handler.

  @param[in] ImageHandle - Handle for the image of this driver
**/
VOID
InitializeSxHandler (
  IN EFI_HANDLE        ImageHandle
  );

/**
  PCH Sx entry SMI handler.

  @param[in]     Handle          Handle of the callback
  @param[in]     Context         The dispatch context
  @param[in,out] CommBuffer      A pointer to a collection of data in memory that will
                                 be conveyed from a non-SMM environment into an SMM environment.
  @param[in,out] CommBufferSize  The size of the CommBuffer.

  @retval EFI_SUCCESS
**/

EFI_STATUS
EFIAPI
PchSxHandler (
  IN  EFI_HANDLE                   Handle,
  IN CONST VOID                    *Context OPTIONAL,
  IN OUT VOID                      *CommBuffer OPTIONAL,
  IN OUT UINTN                     *CommBufferSize OPTIONAL
  );

/**
  GbE Sx entry handler
**/
VOID
PchLanSxCallback (
  VOID
  );

/**
  Updates Codec Sx Wake Capability setting: disabled/enabled
**/
VOID
UpdateHdaCodecSxWakeCapabilitySetting (
  VOID
  );

/**
  HDAudio S3 entry handler
**/
VOID
PchHdaSxCallback (
  VOID
  );

/**
  Register dispatch function to handle GPIO pads Sx isolation
**/
VOID
InitializeGpioSxIsolationSmm (
  VOID
  );

/**
  Entry point for Pch Bios Write Protect driver.

  @param[in] ImageHandle          Image handle of this driver.
  @param[in] SystemTable          Global system service table.

  @retval EFI_SUCCESS             Initialization complete.
**/
EFI_STATUS
EFIAPI
InstallPchBiosWriteProtect (
  IN EFI_HANDLE            ImageHandle,
  IN EFI_SYSTEM_TABLE      *SystemTable
  );

/**
  This fuction install SPI ASYNC SMI handler.

  @retval EFI_SUCCESS             Initialization complete.
**/
EFI_STATUS
EFIAPI
InstallPchSpiAsyncSmiHandler (
  VOID
  );





#endif
