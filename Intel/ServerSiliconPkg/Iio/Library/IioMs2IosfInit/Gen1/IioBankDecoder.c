/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2020 Intel Corporation. <BR>

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

#include "IioBankDecoder.h"

BANK_DECODER_HEADER BankDecoderVer = {
  0x5F42445F,
  "1.21",
  148,
  0,
  "Info : 2.2:1.21"
};

// BankNumber, RegisterAddress, RegisterSize, FieldMask, DualPcie, FlippedPcie, DualPcieMcp, DmiCbSinglePcie, CbRlink, SinglePcieGen3, SinglePcieGen4, FlippedSinglePcieGen4, DualGunit, SingleHfi, CbDmiGen4, Rlink, CpkNac, FlippedCpkNac, CpmNac, Hqm, TurbIp, CbRlinkNac, Disable
BANK_DECODER_ENTRY BankDecoderTable[] = {
    { 0, 0x800, 1, 0x0, { 0x99, 0x99, 0x99, 0x99, 0x81, 0x99, 0x99, 0x99, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x19, 0xd, 0xd, 0x81, 0x1 } },// BankCtrl0.BankType,BankCtrl0.Bank_Decode_Enable,BankCtrl0.Force_Config_Type0,BankCtrl0.Shadow_Enable,BankCtrl0.MC_Bank_Decode_Enable,BankCtrl0.MC_Shadow_Enable,BankCtrl0.Function_Mask,
    { 0, 0x801, 1, 0x0, { 0x20, 0x20, 0x20, 0x18, 0x0, 0x20, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x28, 0x20, 0x20, 0x0, 0x0 } },// DevFunc0.Device,DevFunc0.Function,
    { 0, 0x802, 2, 0x0, { 0x2180, 0x2184, 0x2184, 0x2188, 0x2180, 0x2184, 0x2180, 0x2184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2a8c, 0x2184, 0x2180, 0x2180, 0x2180 } },// DestID0.MS2IOSF_Channel,DestID0.MS2IOSF_Port,DestID0.PSF_Channel,DestID0.PSF_Port,DestID0.PSF_Port_Group,DestID0.PSF_ID,DestID0.PSF_Decode_Mode,
    { 0, 0x807, 1, 0x0, { 0x9b, 0x9b, 0x9b, 0x9b, 0x9a, 0x9b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x98, 0x98, 0x4b, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset0.DevCon_Offset,DEVCON_Offset0.DevCon_Master,DEVCON_Offset0.DevCon_ShadowEn,
    { 1, 0x840, 1, 0x0, { 0x99, 0x99, 0x81, 0x81, 0x81, 0x99, 0x99, 0x99, 0x0, 0x0, 0x0, 0x0, 0x19, 0x19, 0x11, 0x81, 0x81, 0x19, 0x1 } },// BankCtrl1.BankType,BankCtrl1.Bank_Decode_Enable,BankCtrl1.Force_Config_Type0,BankCtrl1.Shadow_Enable,BankCtrl1.MC_Bank_Decode_Enable,BankCtrl1.MC_Shadow_Enable,BankCtrl1.Function_Mask,
    { 1, 0x841, 1, 0x0, { 0x28, 0x28, 0x0, 0x0, 0x0, 0x28, 0x18, 0x18, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x28, 0x28, 0x20, 0x0 } },// DevFunc1.Device,DevFunc1.Function,
    { 1, 0x842, 2, 0x0, { 0x6180, 0x6184, 0x2180, 0x2180, 0x2180, 0x6184, 0x6180, 0x6184, 0x0, 0x0, 0x0, 0x0, 0x2c80, 0x2c84, 0x2a84, 0x2180, 0x2180, 0x2a84, 0x2180 } },// DestID1.MS2IOSF_Channel,DestID1.MS2IOSF_Port,DestID1.PSF_Channel,DestID1.PSF_Port,DestID1.PSF_Port_Group,DestID1.PSF_ID,DestID1.PSF_Decode_Mode,
    { 1, 0x847, 1, 0x0, { 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x4b, 0x4b, 0x4b, 0x9a, 0x9a, 0x4b, 0x98 } },// DEVCON_Offset1.DevCon_Offset,DEVCON_Offset1.DevCon_Master,DEVCON_Offset1.DevCon_ShadowEn,
    { 2, 0x880, 1, 0x0, { 0x99, 0x99, 0x81, 0x81, 0x81, 0x99, 0x99, 0x99, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x1 } },// BankCtrl2.BankType,BankCtrl2.Bank_Decode_Enable,BankCtrl2.Force_Config_Type0,BankCtrl2.Shadow_Enable,BankCtrl2.MC_Bank_Decode_Enable,BankCtrl2.MC_Shadow_Enable,BankCtrl2.Function_Mask,
    { 2, 0x881, 1, 0x0, { 0x30, 0x30, 0x0, 0x0, 0x0, 0x30, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc2.Device,DevFunc2.Function,
    { 2, 0x882, 2, 0x0, { 0xa180, 0xa184, 0x2180, 0x2180, 0x2180, 0xa184, 0xa180, 0xa184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180 } },// DestID2.MS2IOSF_Channel,DestID2.MS2IOSF_Port,DestID2.PSF_Channel,DestID2.PSF_Port,DestID2.PSF_Port_Group,DestID2.PSF_ID,DestID2.PSF_Decode_Mode,
    { 2, 0x887, 1, 0x0, { 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset2.DevCon_Offset,DEVCON_Offset2.DevCon_Master,DEVCON_Offset2.DevCon_ShadowEn,
    { 3, 0x8c0, 1, 0x0, { 0x99, 0x99, 0x81, 0x81, 0x81, 0x99, 0x99, 0x99, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x1 } },// BankCtrl3.BankType,BankCtrl3.Bank_Decode_Enable,BankCtrl3.Force_Config_Type0,BankCtrl3.Shadow_Enable,BankCtrl3.MC_Bank_Decode_Enable,BankCtrl3.MC_Shadow_Enable,BankCtrl3.Function_Mask,
    { 3, 0x8c1, 1, 0x0, { 0x38, 0x38, 0x0, 0x0, 0x0, 0x38, 0x28, 0x28, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc3.Device,DevFunc3.Function,
    { 3, 0x8c2, 2, 0x0, { 0xe180, 0xe184, 0x2180, 0x2180, 0x2180, 0xe184, 0xe180, 0xe184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180 } },// DestID3.MS2IOSF_Channel,DestID3.MS2IOSF_Port,DestID3.PSF_Channel,DestID3.PSF_Port,DestID3.PSF_Port_Group,DestID3.PSF_ID,DestID3.PSF_Decode_Mode,
    { 3, 0x8c7, 1, 0x0, { 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset3.DevCon_Offset,DEVCON_Offset3.DevCon_Master,DEVCON_Offset3.DevCon_ShadowEn,
    { 4, 0x900, 1, 0x0, { 0x99, 0x99, 0x99, 0x81, 0x81, 0x81, 0x81, 0x81, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x1 } },// BankCtrl4.BankType,BankCtrl4.Bank_Decode_Enable,BankCtrl4.Force_Config_Type0,BankCtrl4.Shadow_Enable,BankCtrl4.MC_Bank_Decode_Enable,BankCtrl4.MC_Shadow_Enable,BankCtrl4.Function_Mask,
    { 4, 0x901, 1, 0x0, { 0x40, 0x40, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc4.Device,DevFunc4.Function,
    { 4, 0x902, 2, 0x0, { 0x2184, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180 } },// DestID4.MS2IOSF_Channel,DestID4.MS2IOSF_Port,DestID4.PSF_Channel,DestID4.PSF_Port,DestID4.PSF_Port_Group,DestID4.PSF_ID,DestID4.PSF_Decode_Mode,
    { 4, 0x907, 1, 0x0, { 0x9b, 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset4.DevCon_Offset,DEVCON_Offset4.DevCon_Master,DEVCON_Offset4.DevCon_ShadowEn,
    { 5, 0x940, 1, 0x0, { 0x99, 0x99, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x1 } },// BankCtrl5.BankType,BankCtrl5.Bank_Decode_Enable,BankCtrl5.Force_Config_Type0,BankCtrl5.Shadow_Enable,BankCtrl5.MC_Bank_Decode_Enable,BankCtrl5.MC_Shadow_Enable,BankCtrl5.Function_Mask,
    { 5, 0x941, 1, 0x0, { 0x48, 0x48, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc5.Device,DevFunc5.Function,
    { 5, 0x942, 2, 0x0, { 0x6184, 0x6180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180 } },// DestID5.MS2IOSF_Channel,DestID5.MS2IOSF_Port,DestID5.PSF_Channel,DestID5.PSF_Port,DestID5.PSF_Port_Group,DestID5.PSF_ID,DestID5.PSF_Decode_Mode,
    { 5, 0x947, 1, 0x0, { 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset5.DevCon_Offset,DEVCON_Offset5.DevCon_Master,DEVCON_Offset5.DevCon_ShadowEn,
    { 6, 0x980, 1, 0x0, { 0x99, 0x99, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x1 } },// BankCtrl6.BankType,BankCtrl6.Bank_Decode_Enable,BankCtrl6.Force_Config_Type0,BankCtrl6.Shadow_Enable,BankCtrl6.MC_Bank_Decode_Enable,BankCtrl6.MC_Shadow_Enable,BankCtrl6.Function_Mask,
    { 6, 0x981, 1, 0x0, { 0x50, 0x50, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc6.Device,DevFunc6.Function,
    { 6, 0x982, 2, 0x0, { 0xa184, 0xa180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180 } },// DestID6.MS2IOSF_Channel,DestID6.MS2IOSF_Port,DestID6.PSF_Channel,DestID6.PSF_Port,DestID6.PSF_Port_Group,DestID6.PSF_ID,DestID6.PSF_Decode_Mode,
    { 6, 0x987, 1, 0x0, { 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset6.DevCon_Offset,DEVCON_Offset6.DevCon_Master,DEVCON_Offset6.DevCon_ShadowEn,
    { 7, 0x9c0, 1, 0x0, { 0x99, 0x99, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x0, 0x0, 0x0, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x1 } },// BankCtrl7.BankType,BankCtrl7.Bank_Decode_Enable,BankCtrl7.Force_Config_Type0,BankCtrl7.Shadow_Enable,BankCtrl7.MC_Bank_Decode_Enable,BankCtrl7.MC_Shadow_Enable,BankCtrl7.Function_Mask,
    { 7, 0x9c1, 1, 0x0, { 0x58, 0x58, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc7.Device,DevFunc7.Function,
    { 7, 0x9c2, 2, 0x0, { 0xe184, 0xe180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180 } },// DestID7.MS2IOSF_Channel,DestID7.MS2IOSF_Port,DestID7.PSF_Channel,DestID7.PSF_Port,DestID7.PSF_Port_Group,DestID7.PSF_ID,DestID7.PSF_Decode_Mode,
    { 7, 0x9c7, 1, 0x0, { 0x9b, 0x9b, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x0, 0x0, 0x0, 0x0, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x9a, 0x98 } },// DEVCON_Offset7.DevCon_Offset,DEVCON_Offset7.DevCon_Master,DEVCON_Offset7.DevCon_ShadowEn,
    { 8, 0xa00, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x98, 0x98, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x18, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl8.BankType,BankCtrl8.Bank_Decode_Enable,BankCtrl8.Force_Config_Type0,BankCtrl8.Shadow_Enable,BankCtrl8.FLR_Supported,BankCtrl8.Function_Mask,
    { 8, 0xa01, 1, 0x0, { 0x0, 0x0, 0x0, 0x8, 0x8, 0x0, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x30, 0x0, 0x0, 0x8, 0x0 } },// DevFunc8.Device,DevFunc8.Function,
    { 8, 0xa02, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0xe190, 0xe190, 0x2180, 0x2180, 0x2184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2b8c, 0x2180, 0x2180, 0xe180, 0x2188 } },// DestID8.MS2IOSF_Channel,DestID8.MS2IOSF_Port,DestID8.PSF_Channel,DestID8.PSF_Port,DestID8.PSF_Port_Group,DestID8.PSF_ID,DestID8.PSF_Decode_Mode,
    { 8, 0xa08, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x45, 0x45, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x35, 0x39, 0x39, 0x39, 0x0 } },// BarSize8.Type,BarSize8.Size,
    { 8, 0xa0a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset8.BAR_Offset,
    { 8, 0xa07, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x4b, 0x4b, 0x4a, 0x49, 0x49, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4b, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset8.DevCon_Offset,DEVCON_Offset8.DevCon_Master,DEVCON_Offset8.DevCon_ShadowEn,
    { 9, 0xa20, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x98, 0x98, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl9.BankType,BankCtrl9.Bank_Decode_Enable,BankCtrl9.Force_Config_Type0,BankCtrl9.Shadow_Enable,BankCtrl9.FLR_Supported,BankCtrl9.Function_Mask,
    { 9, 0xa21, 1, 0x0, { 0x0, 0x0, 0x0, 0x9, 0x9, 0x0, 0x18, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0x0 } },// DevFunc9.Device,DevFunc9.Function,
    { 9, 0xa22, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0xe190, 0xe190, 0x2180, 0x6180, 0x6184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID9.MS2IOSF_Channel,DestID9.MS2IOSF_Port,DestID9.PSF_Channel,DestID9.PSF_Port,DestID9.PSF_Port_Group,DestID9.PSF_ID,DestID9.PSF_Decode_Mode,
    { 9, 0xa28, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x45, 0x45, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize9.Type,BarSize9.Size,
    { 9, 0xa2a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset9.BAR_Offset,
    { 9, 0xa27, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x4b, 0x4b, 0x4a, 0x49, 0x49, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset9.DevCon_Offset,DEVCON_Offset9.DevCon_Master,DEVCON_Offset9.DevCon_ShadowEn,
    { 10, 0xa40, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x98, 0x98, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl10.BankType,BankCtrl10.Bank_Decode_Enable,BankCtrl10.Force_Config_Type0,BankCtrl10.Shadow_Enable,BankCtrl10.FLR_Supported,BankCtrl10.Function_Mask,
    { 10, 0xa41, 1, 0x0, { 0x0, 0x0, 0x0, 0xa, 0xa, 0x0, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0x0 } },// DevFunc10.Device,DevFunc10.Function,
    { 10, 0xa42, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0xe190, 0xe190, 0x2180, 0xa180, 0xa184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID10.MS2IOSF_Channel,DestID10.MS2IOSF_Port,DestID10.PSF_Channel,DestID10.PSF_Port,DestID10.PSF_Port_Group,DestID10.PSF_ID,DestID10.PSF_Decode_Mode,
    { 10, 0xa48, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x45, 0x45, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize10.Type,BarSize10.Size,
    { 10, 0xa4a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset10.BAR_Offset,
    { 10, 0xa47, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x4b, 0x4b, 0x4a, 0x49, 0x49, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset10.DevCon_Offset,DEVCON_Offset10.DevCon_Master,DEVCON_Offset10.DevCon_ShadowEn,
    { 11, 0xa60, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x98, 0x98, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl11.BankType,BankCtrl11.Bank_Decode_Enable,BankCtrl11.Force_Config_Type0,BankCtrl11.Shadow_Enable,BankCtrl11.FLR_Supported,BankCtrl11.Function_Mask,
    { 11, 0xa61, 1, 0x0, { 0x0, 0x0, 0x0, 0xb, 0xb, 0x0, 0x28, 0x28, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0x0 } },// DevFunc11.Device,DevFunc11.Function,
    { 11, 0xa62, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0xe190, 0xe190, 0x2180, 0xe180, 0xe184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID11.MS2IOSF_Channel,DestID11.MS2IOSF_Port,DestID11.PSF_Channel,DestID11.PSF_Port,DestID11.PSF_Port_Group,DestID11.PSF_ID,DestID11.PSF_Decode_Mode,
    { 11, 0xa68, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x45, 0x45, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize11.Type,BarSize11.Size,
    { 11, 0xa6a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset11.BAR_Offset,
    { 11, 0xa67, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x4b, 0x4b, 0x4a, 0x49, 0x49, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset11.DevCon_Offset,DEVCON_Offset11.DevCon_Master,DEVCON_Offset11.DevCon_ShadowEn,
    { 12, 0xa80, 1, 0x40, { 0x38, 0x38, 0x20, 0x38, 0x38, 0x38, 0x38, 0x38, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl12.BankType,BankCtrl12.Bank_Decode_Enable,BankCtrl12.Force_Config_Type0,BankCtrl12.Shadow_Enable,BankCtrl12.FLR_Supported,BankCtrl12.Function_Mask,
    { 12, 0xa81, 1, 0x0, { 0x20, 0x40, 0x0, 0xc, 0xc, 0x20, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0x0 } },// DevFunc12.Device,DevFunc12.Function,
    { 12, 0xa82, 2, 0x0, { 0x2180, 0x2184, 0x2180, 0xe190, 0xe190, 0x2180, 0x2180, 0x2184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID12.MS2IOSF_Channel,DestID12.MS2IOSF_Port,DestID12.PSF_Channel,DestID12.PSF_Port,DestID12.PSF_Port_Group,DestID12.PSF_ID,DestID12.PSF_Decode_Mode,
    { 12, 0xa88, 1, 0x2, { 0x41, 0x41, 0x39, 0x39, 0x39, 0x41, 0x45, 0x45, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize12.Type,BarSize12.Size,
    { 12, 0xa8a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset12.BAR_Offset,
    { 12, 0xa87, 1, 0x0, { 0x4b, 0x4b, 0x4a, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset12.DevCon_Offset,DEVCON_Offset12.DevCon_Master,DEVCON_Offset12.DevCon_ShadowEn,
    { 13, 0xaa0, 1, 0x40, { 0x38, 0x38, 0x20, 0x38, 0x38, 0x38, 0x38, 0x38, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl13.BankType,BankCtrl13.Bank_Decode_Enable,BankCtrl13.Force_Config_Type0,BankCtrl13.Shadow_Enable,BankCtrl13.FLR_Supported,BankCtrl13.Function_Mask,
    { 13, 0xaa1, 1, 0x0, { 0x20, 0x40, 0x0, 0xd, 0xd, 0x20, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0x0 } },// DevFunc13.Device,DevFunc13.Function,
    { 13, 0xaa2, 2, 0x0, { 0x2180, 0x2184, 0x2180, 0xe190, 0xe190, 0x2180, 0x2180, 0x2184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID13.MS2IOSF_Channel,DestID13.MS2IOSF_Port,DestID13.PSF_Channel,DestID13.PSF_Port,DestID13.PSF_Port_Group,DestID13.PSF_ID,DestID13.PSF_Decode_Mode,
    { 13, 0xaa8, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize13.Type,BarSize13.Size,
    { 13, 0xaaa, 1, 0xc3, { 0x18, 0x18, 0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset13.BAR_Offset,
    { 13, 0xaa7, 1, 0x0, { 0x4b, 0x4b, 0x4a, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset13.DevCon_Offset,DEVCON_Offset13.DevCon_Master,DEVCON_Offset13.DevCon_ShadowEn,
    { 14, 0xac0, 1, 0x40, { 0x38, 0x38, 0x20, 0x38, 0x38, 0x38, 0x38, 0x38, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl14.BankType,BankCtrl14.Bank_Decode_Enable,BankCtrl14.Force_Config_Type0,BankCtrl14.Shadow_Enable,BankCtrl14.FLR_Supported,BankCtrl14.Function_Mask,
    { 14, 0xac1, 1, 0x0, { 0x20, 0x40, 0x0, 0xe, 0xe, 0x20, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0x0 } },// DevFunc14.Device,DevFunc14.Function,
    { 14, 0xac2, 2, 0x0, { 0x2180, 0x2184, 0x2180, 0xe190, 0xe190, 0x2180, 0x2180, 0x2184, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID14.MS2IOSF_Channel,DestID14.MS2IOSF_Port,DestID14.PSF_Channel,DestID14.PSF_Port,DestID14.PSF_Port_Group,DestID14.PSF_ID,DestID14.PSF_Decode_Mode,
    { 14, 0xac8, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize14.Type,BarSize14.Size,
    { 14, 0xaca, 1, 0xc3, { 0x20, 0x20, 0x10, 0x10, 0x10, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset14.BAR_Offset,
    { 14, 0xac7, 1, 0x0, { 0x4b, 0x4b, 0x4a, 0x4b, 0x4b, 0x4b, 0x4b, 0x4b, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset14.DevCon_Offset,DEVCON_Offset14.DevCon_Master,DEVCON_Offset14.DevCon_ShadowEn,
    { 15, 0xae0, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl15.BankType,BankCtrl15.Bank_Decode_Enable,BankCtrl15.Force_Config_Type0,BankCtrl15.Shadow_Enable,BankCtrl15.FLR_Supported,BankCtrl15.Function_Mask,
    { 15, 0xae1, 1, 0x0, { 0x0, 0x0, 0x0, 0xf, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0 } },// DevFunc15.Device,DevFunc15.Function,
    { 15, 0xae2, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0xe190, 0xe190, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0xe190, 0x2188 } },// DestID15.MS2IOSF_Channel,DestID15.MS2IOSF_Port,DestID15.PSF_Channel,DestID15.PSF_Port,DestID15.PSF_Port_Group,DestID15.PSF_ID,DestID15.PSF_Decode_Mode,
    { 15, 0xae8, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize15.Type,BarSize15.Size,
    { 15, 0xaea, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset15.BAR_Offset,
    { 15, 0xae7, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x4b, 0x4b, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset15.DevCon_Offset,DEVCON_Offset15.DevCon_Master,DEVCON_Offset15.DevCon_ShadowEn,
    { 16, 0xb00, 1, 0x40, { 0x28, 0x28, 0x20, 0x0, 0x20, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0 } },// BankCtrl16.BankType,BankCtrl16.Bank_Decode_Enable,BankCtrl16.Force_Config_Type0,BankCtrl16.Shadow_Enable,BankCtrl16.FLR_Supported,BankCtrl16.Function_Mask,
    { 16, 0xb01, 1, 0x0, { 0x40, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc16.Device,DevFunc16.Function,
    { 16, 0xb02, 2, 0x0, { 0x2184, 0x2180, 0x2180, 0x2188, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID16.MS2IOSF_Channel,DestID16.MS2IOSF_Port,DestID16.PSF_Channel,DestID16.PSF_Port,DestID16.PSF_Port_Group,DestID16.PSF_ID,DestID16.PSF_Decode_Mode,
    { 16, 0xb08, 1, 0x2, { 0x41, 0x41, 0x39, 0x0, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize16.Type,BarSize16.Size,
    { 16, 0xb0a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset16.BAR_Offset,
    { 16, 0xb07, 1, 0x0, { 0x4b, 0x4b, 0x4a, 0x48, 0x4b, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset16.DevCon_Offset,DEVCON_Offset16.DevCon_Master,DEVCON_Offset16.DevCon_ShadowEn,
    { 17, 0xb20, 1, 0x40, { 0x28, 0x28, 0x20, 0x0, 0x20, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0 } },// BankCtrl17.BankType,BankCtrl17.Bank_Decode_Enable,BankCtrl17.Force_Config_Type0,BankCtrl17.Shadow_Enable,BankCtrl17.FLR_Supported,BankCtrl17.Function_Mask,
    { 17, 0xb21, 1, 0x0, { 0x40, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc17.Device,DevFunc17.Function,
    { 17, 0xb22, 2, 0x0, { 0x2184, 0x2180, 0x2180, 0x2188, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID17.MS2IOSF_Channel,DestID17.MS2IOSF_Port,DestID17.PSF_Channel,DestID17.PSF_Port,DestID17.PSF_Port_Group,DestID17.PSF_ID,DestID17.PSF_Decode_Mode,
    { 17, 0xb28, 1, 0x2, { 0x39, 0x39, 0x39, 0x0, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize17.Type,BarSize17.Size,
    { 17, 0xb2a, 1, 0xc3, { 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset17.BAR_Offset,
    { 17, 0xb27, 1, 0x0, { 0x4b, 0x4b, 0x4a, 0x48, 0x4b, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset17.DevCon_Offset,DEVCON_Offset17.DevCon_Master,DEVCON_Offset17.DevCon_ShadowEn,
    { 18, 0xb40, 1, 0x40, { 0x28, 0x28, 0x20, 0x0, 0x20, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0 } },// BankCtrl18.BankType,BankCtrl18.Bank_Decode_Enable,BankCtrl18.Force_Config_Type0,BankCtrl18.Shadow_Enable,BankCtrl18.FLR_Supported,BankCtrl18.Function_Mask,
    { 18, 0xb41, 1, 0x0, { 0x40, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc18.Device,DevFunc18.Function,
    { 18, 0xb42, 2, 0x0, { 0x2184, 0x2180, 0x2180, 0x2188, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID18.MS2IOSF_Channel,DestID18.MS2IOSF_Port,DestID18.PSF_Channel,DestID18.PSF_Port,DestID18.PSF_Port_Group,DestID18.PSF_ID,DestID18.PSF_Decode_Mode,
    { 18, 0xb48, 1, 0x2, { 0x39, 0x39, 0x39, 0x0, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize18.Type,BarSize18.Size,
    { 18, 0xb4a, 1, 0xc3, { 0x20, 0x20, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset18.BAR_Offset,
    { 18, 0xb47, 1, 0x0, { 0x4b, 0x4b, 0x4a, 0x48, 0x4b, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x4b, 0x48 } },// DEVCON_Offset18.DevCon_Offset,DEVCON_Offset18.DevCon_Master,DEVCON_Offset18.DevCon_ShadowEn,
    { 19, 0xb60, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl19.BankType,BankCtrl19.Bank_Decode_Enable,BankCtrl19.Force_Config_Type0,BankCtrl19.Shadow_Enable,BankCtrl19.FLR_Supported,BankCtrl19.Function_Mask,
    { 19, 0xb61, 1, 0x0, { 0x0, 0x0, 0x0, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x0 } },// DevFunc19.Device,DevFunc19.Function,
    { 19, 0xb62, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2198, 0x2198, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2198, 0x2188 } },// DestID19.MS2IOSF_Channel,DestID19.MS2IOSF_Port,DestID19.PSF_Channel,DestID19.PSF_Port,DestID19.PSF_Port_Group,DestID19.PSF_ID,DestID19.PSF_Decode_Mode,
    { 19, 0xb68, 1, 0x2, { 0x39, 0x39, 0x39, 0x34, 0x34, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x34, 0x0 } },// BarSize19.Type,BarSize19.Size,
    { 19, 0xb6a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset19.BAR_Offset,
    { 19, 0xb67, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3e, 0x3e, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3e, 0x48 } },// DEVCON_Offset19.DevCon_Offset,DEVCON_Offset19.DevCon_Master,DEVCON_Offset19.DevCon_ShadowEn,
    { 20, 0xb80, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl20.BankType,BankCtrl20.Bank_Decode_Enable,BankCtrl20.Force_Config_Type0,BankCtrl20.Shadow_Enable,BankCtrl20.FLR_Supported,BankCtrl20.Function_Mask,
    { 20, 0xb81, 1, 0x0, { 0x0, 0x0, 0x0, 0x11, 0x11, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x0 } },// DevFunc20.Device,DevFunc20.Function,
    { 20, 0xb82, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2198, 0x2198, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2198, 0x2188 } },// DestID20.MS2IOSF_Channel,DestID20.MS2IOSF_Port,DestID20.PSF_Channel,DestID20.PSF_Port,DestID20.PSF_Port_Group,DestID20.PSF_ID,DestID20.PSF_Decode_Mode,
    { 20, 0xb88, 1, 0x2, { 0x39, 0x39, 0x39, 0x4c, 0x4c, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x4c, 0x0 } },// BarSize20.Type,BarSize20.Size,
    { 20, 0xb8a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset20.BAR_Offset,
    { 20, 0xb87, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3c, 0x3c, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3c, 0x48 } },// DEVCON_Offset20.DevCon_Offset,DEVCON_Offset20.DevCon_Master,DEVCON_Offset20.DevCon_ShadowEn,
    { 21, 0xba0, 1, 0x40, { 0x20, 0x20, 0x20, 0x0, 0x0, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0, 0x0 } },// BankCtrl21.BankType,BankCtrl21.Bank_Decode_Enable,BankCtrl21.Force_Config_Type0,BankCtrl21.Shadow_Enable,BankCtrl21.FLR_Supported,BankCtrl21.Function_Mask,
    { 21, 0xba1, 1, 0x0, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 } },// DevFunc21.Device,DevFunc21.Function,
    { 21, 0xba2, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2188, 0x2188, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188, 0x2188 } },// DestID21.MS2IOSF_Channel,DestID21.MS2IOSF_Port,DestID21.PSF_Channel,DestID21.PSF_Port,DestID21.PSF_Port_Group,DestID21.PSF_ID,DestID21.PSF_Decode_Mode,
    { 21, 0xba8, 1, 0x2, { 0x39, 0x39, 0x39, 0x0, 0x0, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0 } },// BarSize21.Type,BarSize21.Size,
    { 21, 0xbaa, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset21.BAR_Offset,
    { 21, 0xba7, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x48, 0x48, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x48, 0x48 } },// DEVCON_Offset21.DevCon_Offset,DEVCON_Offset21.DevCon_Master,DEVCON_Offset21.DevCon_ShadowEn,
    { 22, 0xbc0, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl22.BankType,BankCtrl22.Bank_Decode_Enable,BankCtrl22.Force_Config_Type0,BankCtrl22.Shadow_Enable,BankCtrl22.FLR_Supported,BankCtrl22.Function_Mask,
    { 22, 0xbc1, 1, 0x0, { 0x0, 0x0, 0x0, 0x12, 0x12, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x12, 0x0 } },// DevFunc22.Device,DevFunc22.Function,
    { 22, 0xbc2, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2198, 0x2198, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2198, 0x2188 } },// DestID22.MS2IOSF_Channel,DestID22.MS2IOSF_Port,DestID22.PSF_Channel,DestID22.PSF_Port,DestID22.PSF_Port_Group,DestID22.PSF_ID,DestID22.PSF_Decode_Mode,
    { 22, 0xbc8, 1, 0x2, { 0x39, 0x39, 0x39, 0x4c, 0x4c, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x4c, 0x0 } },// BarSize22.Type,BarSize22.Size,
    { 22, 0xbca, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset22.BAR_Offset,
    { 22, 0xbc7, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3e, 0x3e, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3e, 0x48 } },// DEVCON_Offset22.DevCon_Offset,DEVCON_Offset22.DevCon_Master,DEVCON_Offset22.DevCon_ShadowEn,
    { 23, 0xbe0, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl23.BankType,BankCtrl23.Bank_Decode_Enable,BankCtrl23.Force_Config_Type0,BankCtrl23.Shadow_Enable,BankCtrl23.FLR_Supported,BankCtrl23.Function_Mask,
    { 23, 0xbe1, 1, 0x0, { 0x0, 0x0, 0x0, 0x14, 0x14, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14, 0x0 } },// DevFunc23.Device,DevFunc23.Function,
    { 23, 0xbe2, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID23.MS2IOSF_Channel,DestID23.MS2IOSF_Port,DestID23.PSF_Channel,DestID23.PSF_Port,DestID23.PSF_Port_Group,DestID23.PSF_ID,DestID23.PSF_Decode_Mode,
    { 23, 0xbe8, 1, 0x2, { 0x39, 0x39, 0x39, 0x51, 0x51, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x51, 0x0 } },// BarSize23.Type,BarSize23.Size,
    { 23, 0xbea, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset23.BAR_Offset,
    { 23, 0xbe7, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3e, 0x3e, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3e, 0x48 } },// DEVCON_Offset23.DevCon_Offset,DEVCON_Offset23.DevCon_Master,DEVCON_Offset23.DevCon_ShadowEn,
    { 24, 0xc00, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl24.BankType,BankCtrl24.Bank_Decode_Enable,BankCtrl24.Force_Config_Type0,BankCtrl24.Shadow_Enable,BankCtrl24.FLR_Supported,BankCtrl24.Function_Mask,
    { 24, 0xc01, 1, 0x0, { 0x0, 0x0, 0x0, 0x14, 0x14, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14, 0x0 } },// DevFunc24.Device,DevFunc24.Function,
    { 24, 0xc02, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID24.MS2IOSF_Channel,DestID24.MS2IOSF_Port,DestID24.PSF_Channel,DestID24.PSF_Port,DestID24.PSF_Port_Group,DestID24.PSF_ID,DestID24.PSF_Decode_Mode,
    { 24, 0xc08, 1, 0x2, { 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x0 } },// BarSize24.Type,BarSize24.Size,
    { 24, 0xc0a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x18, 0x18, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x10 } },// BAR_Offset24.BAR_Offset,
    { 24, 0xc07, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3c, 0x3c, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3c, 0x48 } },// DEVCON_Offset24.DevCon_Offset,DEVCON_Offset24.DevCon_Master,DEVCON_Offset24.DevCon_ShadowEn,
    { 25, 0xc20, 1, 0x40, { 0x20, 0x20, 0x20, 0x38, 0x38, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x0 } },// BankCtrl25.BankType,BankCtrl25.Bank_Decode_Enable,BankCtrl25.Force_Config_Type0,BankCtrl25.Shadow_Enable,BankCtrl25.FLR_Supported,BankCtrl25.Function_Mask,
    { 25, 0xc21, 1, 0x0, { 0x0, 0x0, 0x0, 0x14, 0x14, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14, 0x0 } },// DevFunc25.Device,DevFunc25.Function,
    { 25, 0xc22, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID25.MS2IOSF_Channel,DestID25.MS2IOSF_Port,DestID25.PSF_Channel,DestID25.PSF_Port,DestID25.PSF_Port_Group,DestID25.PSF_ID,DestID25.PSF_Decode_Mode,
    { 25, 0xc28, 1, 0x2, { 0x39, 0x39, 0x39, 0x45, 0x45, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x45, 0x0 } },// BarSize25.Type,BarSize25.Size,
    { 25, 0xc2a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x20, 0x20, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x20, 0x10 } },// BAR_Offset25.BAR_Offset,
    { 25, 0xc27, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3c, 0x3c, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3c, 0x48 } },// DEVCON_Offset25.DevCon_Offset,DEVCON_Offset25.DevCon_Master,DEVCON_Offset25.DevCon_ShadowEn,
    { 26, 0xc40, 1, 0x40, { 0x20, 0x20, 0x20, 0x8, 0x8, 0x20, 0x20, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x8, 0x0 } },// BankCtrl26.BankType,BankCtrl26.Bank_Decode_Enable,BankCtrl26.Force_Config_Type0,BankCtrl26.Shadow_Enable,BankCtrl26.FLR_Supported,BankCtrl26.Function_Mask,
    { 26, 0xc41, 1, 0x0, { 0x0, 0x0, 0x0, 0x15, 0x15, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0x0 } },// DevFunc26.Device,DevFunc26.Function,
    { 26, 0xc42, 2, 0x0, { 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x0, 0x0, 0x0, 0x0, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2180, 0x2188 } },// DestID26.MS2IOSF_Channel,DestID26.MS2IOSF_Port,DestID26.PSF_Channel,DestID26.PSF_Port,DestID26.PSF_Port_Group,DestID26.PSF_ID,DestID26.PSF_Decode_Mode,
    { 26, 0xc48, 1, 0x2, { 0x39, 0x39, 0x39, 0x55, 0x55, 0x39, 0x39, 0x39, 0x0, 0x0, 0x0, 0x0, 0x39, 0x39, 0x39, 0x39, 0x39, 0x55, 0x0 } },// BarSize26.Type,BarSize26.Size,
    { 26, 0xc4a, 1, 0xc3, { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0, 0x0, 0x0, 0x0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 } },// BAR_Offset26.BAR_Offset,
    { 26, 0xc47, 1, 0x0, { 0x4a, 0x4a, 0x4a, 0x3e, 0x3e, 0x4a, 0x4a, 0x4a, 0x0, 0x0, 0x0, 0x0, 0x4a, 0x4a, 0x4a, 0x4a, 0x4a, 0x3e, 0x48 } },// DEVCON_Offset26.DevCon_Offset,DEVCON_Offset26.DevCon_Master,DEVCON_Offset26.DevCon_ShadowEn,
    { 27, 0xcf0, 1, 0xf0, { 0x3, 0x3, 0x3, 0xb, 0xb, 0xb, 0xb, 0xb, 0x0, 0x0, 0x0, 0x0, 0x3, 0x3, 0x3, 0x3, 0x3, 0xb, 0x3 } },// BankCtrl27.BankType,BankCtrl27.Bank_Decode_Enable,BankCtrl27.Force_Config_Type0,
    { 27, 0xcf2, 2, 0x0, { 0x2188, 0x2188, 0x2188, 0x2188, 0x218c, 0x2188, 0x2188, 0x2188, 0x0, 0x0, 0x0, 0x0, 0x2188, 0x2188, 0x2188, 0x2188, 0x2188, 0x2e88, 0x2188 } },// DestID27.MS2IOSF_Channel,DestID27.MS2IOSF_Port,DestID27.PSF_Channel,DestID27.PSF_Port,DestID27.PSF_Port_Group,DestID27.PSF_ID,DestID27.PSF_Decode_Mode
};