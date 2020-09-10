/** @file
  Header file for private PmcLib.

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
#ifndef _PMC_PRIVATE_LIB_H_
#define _PMC_PRIVATE_LIB_H_

#include <Library/PmcLib.h>
#include "Register/PmcRegs.h"

/**
  Send PMC IPC1 Normal Read/Write command

  @param[in]  Command           Command to be issued to PMC IPC 1 interface
  @param[in]  SubCmdId          SUB_CMD_ID for provided Command
  @param[in]  CmdSize           Total size in byte to be sent via PMC IPC 1 interface
  @param[in]  WriteBufPtr       Pointer to Structure of 4 DWORDs to be issued to PMC IPC 1 interface
  @param[out] ReadBufPtr        Pointer to Structure of 4 DWORDs to be filled by PMC IPC 1 interface

  @retval EFI_SUCCESS             Command was executed successfully
  @retval EFI_INVALID_PARAMETER   Invalid command size
  @retval EFI_DEVICE_ERROR        IPC command failed with an error
  @retval EFI_TIMEOUT             IPC command did not complete after 1s
**/
EFI_STATUS
PmcSendCommand (
  IN  UINT8                    Command,
  IN  UINT8                    SubCmdId,
  IN  UINT8                    CmdSize,
  IN  PMC_IPC_COMMAND_BUFFER   *WriteBufPtr,
  OUT PMC_IPC_COMMAND_BUFFER   *ReadBufPtr
  );

/**
  Set PCH ACPI base address.
  The Address should not be 0 and should be 256 bytes alignment, and it is IO space, so must not exceed 0xFFFF.

  @param[in] Address                    Address for ACPI base address.

  @retval EFI_SUCCESS                   Successfully completed.
  @retval EFI_INVALID_PARAMETER         Invalid base address passed.
**/
EFI_STATUS
PmcSetAcpiBase (
  IN  UINT16                            Address
  );

/**
  Set PCH PWRM base address.

  @param[in] PmcBase                    PMC PCI base address
  @param[in] Address                    Address for PWRM base address.

  @retval EFI_SUCCESS                   Successfully completed.
  @retval EFI_UNSUPPORTED               DMIC.SRL is set.
**/
EFI_STATUS
PmcSetPwrmBase (
  IN  UINT64                            PmcBase,
  IN  UINT32                            Address
  );

/**
  This function checks if function disable (static and non-static power gating)
  configuration is locked

  @retval lock state
**/
BOOLEAN
PmcIsFunctionDisableConfigLocked (
  VOID
  );

/**
  This function locks static power gating configuration with S3 Boot Script programming
**/
VOID
PmcLockFunctionDisableConfigWithS3BootScript (
  VOID
  );

/**
  This function enables and disables PCIe reference clocks

  @param[in] ModifyClocksMask       mask of Clock Enables to be modified in this call
  @param[in] EnabledClocksMask      mask of Clock Enables to be set
  @param[in] ModifyPortClkreqMask   mask of PCIe port CLKREQ enable to be set
  @param[in] EnabledPortClkreqMask  mask of PCIe port CLKREQ to enable
**/
VOID
PmcSetPcieClockEnableMask (
  UINT32 ModifyClocksMask,
  UINT32 EnabledClocksMask,
  UINT32 ModifyPortClkreqMask,
  UINT32 EnabledPortClkreqMask
  );

/**
  This function locks HOST SW power gating control
**/
VOID
PmcLockHostSwPgCtrl (
  VOID
  );

/**
  This function checks if HOST SW Power Gating Control is locked

  @retval lock state
**/
BOOLEAN
PmcIsHostSwPgCtrlLocked (
  VOID
  );

/**
  This function checks if LAN wake from DeepSx is enabled

  @retval Lan Wake state
**/
BOOLEAN
PmcIsLanDeepSxWakeEnabled (
  VOID
  );

/**
  This function locks down PMC (DebugModeLock)
**/
VOID
PmcLockWithS3BootScript (
  VOID
  );

/**
  Disables USB2 Core PHY PowerGating during power on for Chipsetinit table update
**/
VOID
PmcUsb2CorePhyPowerGatingDisable (
  VOID
  );

/**
  Checks if conditions for proper USB2 PHY AFE programming are met

  @retval TRUE    Conditions are met and programming can be done
  @retval FALSE   Conditions are not met and programming will cannot be done
**/
BOOLEAN
PmcIsAfeProgrammingAllowed (
  VOID
  );

/**
  This function reads CPU Early Power-on Configuration (EPOC)

  @retval CPU EPOC value
**/
UINT32
PmcGetCpuEpoc (
  VOID
  );

/**
  This function sets CPU Early Power-on Configuration (EPOC)

  @param[in] CpuEpocValue      CPU EPOC value
**/
VOID
PmcSetCpuEpoc (
  IN UINT32     CpuEpocValue
  );

/**
  This function sets DRAM_RESET# Control Pin value

  @param[in] DramResetVal      0: Pin output is low
                               1: Pin output is tri-stated
**/
VOID
PmcSetDramResetCtlState (
  IN UINT32     DramResetVal
  );

