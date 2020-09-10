/** @file
  Overclocking Config Block.

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
#ifndef _OVERCLOCKING_PREMEM_CONFIG_H_
#define _OVERCLOCKING_PREMEM_CONFIG_H_

#define OVERCLOCKING_CONFIG_REVISION 11

extern EFI_GUID gOverclockingPreMemConfigGuid;

#pragma pack (push,1)

//
// Max number of VF point offset
//
#ifndef CPU_OC_MAX_VF_POINTS
#define CPU_OC_MAX_VF_POINTS   0xF
#endif

//
// Max number of big cores
//
#ifndef CPU_OC_MAX_CORES
#define CPU_OC_MAX_CORES   8  //@Deprecate and replace with CPU_OC_10_CORES
#endif

#ifndef CPU_MAX_10CORES
#define CPU_MAX_10CORES   10
#endif

/**
  Overclocking Configuration Structure.

  <b>Revision 1</b>:
  - Initial version.
  <b>Revision 2</b>
  - Add PerCoreHtDisable
  <b>Revision 3</b>
  - Add Avx2VoltageScaleFactor and Avx512VoltageScaleFactor
  <b>Revision 4</b>
  - Add CoreVfPointOffsetMode & CoreVfPointOffset & CoreVfPointRatio & CoreVfPointCount
  <b>Revision 5</b>
  - Change OcLock default to 'Enabled'
  <b>Revision 6</b>
  - Add CoreVfScope & PerCoreVoltageOffset
  <b>Revision 7</b>
  - Add AtomMaxOcRatio
  <b>Revision 8</b>
  - Add PerCoreRatioOverride and PerCoreRatio for Per Core PState overclocking.
  <b>Revision 9</b>
    Add UnlimitedIccMax
  <b>Revision 10</b>
    Add Atom Voltage configurations
  <b>Revision 11</b>
    Add SA Voltage adaptive and override configurations
**/
typedef struct {
  CONFIG_BLOCK_HEADER   Header;                   ///< Config Block Header
  /**
  Overclocking support. This controls whether OC mailbox transactions are sent.
  If disabled, all policies in this config block besides OcSupport and OcLock will be ignored.
  <b>0: Disable</b>;
  1: Enable.
  @note If PcdOverclockEnable is disabled, this should also be disabled.
  **/
  UINT32 OcSupport            :  1;
  UINT32 OcLock               :  1;               ///< If enabled, sets OC lock bit in MSR 0x194[20], locking the OC mailbox and other OC configuration settings.; 0: Disable; <b>1: Enable (Lock)</b>.
  /**
  Core voltage mode, specifies which voltage mode the processor will be operating.
  <b>0: Adaptive Mode</b> allows the processor to interpolate a voltage curve when beyond fused P0 range;
  1: Override, sets one voltage for for the entire frequency range, Pn-P0.
  **/
  UINT32 CoreVoltageMode      :  1;
  UINT32 CorePllVoltageOffset :  6;               ///< Core PLL voltage offset. <b>0: No offset</b>. Range 0-63 in 17.5mv units.
  UINT32 Avx2RatioOffset      :  5;               ///< AVX2 Ratio Offset. <b>0: No offset</b>. Range is 0-31. Used to lower the AVX ratio to maximize possible ratio for SSE workload.
  UINT32 Avx3RatioOffset      :  5;               ///< AVX3 Ratio Offset. <b>0: No offset</b>. Range is 0-31. Used to lower the AVX3 ratio to maximize possible ratio for SSE workload.
  UINT32 BclkAdaptiveVoltage  :  1;               ///< Bclk Adaptive Voltage enable/disable. <b>0: Disabled</b>, 1: Enabled. When enabled, the CPU V/F curves are aware of BCLK frequency when calculated.
  /**
  Ring Downbin enable/disable.
  When enabled, the CPU will force the ring ratio to be lower than the core ratio.
  Disabling will allow the ring and core ratios to run at the same frequency.
  Uses OC Mailbox command 0x19.
  0: Disables Ring Downbin feature. <b>1: Enables Ring downbin feature.</b>
  **/
  UINT32 RingDownBin          :  1;
  /**
  Ring voltage mode, specifies which voltage mode the processor will be operating.
  <b>0: Adaptive Mode</b> allows the processor to interpolate a voltage curve when beyond fused P0 range;
  1: Override, sets one voltage for for the entire frequency range, Pn-P0.
  **/
  UINT32 RingVoltageMode      :  1;
  UINT32 GtVoltageMode        :  1;    ///< Specifies whether GT voltage is operating in Adaptive or Override mode: <b>0=Adaptive</b>, 1=Override
  UINT32 RealtimeMemoryTiming :  1;    ///< Enable/Disable the message sent to the CPU to allow realtime memory timing changes after MRC_DONE. <b>0=Disable</b>, 1=Enable
  UINT32 FivrFaults           :  1;    ///< Fivr Faults. Enable or Disable FIVR Faults. 0: Disabled, <b>1: Enabled.</b>
  UINT32 FivrEfficiency       :  1;    ///< Fivr Efficiency Management. 0: Disabled, <b>1: Enabled.</b>
  /**
  Selects Core Voltage & Frequency Offset between Legacy and Selection modes.
  Need Reset System after enabling OverClocking Feature to Initialize the default value.
  <b>0: In Legacy Mode, setting a global offset for the entire VF curve.</b>
  1: In Selection Mode, setting a selected VF point.
  **/
  UINT32 CoreVfPointOffsetMode : 1;
  /**
  Core VF Configuration Scope.
  Alows both all-core VF curve or per-core VF curve configuration.
  <b>0: All-core Scope, setting the VF curve for all cores.</b>
  1: Per-core Scope, setting the VF curve per-core.
  **/
  UINT32 CoreVfConfigScope    :  1;
  UINT32 PerCoreRatioOverride :  1;    ///< Enable or disable Per Core PState OC supported by writing OCMB 0x1D to program new favored core ratio to each Core. <b>0: Disable</b>, 1: enable
  UINT32 UnlimitedIccMax      :  1;    ///< Support Unlimited ICCMAX more than maximum value 255.75A.  <b>0: Disabled</b>, 1: Enabled.
  /**
  SA/Uncore voltage mode, specifies which voltage mode the processor will be operating.
  <b>0: Adaptive Mode</b> allows the processor to interpolate a voltage curve when beyond fused P0 range;
  1: Override, sets one voltage for for the entire frequency range, Pn-P0.
  **/
  UINT32 SaVoltageMode       :  1;
  UINT32 RsvdBits            :  1;    ///< Reserved for future use

  /**
  Maximum core turbo ratio override allows to increase CPU core frequency beyond the fused max turbo ratio limit (P0).
  <b>0. no override/HW defaults.</b>. Range non-turbo max - 120 (Previously max turbo is 83).
  **/
  UINT8  CoreMaxOcRatio;
  UINT8  GtMaxOcRatio;                 ///< Maximum GT turbo ratio override: 0=Minimal, 60=Maximum, <b>0=AUTO</b>
  /**
  Maximum ring ratio override allows to increase CPU ring frequency beyond the fused max ring ratio limit.
  <b>0. no override/HW defaults.</b>. Range non-turbo max - 85.
  **/
  UINT8  RingMaxOcRatio;
  /**
  Maximum ATOM turbo ratio override allows to increase CPU core frequency beyond the fused max turbo ratio limit (P0).
  <b>0. no override/HW defaults.</b>. non-turbo max - 120.
  **/
  UINT8  AtomMaxOcRatio;
  /**
  The core voltage override which is applied to the entire range of cpu core frequencies.
  Used when CoreVoltageMode = Override.
  <b>0. no override</b>. Range 0-2000 mV.
  **/
  UINT16 CoreVoltageOverride;
  /**
  Adaptive Turbo voltage target used to define the interpolation voltage point when the cpu is operating in turbo mode range.
  Used when CoreVoltageMode = Adaptive.
  <b>0. no override</b>. Range 0-2000mV.
  **/
  UINT16 CoreVoltageAdaptive;
  /**
  The core voltage offset applied on top of all other voltage modes. This offset is applied over the entire frequency range.
  This is a 2's complement number in mV units. <b>Default: 0</b> Range: -1000 to 1000.
  **/
  INT16  CoreVoltageOffset;
  /**
  The ring voltage override which is applied to the entire range of cpu ring frequencies.
  Used when RingVoltageMode = Override.
  <b>0. no override</b>. Range 0-2000 mV.
  **/
  UINT16 RingVoltageOverride;
  /**
  Adaptive Turbo voltage target used to define the interpolation voltage point when the ring is operating in turbo mode range.
  Used when RingVoltageMode = Adaptive.
  <b>0. no override</b>. Range 0-2000mV.
  **/
  UINT16 RingVoltageAdaptive;
  /**
  The ring voltage offset applied on top of all other voltage modes. This offset is applied over the entire frequency range.
  This is a 2's complement number in mV units. <b>Default: 0</b> Range: -1000 to 1000.
  **/
  INT16  RingVoltageOffset;

  INT16  GtVoltageOffset;                         ///< The voltage offset applied to GT slice. Valid range from -1000mv to 1000mv: <b>0=Minimal</b>, 1000=Maximum
  UINT16 GtVoltageOverride;                       ///< The GT voltage override which is applied to the entire range of GT frequencies <b>0=Default</b>
  UINT16 GtExtraTurboVoltage;                     ///< The adaptive voltage applied during turbo frequencies. Valid range from 0 to 2000mV: <b>0=Minimal</b>, 2000=Maximum
  INT16  SaVoltageOffset;                         ///< The voltage offset applied to the SA. Valid range from -1000mv to 1000mv: <b>0=Default</b>
  UINT32 GtPllVoltageOffset     :  6;             ///< GT PLL voltage offset. <b>0: No offset</b>. Range 0-63 in 17.5mv units.
  UINT32 RingPllVoltageOffset   :  6;             ///< Ring PLL voltage offset. <b>0: No offset</b>. Range 0-63 in 17.5mv units.
  UINT32 SaPllVoltageOffset     :  6;             ///< System Agent PLL voltage offset. <b>0: No offset</b>. Range 0-63 in 17.5mv units.
  UINT32 McPllVoltageOffset     :  6;             ///< Memory Controller PLL voltage offset. <b>0: No offset</b>. Range 0-63 in 17.5mv units.
  UINT32 RsvdBits1              :  8;
  /**
  TjMax Offset. Specified value here is clipped by pCode (125 - TjMax Offset) to support TjMax in the range of 62 to 115 deg Celsius.
  <b> Default: 0 Hardware Defaults </b> Range 10 to 63. 0 = No offset / Keep HW default.
  **/
  UINT8  TjMaxOffset;
  UINT8  RsvdByte2[3];                           //< Reserved for dword alignment
  /**
  This service controls Core frequency reduction caused by high package temperatures for processors that
  implement the Intel Thermal Velocity Boost (TVB) feature. It is required to be disabled for supporting
  overclocking at frequencies higher than the default max turbo frequency.
  <b>0: Disables TVB ratio clipping. </b>1: Enables TVB ratio clipping.
  **/
  UINT32 TvbRatioClipping       :  1;
  /**
  This service controls thermal based voltage optimizations for processors that implement the Intel
  Thermal Velocity Boost (TVB) feature.
  0: Disables TVB voltage optimization. <b>1: Enables TVB voltage optimization.</b>
  **/
  UINT32 TvbVoltageOptimization :  1;
  UINT32 RsvdBits2              : 30;
  /**
  Defines the per-core HT disable mask where: 1 - Disable selected logical core HT, 0 - is ignored.
  Input is in HEX and each bit maps to a logical core. Ex. A value of '1F' would disable HT for cores 4,3,2,1 and 0.
  <b>Default is 0</b>, all cores have HT enabled. Range is 0 - 0x1FF. You can only disable up to MAX_CORE_COUNT - 1.
  **/
  UINT16 PerCoreHtDisable;
  /**
  Avx2 Voltage Guardband Scale Factor
  This controls the AVX2 Voltage Guardband Scale factor applied to AVX2 workloads.
  Valid range is 0-200 in 1/100 units, where a value of 125 would apply a 1.25 scale factor.
  A value of 0 means no scale factor applied (no change to voltage on AVX commands)
  A value of 100 applies the default voltage guardband values (1.0 factor).
  A value > 100 will increase the voltage guardband on AVX2 workloads.
  A value < 100 will decrease the voltage guardband on AVX2 workloads.

  <b>0. No scale factor applied</b>
  **/
  UINT8 Avx2VoltageScaleFactor;
  /**
  Avx512 Voltage Guardband Scale Factor
  This controls the AVX512 Voltage Guardband Scale factor applied to AVX512 workloads.
  Valid range is 0-200 in 1/100 units, where a value of 125 would apply a 1.25 scale factor.
  A value of 0 means no scale factor applied (no change to voltage on AVX commands)
  A value of 100 applies the default voltage guardband values (1.0 factor).
  A value > 100 will increase the voltage guardband on AVX512 workloads.
  A value < 100 will decrease the voltage guardband on AVX512 workloads.

  <b>0. No scale factor applied</b>
  **/
  UINT8 Avx512VoltageScaleFactor;
  /**
  Array used to specifies the Core Voltage Offset applied to the each selected VF Point.
  This voltage is specified in millivolts.
  **/
  INT16  CoreVfPointOffset[CPU_OC_MAX_VF_POINTS];
  UINT8  RsvdByte3[2];  ///< Just to keep native alignment.
  /**
  Array for the each selected VF Point to display the Core Ration.
  **/
  UINT8  CoreVfPointRatio[CPU_OC_MAX_VF_POINTS];
  /**
  Number of supported Core Voltage & Frequency Point.
  **/
  UINT8  CoreVfPointCount;
  /**
  Array used to specifies the selected Core Offset Voltage.
  This voltage is specified in millivolts.
  **/
  INT16  PerCoreVoltageOffset[CPU_OC_MAX_CORES];  //Deprecated due to CPU_OC_MAX_CORES can't be changed
  INT16  PerCoreVoltageOffset1[CPU_MAX_10CORES];
  UINT8  PerCoreRatio[CPU_MAX_10CORES];
  UINT8  RsvdBytes4[3];  ///< keep native alignment.
  /**
  Atom voltage mode, specifies which voltage mode the atom processor will be operating.
  <b>0: Adaptive Mode</b> allows the atom processor to interpolate a voltage curve when beyond fused P0 range;
  1: Override, sets one voltage for for the entire frequency range, Pn-P0.
  **/
  UINT8 AtomVoltageMode;
  /**
  The atom voltage override which is applied to the entire range of atom core frequencies.
  Used when AtomVoltageMode = Override.
  <b>0. no override</b>. Range 0-2000 mV.
  **/
  UINT16 AtomVoltageOverride;
  /**
  Adaptive Turbo voltage target used to define the interpolation voltage point when the atom is operating in turbo mode range.
  Used when AtomVoltageMode = Adaptive.
  <b>0. no override</b>. Range 0-2000mV.
  **/
  UINT16 AtomVoltageAdaptive;
  /**
  The atom voltage offset applied on top of all other voltage modes. This offset is applied over the entire frequency range.
  This is a 2's complement number in mV units. <b>Default: 0</b> Range: -1000 to 1000.
  **/
  INT16  AtomVoltageOffset;
  /**
  The SA/Uncore voltage override which is applied to the entire range of uncore frequencies.
  Used when SaVoltageMode = Override.
  <b>0. no override</b>. Range 0-2000 mV.
  **/
  UINT16 SaVoltageOverride;
  /**
  Adaptive Turbo voltage target used to define the interpolation voltage point when the SA/Uncore is operating in turbo mode range.
  Used when SaVoltageMode = Adaptive.
  <b>0. no override</b>. Range 0-2000mV.
  **/
  UINT16 SaExtraTurboVoltage;
} OVERCLOCKING_PREMEM_CONFIG;

#pragma pack (pop)

#endif // _CPU_OVERCLOCKING_CONFIG_H_
