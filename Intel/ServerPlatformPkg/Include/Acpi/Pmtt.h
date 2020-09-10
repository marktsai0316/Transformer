/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2018 Intel Corporation. <BR>

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

#ifndef _ACPI_PMTT_H_
#define _ACPI_PMTT_H_

//
// Includes
//
#include <IndustryStandard/Acpi.h>
#include <IndustryStandard/SmBios.h>
#include <Platform.h>
#include <UncoreCommonIncludes.h>

//
// PMTT Definitions
//
#define ACPI_PMTT_TABLE_SIGNATURE     0x54544D50
#define ACPI_PMTT_TABLE_REVISION      0x02
#define ACPI_PMTT_OEM_REVISION        1

#define PMTT_TOP_LEVEL_AGGREGATOR_DEVICE            0x0001
#define PMTT_PHYSICAL_ELEMENT_OF_TOPOLOGY           0x0002
#define PMTT_AEP_DIMM                               0x0004

#define EFI_ACPI_TOP_LEVEL_SOCKET                     0x00
#define EFI_ACPI_TOP_LEVEL_IMC                        0x01
#define PHYSICAL_COMPONENT_IDENTIFIER_TYPE_DIMM       0x02
#define EFI_ACPI_TOP_LEVEL_VENDOR_SPECIFIC_DEVICE     0XFF

// PMTT GUID variables
#define PMTT_TYPE_DIE_GUID { 0xA2555053, 0xCDE4, 0x40A5, {0x80, 0x76, 0x00, 0xE3, 0xAB, 0xA6, 0xCA, 0xA7} }
#define PMTT_TYPE_CHANNEL_GUID { 0x23BF9281, 0xE69c, 0x471F, {0xB2, 0x99, 0xB0, 0x98, 0x2B, 0x2F, 0x55, 0xF9} }
#define PMTT_TYPE_SLOT_GUID { 0xFDCB2a68, 0xC203, 0x4312, {0xB2, 0x91, 0xB8, 0xE8, 0x62, 0x86, 0xC2, 0xC1} }

typedef struct {
  UINT8                                     Type;
  UINT8                                     Rsvd;
  UINT16                                    Length;
  UINT16                                    Flag;
  UINT16                                    Rsvd1;
  UINT32                                    NumOfMemoryDevices;
  UINT32                                    SmbiosHandle;
} ACPI_PMTT_DIMM_DEVICE;

typedef struct {
  UINT8                                   Type;
  UINT8                                   Rsvd;
  UINT16                                  Length;
  UINT16                                  Flag;
  UINT16                                  Rsvd1;
  UINT32                                  NumOfMemoryDevices;
  GUID                                    TypeUuid;
  UINT16                                  SlotId;
  UINT16                                  Rsvd2;
  ACPI_PMTT_DIMM_DEVICE                   Dimm;
} ACPI_PMTT_SLOT_DEVICE;

typedef struct {
  UINT8                                   Type;
  UINT8                                   Rsvd;
  UINT16                                  Length;
  UINT16                                  Flag;
  UINT16                                  Rsvd1;
  UINT32                                  NumOfMemoryDevices;
  GUID                                    TypeUuid;
  UINT16                                  ChannelId;
  UINT16                                  Rsvd2;
  ACPI_PMTT_SLOT_DEVICE                   Slot[MAX_DIMM];
} ACPI_PMTT_CHANNEL_DEVICE;

typedef struct {
  UINT8                                     Type;
  UINT8                                     Rsvd;
  UINT16                                    Length;
  UINT16                                    Flag;
  UINT16                                    Rsvd1;
  UINT32                                    NumOfMemoryDevices;
  UINT16                                    ImcId;
  UINT16                                    Rsvd2;
  ACPI_PMTT_CHANNEL_DEVICE                  Channel[MAX_MC_CH];
} ACPI_PMTT_IMC_DEVICE;

typedef struct {
  UINT8                                   Type;
  UINT8                                   Rsvd;
  UINT16                                  Length;
  UINT16                                  Flag;
  UINT16                                  Rsvd1;
  UINT32                                  NumOfMemoryDevices;
  GUID                                    TypeUuid;
  UINT16                                  DieId;
  UINT16                                  Rsvd2;
  ACPI_PMTT_IMC_DEVICE                    Imc[MAX_IMC];
} ACPI_PMTT_DIE_DEVICE;

typedef struct {
  UINT8                                     Type;
  UINT8                                     Rsvd;
  UINT16                                    Length;
  UINT16                                    Flag;
  UINT16                                    Rsvd1;
  UINT32                                    NumOfMemoryDevices;
  UINT16                                    SckIdent;
  UINT16                                    Rsvd2;
  ACPI_PMTT_DIE_DEVICE                      Die[MAX_DIE];
} ACPI_PMTT_SOCKET_DEVICE;

typedef struct {
  EFI_ACPI_DESCRIPTION_HEADER               Header;
  UINT32                                    NumOfMemoryDevices;
  ACPI_PMTT_SOCKET_DEVICE                   Socket[MAX_SOCKET];
} ACPI_PLATFORM_MEMORY_TOPOLOGY_TABLE;

#endif // _ACPI_PMTT_H_