/**
  This function enables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh
**/
VOID
PmcEnableCf9GlobalReset (
  VOID
  );

/**
  This function disables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh.
**/
VOID
PmcDisableCf9GlobalReset (
  VOID
  );

/**
  This function disables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh.
  Global Reset configuration is locked after programming
**/
VOID
PmcDisableCf9GlobalResetWithLock (
  VOID
  );

/**
  This S3 BootScript only function disables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh.
**/
VOID
PmcDisableCf9GlobalResetInS3BootScript (
  VOID
  );

/**
  This S3 BootScript only function disables triggering Global Reset of both
  the Host and the ME partitions after CF9h write of 6h or Eh.
  Global Reset configuration is locked after programming
**/
VOID
PmcDisableCf9GlobalResetWithLockInS3BootScript (
  VOID
  );

/**
  This function disables CF9 reset without Resume Well reset.
  Cf9 0x6/0xE reset will also reset resume well logic.
**/
VOID
PmcDisableCf9ResetWithoutResumeWell (
  VOID
  );

/**
  This function locks PMC Set Strap Message interface with S3 Boot Script programming
**/
VOID
PmcLockSetStrapMsgInterfaceWithS3BootScript (
  VOID
  );

/**
  This function checks PMC Set Strap Message interface

  @retval State of PMC Set Strap Message Interface
**/
BOOLEAN
PmcIsSetStrapMsgInterfaceEnabled (
  VOID
  );

/**
  This function sets 16-bit PMC Set Strap Message interface data.

  @param[in] StrapData          Strap Set Data
**/
VOID
PmcSetStrapMsgData (
  IN UINT16           StrapData
  );

/**
  This function sets 32-bit PMC Set Strap Message interface data.

  @param[in] StrapData1          Strap Set Data DW1
  @param[in] StrapData2          Strap Set Data DW2 if supported
  @param[in] StrapData3          Strap Set Data DW3 if supported
**/
VOID
PmcSetStrapMsgData32 (
  IN UINT32           StrapData1,
  IN UINT32           StrapData2,
  IN UINT32           StrapData3
  );

/**
  This function read 16-bit PMC Set Strap Message interface data.

  @retval 16-bit Strap Message Data
**/
UINT16
PmcGetStrapMsgData (
  VOID
  );

/**
  This function read 32-bit PMC Set Strap Message interface data.

  @param[out] StrapData1          Strap Get Data DW1
  @param[out] StrapData2          Strap Get Data DW2 if supported
  @param[out] StrapData3          Strap Get Data DW3 if supported
**/
VOID
PmcGetStrapMsgData32 (
  OUT UINT32  *CpuStrapData1,
  OUT UINT32  *CpuStrapData2,
  OUT UINT32  *CpuStrapData3
  );

/**
  This function locks PMC Set Strap Message interface
**/
VOID
PmcLockSetStrapMsgInterface (
  VOID
  );

/**
  This function clears RTC Power Failure status (RTC_PWR_FLR)
**/
VOID
PmcClearRtcPowerFailureStatus (
  VOID
  );

/**
  This function will clear the DISB - DRAM Initialization Scratchpad Bit.
**/
VOID
PmcClearDramInitScratchpad (
  VOID
  );

/**
  This function enables PCI Express* PME events
**/
VOID
PmcEnablePciExpressPmeEvents (
  VOID
  );

/**
  This function sets SLP_SX Stretching Policy and adds
  lock setting to S3 Boot Script
**/
VOID
PmcLockSlpSxStretchingPolicyWithS3BootScript (
  VOID
  );

/**
  This function sets SMI Lock with S3 Boot Script programming
**/
VOID
PmcLockSmiWithS3BootScript (
  VOID
  );

/**
  This function sets eSPI SMI Lock
  @attention This function must be called after eSPI SMI generation has been enabled.
    This setting is required in all boot modes and before EndOfDxe.
    If set value will be restored upon S3 resume by bootscript.
**/
VOID
PmcLockEspiSmiWithS3BootScript (
  VOID
  );

/**
  This function checks if eSPI SMI Lock is set

  @retval eSPI SMI Lock state
**/
BOOLEAN
PmcIsEspiSmiLockSet (
  VOID
  );

typedef enum {
  PmcSwSmiRate1p5ms = 0,
  PmcSwSmiRate16ms,
  PmcSwSmiRate32ms,
  PmcSwSmiRate64ms
} PMC_SWSMI_RATE;

/**
  This function sets SW SMI Rate.

  @param[in] SwSmiRate        Refer to PMC_SWSMI_RATE for possible values
**/
VOID
PmcSetSwSmiRate (
  IN PMC_SWSMI_RATE          SwSmiRate
  );

typedef enum {
  PmcPeriodicSmiRate8s = 0,
  PmcPeriodicSmiRate16s,
  PmcPeriodicSmiRate32s,
  PmcPeriodicSmiRate64s
} PMC_PERIODIC_SMI_RATE;

