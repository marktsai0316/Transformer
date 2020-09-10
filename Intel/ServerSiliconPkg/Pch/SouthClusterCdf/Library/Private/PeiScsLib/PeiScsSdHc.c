/** @file
  Initializes SD host controller located on SCS Iosf2Ocp bridge.
  This file contains routines for both eMMC and SD Card host controllers.

@copyright
  INTEL CONFIDENTIAL
  Copyright 2017 - 2020 Intel Corporation.

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

#include <Register/PchRegs.h>
#include <Register/PchRegsScsSd.h>
#include "PeiScsInitInternal.h"

/**
  Configures SD host controller DLL values.

  @param[in] MmioBase  MMIO base of the controller
  @param[in] DllValues Pointer to the structure holding DLL values of the controller.
**/
STATIC
VOID
ConfigureScsSdHostDll (
  IN UINTN       MmioBase,
  IN SCS_SD_DLL  *DllValues
  )
{
  if (DllValues == NULL) {
    ASSERT (FALSE);
    return;
  }

  MmioWrite32 (MmioBase + R_SCS_MEM_TX_CMD_DLL_CNTL, DllValues->TxCmdDelayControl);
  MmioWrite32 (MmioBase + R_SCS_MEM_TX_DATA_DLL_CNTL1, DllValues->TxDataDelayControl1);
  MmioWrite32 (MmioBase + R_SCS_MEM_TX_DATA_DLL_CNTL2, DllValues->TxDataDelayControl2);
  MmioWrite32 (MmioBase + R_SCS_MEM_RX_CMD_DATA_DLL_CNTL1, DllValues->RxCmdDataDelayControl1);
  MmioWrite32 (MmioBase + R_SCS_MEM_RX_CMD_DATA_DLL_CNTL2, DllValues->RxCmdDataDelayControl2);
  MmioWrite32 (MmioBase + R_SCS_MEM_RX_STROBE_DLL_CNTL, DllValues->RxStrobeDelayControl);

  DEBUG ((DEBUG_INFO, "Tx CMD Delay Control (820h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_TX_CMD_DLL_CNTL)));
  DEBUG ((DEBUG_INFO, "Tx Data Delay Control 1 (824h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_TX_DATA_DLL_CNTL1)));
  DEBUG ((DEBUG_INFO, "Tx Data Delay Control 2 (828h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_TX_DATA_DLL_CNTL2)));
  DEBUG ((DEBUG_INFO, "Rx CMD + Data Delay Control 1 (82Ch) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_RX_CMD_DATA_DLL_CNTL1)));
  DEBUG ((DEBUG_INFO, "Rx CMD + Data Delay Control 2 (834h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_RX_CMD_DATA_DLL_CNTL2)));
  DEBUG ((DEBUG_INFO, "Rx Strobe Delay Control (830h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_RX_STROBE_DLL_CNTL)));
}

/**
  Configures SD host controller capabilites.

  @param[in] MmioBase  MMIO base address of controller
  @param[in] SdCaps    Pointer to the structure containing controller capabilities
**/
STATIC
VOID
ConfigureScsSdHostCapabilities (
  IN UINTN        MmioBase,
  IN SCS_SD_CAPS  *SdCaps
  )
{
  if (SdCaps == NULL) {
    ASSERT (FALSE);
    return;
  }

  MmioWrite32 (MmioBase + R_SCS_MEM_CAP_BYPASS_REG1, SdCaps->CapReg1);
  MmioWrite32 (MmioBase + R_SCS_MEM_CAP_BYPASS_REG2, SdCaps->CapReg2);

  //
  // Enable Capabilities Bypass
  //
  MmioWrite32 (MmioBase + R_SCS_MEM_CAP_BYPASS_CONTROL, V_SCS_MEM_CAP_BYPASS_CONTROL_EN);
  DEBUG ((DEBUG_INFO, "Capabilities Bypass Control    (810h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_CAP_BYPASS_CONTROL)));
  DEBUG ((DEBUG_INFO, "Capabilities Bypass Register 1 (814h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_CAP_BYPASS_REG1)));
  DEBUG ((DEBUG_INFO, "Capabilities Bypass Register 2 (818h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_CAP_BYPASS_REG2)));
  DEBUG ((DEBUG_INFO, "Capabilities Register [31:0]  (40h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_CAP1)));
  DEBUG ((DEBUG_INFO, "Capabilities Register [63:32] (44h) = 0x%08x\n", MmioRead32 (MmioBase + R_SCS_MEM_CAP2)));
}

/**
  Configure eMMC controller HS400 mode.

  @param[in] MmioBase    MMIO base of the controller
  @param[in] EmmcConfig  eMMC configuration
**/
STATIC
VOID
ScsEmmcConfigureHostHs400 (
  IN UINTN            MmioBase,
  IN SCS_EMMC_CONFIG  *EmmcConfig
  )
{
  if (EmmcConfig->Hs400Supported) {
    MmioAndThenOr32 (
      MmioBase + R_SCS_MEM_CAP_BYPASS_REG1,
      (UINT32) ~0,
      B_SCS_MEM_CAP_BYPASS_REG1_HS400
      );
  } else {
    DEBUG ((DEBUG_INFO, "Disabling eMMC HS400 support\n"));
    MmioAndThenOr32 (
      MmioBase + R_SCS_MEM_CAP_BYPASS_REG1,
      (UINT32) ~B_SCS_MEM_CAP_BYPASS_REG1_HS400,
      0
      );
    return;
  }
}

/**
  Initialize eMMC MMIO space.

  @param[in] PciBaseAddress  Address of the controller's PCI space
  @param[in] MmioBase        MMIO address to use during initialization
  @param[in] EmmcConfig      eMMC configuration
**/
STATIC
VOID
ScsEmmcInitMmioRegisters (
  IN UINT64           PciBaseAddress,
  IN UINTN            MmioBase,
  IN SCS_EMMC_CONFIG  *EmmcConfig
  )
{
  SCS_SD_DLL  *EmmcDlls;

  ScsControllerEnableMmio (PciBaseAddress, MmioBase);

  ConfigureScsSdHostCapabilities (
    MmioBase,
    ScsGetEmmcDefaultCapabilities ()
    );

  if (EmmcConfig->UseCustomDlls) {
    EmmcDlls = &EmmcConfig->CustomDllValues;
  } else {
    EmmcDlls = ScsGetEmmcDefaultDll ();
  }

  ConfigureScsSdHostDll (
    MmioBase,
    EmmcDlls
    );

  ScsEmmcConfigureHostHs400 (MmioBase, EmmcConfig);

  ScsControllerDisableMmio (PciBaseAddress);
}

/**
  Configure SD card specific capabilities in SD_CAPS_BYPS register.

  @param[in] MmioBase        MMIO address to use during initialization
**/
STATIC
VOID
ScsSdCardConfigureSdCaps (
  IN UINTN  MmioBase
  )
{
  //
  // SD card controller by default advertises the UHS II features support
  // such as ADMA3 or VDD2 1.8 support. This is not true for our silicon so
  // we have to disable those features.
  //
  MmioWrite32 (MmioBase + R_SCS_MEM_SD_CAP_BYPS, 0x29214000);
}

/**
  Initialize SD Card MMIO space.

  @param[in] PciBaseAddress  Address of the controller's PCI space
  @param[in] MmioBase        MMIO address to use during initialization
  @param[in] SdCardConfig    Pointer to SdCard configuration structure
**/
STATIC
VOID
ScsSdCardInitMmioRegisters (
  IN UINT64             PciBaseAddress,
  IN UINTN              MmioBase,
  IN SCS_SDCARD_CONFIG  *SdCardConfig
  )
{
  SCS_SD_DLL  *SdCardDlls;

  ScsControllerEnableMmio (PciBaseAddress, MmioBase);

  ConfigureScsSdHostCapabilities (
    MmioBase,
    ScsGetSdCardDefaultCapabilities ()
    );
  ScsSdCardConfigureSdCaps (MmioBase);

  if (SdCardConfig->UseCustomDlls) {
    SdCardDlls = &SdCardConfig->CustomDllValues;
  } else {
    SdCardDlls = ScsGetSdCardDefaultDll ();
  }

  ConfigureScsSdHostDll (
    MmioBase,
    SdCardDlls
    );


  ScsControllerDisableMmio (PciBaseAddress);
}

/**
  Sets power gating configuration specific to SD controllers.

  @param[in] PciBaseAddress  PCI config space address
**/
STATIC
VOID
ScsSdEnablePowerGating (
  IN UINT64  PciBaseAddress
  )
{
  PciSegmentAndThenOr16 (
    PciBaseAddress + R_SCS_CFG_PG_CONFIG,
    (UINT16) ~(B_SCS_CFG_PG_CONFIG_HAE | B_SCS_CFG_PG_CONFIG_PGE),
    (B_SCS_CFG_PG_CONFIG_SE | B_SCS_CFG_PG_CONFIG_I3E)
    );
}

/**
  Enable eMMC controller.

  @param[in] SiPolicy    Pointer to SI_POLICY_PPI
  @param[in] MmioBase    MMIO address to use during MMIO init
  @param[in] EmmcConfig  eMMC configuration
**/
STATIC
VOID
ScsEmmcEnable (
  IN SI_POLICY_PPI    *SiPolicy,
  IN UINTN            MmioBase,
  IN SCS_EMMC_CONFIG  *EmmcConfig
  )
{
  UINT64         EmmcBaseAddress;
  IOSF2OCP_PORT  *EmmcIosf2OcpPort;
  UINT8          DeviceNum;
  UINT8          FunctionNum;
  UINT8          InterruptPin;
  UINT8          Irq;

  DEBUG ((DEBUG_INFO, "Enabling eMMC controller\n"));

  ScsGetEmmcBdf (&DeviceNum, &FunctionNum);
  EmmcBaseAddress = PCI_SEGMENT_LIB_ADDRESS (
                      DEFAULT_PCI_SEGMENT_NUMBER_PCH,
                      DEFAULT_PCI_BUS_NUMBER_PCH,
                      DeviceNum,
                      FunctionNum,
                      0
                      );
  EmmcIosf2OcpPort = Iosf2OcpGetEmmcPort ();
  ItssGetDevIntConfig (
    SiPolicy,
    DeviceNum,
    FunctionNum,
    &InterruptPin,
    &Irq
    );
// CDF: HAE (bit[5]) = 0b
  PciSegmentAnd16 (
    EmmcBaseAddress + R_SCS_CFG_PG_CONFIG,
    (UINT16) ~(B_SCS_CFG_PG_CONFIG_HAE)
  );

  Iosf2OcpDisableBar1 (EmmcIosf2OcpPort);
  PsfDisableDeviceBar (PsfScsEmmcPort (), (BIT3 | BIT2));
  Iosf2OcpUnlockEmmcDll (EmmcIosf2OcpPort);
  ScsEmmcInitMmioRegisters (EmmcBaseAddress, MmioBase, EmmcConfig);
  GpioEnableScsEmmc ();
  Iosf2OcpConfigureInterrupts (EmmcIosf2OcpPort, InterruptPin, Irq);
}

/**
  Disable eMMC controller.
**/
STATIC
VOID
ScsEmmcDisable (
  VOID
  )
{
  IOSF2OCP_PORT  *EmmcIosf2OcpPort;
  UINT64         EmmcBaseAddress;
  UINT8          DeviceNum;
  UINT8          FunctionNum;

  DEBUG ((DEBUG_INFO, "Disabling eMMC\n"));

  ScsGetEmmcBdf (&DeviceNum, &FunctionNum);
  EmmcBaseAddress = PCI_SEGMENT_LIB_ADDRESS (
                      DEFAULT_PCI_SEGMENT_NUMBER_PCH,
                      DEFAULT_PCI_BUS_NUMBER_PCH,
                      DeviceNum,
                      FunctionNum,
                      0
                      );
  EmmcIosf2OcpPort = Iosf2OcpGetEmmcPort ();

  Iosf2OcpDisableBar1 (EmmcIosf2OcpPort);
  PsfDisableDeviceBar (PsfScsEmmcPort (), (BIT3 | BIT2));
  ScsSdEnablePowerGating (EmmcBaseAddress);
  ScsControllerPutToD3 (EmmcBaseAddress);
  Iosf2OcpDisableEmmc (EmmcIosf2OcpPort);
  PsfDisableDevice (PsfScsEmmcPort ());
  PmcDisableScsEmmc ();

}

/**
  Enables or disables eMMC host controller.

  @param[in]  SiPolicy            Pointer to SI_POLICY_PPI
  @param[in]  TempMemBaseaddress  Temporary MMIO address to use during MMIO init
  @param[out] EmmcInfo            Pointer to SCS_EMMC_INFO
**/
VOID
ScsEmmcInit (
  IN  SI_POLICY_PPI   *SiPolicy,
  IN  UINTN           TempMemBaseAddress,
  OUT SCS_EMMC_INFO   *EmmcInfo
  )
{
  SCS_EMMC_CONFIG  *EmmcConfig;
  EFI_STATUS       Status;

  DEBUG ((DEBUG_INFO, "SCS eMMC init start\n"));

  Status = GetConfigBlock ((VOID*) SiPolicy, &gEmmcConfigGuid, (VOID*) &EmmcConfig);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "Failed to locate eMMC config block\n"));
    ASSERT (FALSE);
    return;
  }

  //
  // If eMMC is not supported by PMC return here.
  // PSF access to the device has already been disabled in pre-mem.
  //
  if (!PmcIsScsEmmcSupported ()) {
    EmmcInfo->Supported = FALSE;
    return;
  }

  EmmcInfo->Supported = TRUE;

  if (EmmcConfig->Enable) {
    ScsEmmcEnable (SiPolicy, TempMemBaseAddress, EmmcConfig);
  } else {
    ScsEmmcDisable ();
  }

  DEBUG ((DEBUG_INFO, "SCS eMMC init finished\n"));
}

/**
  Enable SdCard controller.

  @param[in] SiPolicyPpi   Pointer to SI_POLICY_PPI
  @param[in] MmioBase      MMIO address to use during MMIO init
  @param[in] SdCardConfig  SdCard configuration
**/
STATIC
VOID
ScsSdCardEnable (
  IN SI_POLICY_PPI      *SiPolicy,
  IN UINTN              MmioBase,
  IN SCS_SDCARD_CONFIG  *SdCardConfig
  )
{
  UINT64         SdCardBaseAddress;
  IOSF2OCP_PORT  *SdCardIosf2OcpPort;
  UINT8          DeviceNum = 0;
  UINT8          FunctionNum= 0;
  UINT8          InterruptPin;
  UINT8          Irq;

  DEBUG ((DEBUG_INFO, "Enabling SdCard\n"));

  ScsGetSdCardBdf (&DeviceNum, &FunctionNum);
  SdCardBaseAddress = PCI_SEGMENT_LIB_ADDRESS (
                        DEFAULT_PCI_SEGMENT_NUMBER_PCH,
                        DEFAULT_PCI_BUS_NUMBER_PCH,
                        DeviceNum,
                        FunctionNum,
                        0
                        );
  SdCardIosf2OcpPort = Iosf2OcpGetSdCardPort ();
  ItssGetDevIntConfig (
    SiPolicy,
    DeviceNum,
    FunctionNum,
    &InterruptPin,
    &Irq
    );

  Iosf2OcpDisableBar1 (SdCardIosf2OcpPort);
  PsfDisableDeviceBar (PsfScsSdCardPort (), (BIT3 | BIT2));
  Iosf2OcpSdCard1p8Enable (SdCardIosf2OcpPort, (BOOLEAN) SdCardConfig->PowerEnableActiveHigh);
  ScsSdCardInitMmioRegisters (SdCardBaseAddress, MmioBase, SdCardConfig);
  GpioEnableScsSdCard ();
  GpioEnableScsSdCardDetect ();
  Iosf2OcpConfigureInterrupts (SdCardIosf2OcpPort, InterruptPin, Irq);
}

/**
  Disable SdCard controller.
**/
STATIC
VOID
ScsSdCardDisable (
  VOID
  )
{
  UINT8          DeviceNum = 0;
  UINT8          FunctionNum = 0;
  UINT64         SdCardBaseAddress;
  IOSF2OCP_PORT  *SdCardIosf2OcpPort;

  DEBUG ((DEBUG_INFO, "Disabling SdCard\n"));

  ScsGetSdCardBdf (&DeviceNum, &FunctionNum);
  SdCardBaseAddress = PCI_SEGMENT_LIB_ADDRESS (
                        DEFAULT_PCI_SEGMENT_NUMBER_PCH,
                        DEFAULT_PCI_BUS_NUMBER_PCH,
                        DeviceNum,
                        FunctionNum,
                        0
                        );
  SdCardIosf2OcpPort = Iosf2OcpGetSdCardPort ();

  Iosf2OcpDisableBar1 (SdCardIosf2OcpPort);
  PsfDisableDeviceBar (PsfScsSdCardPort (), (BIT3 | BIT2));
  ScsSdEnablePowerGating (SdCardBaseAddress);
  ScsControllerPutToD3 (SdCardBaseAddress);
  Iosf2OcpDisableSdCard (SdCardIosf2OcpPort);
  PsfDisableDevice (PsfScsSdCardPort ());
  PmcDisableScsSdCard ();
}

/**
  Enables or disables SdCard host controller.

  @param[in]  SiPolicy            Pointer to SI_POLICY_PPI
  @param[in]  TempMemBaseAddress  Temporary MMIO address to use during MMIO init
  @param[out] SdCardInfo          Pointer to SCS_SDCARD_INFO
**/
VOID
ScsSdCardInit (
  IN  SI_POLICY_PPI    *SiPolicy,
  IN  UINTN            TempMemBaseAddress,
  OUT SCS_SDCARD_INFO  *SdCardInfo
  )
{
  SCS_SDCARD_CONFIG  *SdCardConfig;
  EFI_STATUS         Status;

  DEBUG ((DEBUG_INFO, "SCS SdCard init start\n"));

  Status = GetConfigBlock ((VOID*) SiPolicy, &gSdCardConfigGuid, (VOID*) &SdCardConfig);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "Failed to locate SdCard config block\n"));
    ASSERT (FALSE);
    return;
  }

  //
  // If SdCard is not supported by PMC return here.
  // PSF access to the device has already been disabled in pre-mem.
  //
  if (!PmcIsScsSdCardSupported ()) {
    SdCardInfo->Supported = FALSE;
    return;
  }

  SdCardInfo->Supported = TRUE;

  if (SdCardConfig->Enable) {
    ScsSdCardEnable (SiPolicy, TempMemBaseAddress, SdCardConfig);
  } else {
    ScsSdCardDisable ();
  }

  DEBUG ((DEBUG_INFO, "SCS SdCard init finished\n"));
}

