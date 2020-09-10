/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2014 - 2020 Intel Corporation. <BR>

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

#ifndef _IE_HECI_REGS_H_
#define _IE_HECI_REGS_H_

/**
  HECI functions location on PCI bus.
 */
#define IE_SEG         0
#define IE_BUS         0
#define IE_DEV_CDF     27
#define IE_DEV_LBG     16

#define IE_FUN_HECI1   0
#define IE_FUN_HECI2   1
#define IE_FUN_IDER    2
#define IE_FUN_KT      3
#define IE_FUN_HECI3   4
#define IE_FUN_HECI4   6

#define IE_KT_FID      ((GetIeDev ()) << 3 | (IE_FUN_KT))


/**
  HECI PCI config space registers list.

  Note that HECI Device Id varies between chipset generations and also between
  client and server chipset SKU.
  Note that H_GSx registers are Host status registers writable for Host,
  read only for IE, and HSF + GS_SHDWx registers are IE status writeable
  for IE, read only for Host side. HFS in HECI-1 is the well known IE Firmware
  Status 1 register.
  The definition of the status registers functionality depends on the type of
  firmware running in IE.
 */
#define HECI_R_VENDORID  0x00
#define HECI_R_DEVICEID  0x02
#define HECI_R_COMMAND   0x04
#define HECI_R_REVID     0x08
#define HECI_R_MBAR      0x10
#define HECI_R_SUBSYSID  0x2C
#define HECI_R_IRQ       0x3C
#define HECI_R_HIDM      0xA0
#define HECI_R_HFS       0x40
#define HECI_R_MISC_SHDW 0x44
#define HECI_R_GS_SHDW   0x48
#define HECI_R_H_GS      0x4C
#define HECI_R_GS_SHDW2  0x60
#define HECI_R_GS_SHDW3  0x64
#define HECI_R_GS_SHDW4  0x68
#define HECI_R_GS_SHDW5  0x6C
#define HECI_R_H_GS2     0x70
#define HECI_R_H_GS3     0x74
#define HECI_R_IEFS1     HECI_R_HFS // HFS in HECI-1 is IE Firmware Status #1

#define IeHeciPciReadIefs1()                                                    \
        PciSegmentRead32 (PCI_SEGMENT_LIB_ADDRESS (IE_SEG, IE_BUS, GetIeDev (), IE_FUN_HECI1, HECI_R_IEFS1))


// IE HECI1 Firmware Status register
typedef union
{
  UINT32   DWord;
  struct
  {
    UINT32 CurrentState      : 4,  // 0:3   Current IE firmware state
           Reserved0         : 5,  // 4:8
           InitComplete      : 1,  // 9     Set when firmware finished initialization
           Reserved1         : 2,  // 10:11
           ErrorCode         : 4,  // 12:15 IE is not running because of fatal error
           Reserved2         : 16; // 16:31
  } Bits;
} IEFS1;

/**
  HECI command register bits.
 */
#define HECI_CMD_BME     0x04  // Bus Master Enable
#define HECI_CMD_MSE     0x02  // Memory Space Enable

/**
  Default values to be used in HECI_R_MBAR before PCI enumeration.
 */
#define HECI1_IE_MBAR_DEFAULT 0xFEDBA000
#define HECI2_IE_MBAR_DEFAULT 0xFEDBB000
#define HECI3_IE_MBAR_DEFAULT 0xFEDBC000

/**
  HECI_IEFS::CurrentState values list.

  This field describes the current state of the firmware.
 */
#define IEFS1_CURSTATE_RESET        0   //< IE is in reset, will exit this state within 1 ms
#define IEFS1_CURSTATE_INIT         1   //< IE is initializing, will exit this state within 2 s
#define IEFS1_CURSTATE_DFXFW        15  //< If set DFX firmware is running in IE


/**
  HECI Interrupt Delivery Mode to be set in HECI_R_HIDM.
 */
#define HECI_HIDM_MSI 0
#define HECI_HIDM_SCI 1
#define HECI_HIDM_SMI 2
#define HECI_HIDM_LAST HECI_HIDM_SMI


/**
  HECI_IEFS::ErrorCode values list.
  If HECI_IEFS::ErrorCode is set to non zero value the IE firmware has
  encountered a fatal error and stopped normal operation.
 */
#define IEFS1_ERRCODE_NOERROR       0  //< IE firmware does not report errors
#define IEFS1_ERRCODE_UNKNOWN       1  //< Uncategorized error occurred
#define IEFS1_ERRCODE_DISABLED      2  //< IE firmware disabled with for (debug)
#define IEFS1_ERRCODE_IMAGEFAIL     3  //< No valid firmware image in IE region


/*
  MISC_SHDW register in HECI-1 config space at offset 44h

  If MSVLD bit is not set the register is not implemented.
  Only in HECI-1 this register is implemented.
 */
typedef union {
  UINT32   DWord;
  struct {
    UINT32 MUSZ     : 6,  // 0:5 - IE UMA Size
           Reserved0:10,  // 6:15 - Reserved
           MUSZV    : 1,  // 16:16 - IE UMA Size Valid
           Reserved1:14,  // 17:30 - Reserved
           MSVLD    : 1;  // 31:31 - Miscellaneous Shadow Valid
  } Bits;
} HECI_MISC_SHDW;

/**
  HECI message header.

  HECI massage header is one double word INT32. It identifies communication
  entities (subsystems) on ME and Host side and provides the exact number
  of bytes in the message body following this header.
 */
typedef union
{
  UINT32   DWord;
  struct
  {
    UINT32 IeAddress  : 8,  ///< Addressee on IE side
           HostAddress: 8,  ///< Addressee on Host side, zero for BIOS
           Length     : 9,  ///< Number of bytes following the header
           Reserved   : 6,
           MsgComplete: 1;  ///< Whether this is last fragment of a message
  } Bits;
} HECI_MSG_HEADER;

/**
  Macro for building HECI message header dword using given ingredients.
 */
#define HeciMsgHeader(IeAdr, HstAdr, Len, Cpl) \
        (UINT32)(((IeAdr) & 0xFF) | ((HstAdr) & 0xFF) << 8 | ((Len) & 0x1FF) << 16 | ((Cpl) << 31))

/**
  Maximum length of HECI message.

  Actually it is maximum length of HECI queue that can be configured by IE.
  Single message must not exceed HECI queue size. Current HECI queue size is
  configured by IE, so this macro does not define current maximum message
  length. It defines maximum length in case IE configures maximum queue size.
 */
#define HECI_MSG_MAXLEN (0x80 * sizeof(UINT32))

#endif // _IE_HECI_REGS_H_