/**
  This function sets Periodic SMI Rate.

  @param[in] PeriodicSmiRate        Refer to PMC_PERIODIC_SMI_RATE for possible values
**/
VOID
PmcSetPeriodicSmiRate (
  IN PMC_PERIODIC_SMI_RATE    PeriodicSmiRate
  );

/**
  This function reads Power Button Level

  @retval State of PWRBTN# signal (0: Low, 1: High)
**/
UINT8
PmcGetPwrBtnLevel (
  VOID
  );

/**
  This function checks if memory is placed in self-refresh

  @retval Memory Placed In Self-Refresh state
**/
BOOLEAN
PmcIsMemoryPlacedInSelfRefreshState (
  VOID
  );

/**
  This function gets Group to GPE0 configuration

  @param[out] GpeDw0Value       GPIO Group to GPE_DW0 assignment
  @param[out] GpeDw1Value       GPIO Group to GPE_DW1 assignment
  @param[out] GpeDw2Value       GPIO Group to GPE_DW2 assignment
**/
VOID
PmcGetGpioGpe (
  OUT UINT32    *GpeDw0Value,
  OUT UINT32    *GpeDw1Value,
  OUT UINT32    *GpeDw2Value
  );

/**
  This function sets Group to GPE0 configuration

  @param[out] GpeDw0Value       GPIO Group to GPE_DW0 assignment
  @param[out] GpeDw1Value       GPIO Group to GPE_DW1 assignment
  @param[out] GpeDw2Value       GPIO Group to GPE_DW2 assignment
**/
VOID
PmcSetGpioGpe (
  IN UINT32    GpeDw0Value,
  IN UINT32    GpeDw1Value,
  IN UINT32    GpeDw2Value
  );

/**
  This function checks if SCI interrupt is enabled

  @retval SCI Enable state
**/
BOOLEAN
PmcIsSciEnabled (
  VOID
  );

/**
  This function triggers Software GPE
**/
VOID
PmcTriggerSwGpe (
  VOID
  );

//
// Possible SoundWire RCOMP configuration
// Below values can be OR'ed
//
typedef UINT32 PMC_SNDW_RCOMP_BUFFER_CONFIG;
#define PMC_SNDW_RCOMP_SNDW1_ENABLE  BIT0
#define PMC_SNDW_RCOMP_SNDW2_ENABLE  BIT1
#define PMC_SNDW_RCOMP_ACT_TOPOLOGY  BIT2


/**
  This function configures SoundWire buffer RCOMP

  @param[in] SndwRcomp    Soundwire RCOMP configuration
                          Soundwire 1 and/or 2 need to be set
                          to enabled when executing this function
**/
VOID
PmcConfigureSoundWireBufferRcomp (
  IN PMC_SNDW_RCOMP_BUFFER_CONFIG  SndwRcomp
  );

/**
  Disable ME devices. This function can be called only once during
  boot. Calling this function with DisableMe = FALSE will only tell PMC
  that we wish to keep ME enabled and to disallow any further attempts at disabling ME.

  @param[in] DisableMe  TRUE if this function should disable ME.
**/
VOID
PmcDisableMeDevices(
  IN BOOLEAN  DisableMe
);

/**
  Check if CRID mode is supported.

  @param[out] CridSupported   Return TRUE if Crid mode is supported.
  @param[out] OrgRid          Return original rid.
  @param[out] NewRid          Return new rid.

  @retval  EFI_SUCCESS        System can detect the CRID mode.
  @retval  EFI_UNSUPPORTED    System cannot detect the CRID mode.
**/
EFI_STATUS
PmcDetectCrid0 (
  BOOLEAN *CridSupported,
  UINT8   *OrgRid,
  UINT8   *NewRid
  );

/**
  Select CRID0 mode.
  The silicon RID will be changed. Refer to silicon spec for RID value of CRID0.
**/
VOID
PmcSetCrid0WithS3BootScript (
  VOID
  );

/**
  Lock CRID.
**/
VOID
PmcLockCridWithS3BootScript (
  VOID
  );

/**
  This function disables SA SSC
**/
VOID
PmcDisableSaSsc(
  VOID
  );

/**
  Configure PMC S0ix Policies

  @param[in] Data32  Input value for Wbuf0
**/
VOID
PmcConfigS0ixPolicies (
  IN UINT32          Data32
  );

/**
  This function disables TraceHub by enabling power gating
**/
VOID
PmcDisableTraceHub (
  VOID
  );

/**
  This function enables TraceHub by disabling power gating
**/
VOID
PmcEnableTraceHub (
  VOID
  );

/**
  This function forces ACRO on during Sx that allows TraceHub to request for clock and use it for Sx debug
**/
VOID
PmcEnableTraceHubDebugForSx (
  VOID
  );

/**
  This function removes force ACRO on during Sx that disallows TraceHub to request for clock and use it for Sx debug
**/
VOID
PmcDisableTraceHubDebugForSx (
  VOID
  );

/**
  This function checks if TraceHub is power gated

  @retval TraceHub power gating state
**/
BOOLEAN
PmcIsTraceHubPowerGated (
  VOID
  );


#endif // _PMC_PRIVATE_LIB_H_
