/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2016 - 2017 Intel Corporation. <BR>

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

#ifndef _SLLBIS_H_
#define _SLLBIS_H_

#include <UncoreCommonIncludes.h>

#define EFI_ACPI_HMAT_NUMBER_OF_PROCESSOR_DOMAINS MC_MAX_NODE
#define EFI_ACPI_HMAT_NUMBER_OF_MEMORY_DOMAINS    (MC_MAX_NODE * MAX_CRS_ENTRIES_PER_NODE)

#define EFI_ACPI_HMAT_MEMORY_HIERACHY_MEMORY              0
#define EFI_ACPI_HMAT_MEMORY_HIERACHY_LAST_LEVEL_MEMORY   1
#define EFI_ACPI_HMAT_MEMORY_HIERACHY_FIRST_LEVEL_MEMORY  2
#define EFI_ACPI_HMAT_MEMORY_HIERACHY_SECOND_LEVEL_MEMORY 3
#define EFI_ACPI_HMAT_MEMORY_HIERACHY_THIRD_LEVEL_MEMORY  4


#define EFI_ACPI_HMAT_ACCESS_LATENCY           0
#define EFI_ACPI_HMAT_READ_LATENCY             1
#define EFI_ACPI_HMAT_WRITE_LATENCY            2
#define EFI_ACPI_HMAT_ACCESS_BANDWIDTH         3
#define EFI_ACPI_HMAT_READ_BANDWIDTH           4
#define EFI_ACPI_HMAT_WRITE_BANDWIDTH          5

#define EFI_ACPI_HMAT_MAX_SLLBIS_DATA_TYPES    4
#define EFI_ACPI_HMAT_NUMBER_SLLBIS_DATA_TYPES 6

#define EFI_ACPI_HMAT_ELEMENT_BASE_UNIT_VALUE 10

#define MAX_HMAT_MEMORY_HIERACHY_LEVELS      3 // Flat, Cache, and Hybrid
#define HMAT_PERFORMANCE_UNIFORM_ACCESS      1
#define HMAT_PERFORMANCE_NONUNIFORM_ACCESS   0

#define EFI_ACPI_HMAT_MEMORY_BW_LATENCY_ATTRIBUTE_LENGTH 4
#define EFI_ACPI_HMAT_MEMORY_BW_LATENCY_ATTRIBUTE_START_BIT 4


#pragma pack(1)

typedef struct {
  UINT16 Type;
  UINT16 Reserved_2_4;
  UINT32 Length;
  UINT8  Flags;
  UINT8  DataType;
  UINT16 Reserved_10_12;
  UINT32 InitiatorProximityDomainsNumber;
  UINT32 TargetProximityDomainsNumber;
  UINT32 Reserved_20_24;
  UINT64 EntryBaseUnit;
  UINT32 InitiatorProximityDomainList[EFI_ACPI_HMAT_NUMBER_OF_PROCESSOR_DOMAINS];
  UINT32 TargetProximityDomainList[EFI_ACPI_HMAT_NUMBER_OF_MEMORY_DOMAINS];
  UINT16 RelativeDistanceEntry[EFI_ACPI_HMAT_NUMBER_OF_PROCESSOR_DOMAINS][EFI_ACPI_HMAT_NUMBER_OF_MEMORY_DOMAINS];
} LATENCY_BANDWIDTH_INFO_STRUCTURE;
#pragma pack()

// LBIS Macros
// Used to initialize LATENCY_BANDWIDTH_INFO_STRUCTURE
#define LBIS_START() { \
  (UINT16) SYSTEM_LOCALITY_LATENCY_BANDWIDTH_INFORMATION_STRUCTURE_TYPE, \
  (UINT16) 0,         \
  (UINT32) sizeof(LATENCY_BANDWIDTH_INFO_STRUCTURE), \
  (UINT8)  0,         \
  (UINT8)  0,         \
  (UINT16) 0,         \
  (UINT32) 0,         \
  (UINT32) 0,         \
  (UINT32) 0,         \
  (UINT64) 0,         \
  {(UINT32) 0},       \
  {(UINT32) 0},       \
  {

#define RELATIVE_DISTANCE() \
    {(UINT16) 0},                       

#define LBIS_END() \
  },               \
},

#endif /* _SLLBIS_H_ */
