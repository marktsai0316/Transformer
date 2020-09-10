/** @file
  USB3 Mod PHY configuration policy

@copyright
  INTEL CONFIDENTIAL
  Copyright 2018 Intel Corporation.

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
#ifndef _USB3_HSIO_CONFIG_H_
#define _USB3_HSIO_CONFIG_H_

#define USB3_HSIO_CONFIG_REVISION 1
extern EFI_GUID gUsb3HsioConfigGuid;

#pragma pack (push,1)

/**
  This structure describes USB3 Port N configuration parameters
**/
typedef struct {
  /**
    USB 3.0 TX Output Downscale Amplitude Adjustment (orate01margin)
    HSIO_TX_DWORD8[21:16]
    <b>Default = 00h</b>
  **/
  UINT32  HsioTxDownscaleAmp              :  8;
  /**
    USB 3.0 TX Output -3.5dB De-Emphasis Adjustment Setting (ow2tapgen2deemph3p5)
    HSIO_TX_DWORD5[21:16]
    <b>Default = 29h</b> (approximately -3.5dB De-Emphasis)
  **/
  UINT32  HsioTxDeEmph                    :  8;
  /**
    Signed Magnatude number added to the CTLE code.(ctle_adapt_offset_cfg_4_0)
    HSIO_RX_DWORD25 [20:16]
    Ex: -1 -- 1_0001. +1: 0_0001
    <b>Default = 0h</b>
  **/
  UINT32  HsioCtrlAdaptOffsetCfg          :  5;
  /**
    LFPS filter select for n (filter_sel_n_2_0)
    HSIO_RX_DWORD51 [29:27]
    0h:1.6ns
    1h:2.4ns
    2h:3.2ns
    3h:4.0ns
    4h:4.8ns
    5h:5.6ns
    6h:6.4ns
    <b>Default = 0h</b>
  **/
  UINT32  HsioFilterSelN                  :  3;
  /**
    LFPS filter select for p (filter_sel_p_2_0)
    HSIO_RX_DWORD51 [26:24]
    0h:1.6ns
    1h:2.4ns
    2h:3.2ns
    3h:4.0ns
    4h:4.8ns
    5h:5.6ns
    6h:6.4ns
    <b>Default = 0h</b>
  **/
  UINT32  HsioFilterSelP                  :  3;
  /**
    Controls the input offset (olfpscfgpullupdwnres_sus_usb_2_0)
    HSIO_RX_DWORD51 [2:0]
    000 Prohibited
    001 45K
    010 Prohibited
    011 31K
    100 36K
    101 36K
    110 36K
    111 36K
    <b>Default = 3h</b>
  **/
  UINT32  HsioOlfpsCfgPullUpDwnRes        :  3;

  UINT32  HsioTxDeEmphEnable              :  1; ///< Enable the write to USB 3.0 TX Output -3.5dB De-Emphasis Adjustment, <b>0: Disable</b>; 1: Enable.
  UINT32  HsioTxDownscaleAmpEnable        :  1; ///< Enable the write to USB 3.0 TX Output Downscale Amplitude Adjustment, <b>0: Disable</b>; 1: Enable.
  UINT32  HsioCtrlAdaptOffsetCfgEnable    :  1; ///< Enable the write to Signed Magnatude number added to the CTLE code, <b>0: Disable</b>; 1: Enable.
  UINT32  HsioFilterSelNEnable            :  1; ///< Enable the write to LFPS filter select for n, <b>0: Disable</b>; 1: Enable.
  UINT32  HsioFilterSelPEnable            :  1; ///< Enable the write to LFPS filter select for p, <b>0: Disable</b>; 1: Enable.
  UINT32  HsioOlfpsCfgPullUpDwnResEnable  :  1; ///< Enable the write to olfpscfgpullupdwnres, <b>0: Disable</b>; 1: Enable.
  UINT32  RsvdBits0                       : 28; ///< Reserved bits
} HSIO_PARAMETERS;

/**
  Structure for holding USB3 tuning parameters

  <b>Revision 1</b>:
  - Initial version.

**/
typedef struct {
  CONFIG_BLOCK_HEADER     Header;                   ///< Config Block Header
  /**
    These members describe whether the USB3 Port N of PCH is enabled by platform modules.
  **/
  HSIO_PARAMETERS         Port[MAX_USB3_PORTS];
} USB3_HSIO_CONFIG;

#pragma pack (pop)

#endif // _USB3_HSIO_CONFIG_H_

