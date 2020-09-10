/** @file
  Platform Memory Range PPI as defined in EFI 2.0
  PPI for reserving special purpose memory ranges.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2007 Intel Corporation. <BR>

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

#ifndef _PEI_PLATFORM_MEMORY_RANGE_H_
#define _PEI_PLATFORM_MEMORY_RANGE_H_

#define PEI_PLATFORM_MEMORY_RANGE_PPI_GUID \
  { \
    0x30eb2979, 0xb0f7, 0x4d60, 0xb2, 0xdc, 0x1a, 0x2c, 0x96, 0xce, 0xb1, 0xf4 \
  }

typedef struct _PEI_PLATFORM_MEMORY_RANGE_PPI PEI_PLATFORM_MEMORY_RANGE_PPI;

#define PEI_MEMORY_RANGE_OPTION_ROM UINT32

#define PEI_MR_OPTION_ROM_ALL       0xFFFFFFFF
#define PEI_MR_OPTION_ROM_NONE      0x00000000
#define PEI_MR_OPTION_ROM_C0000_16K 0x00000001
#define PEI_MR_OPTION_ROM_C4000_16K 0x00000002
#define PEI_MR_OPTION_ROM_C8000_16K 0x00000004
#define PEI_MR_OPTION_ROM_CC000_16K 0x00000008
#define PEI_MR_OPTION_ROM_D0000_16K 0x00000010
#define PEI_MR_OPTION_ROM_D4000_16K 0x00000020
#define PEI_MR_OPTION_ROM_D8000_16K 0x00000040
#define PEI_MR_OPTION_ROM_DC000_16K 0x00000080
#define PEI_MR_OPTION_ROM_E0000_16K 0x00000100
#define PEI_MR_OPTION_ROM_E4000_16K 0x00000200
#define PEI_MR_OPTION_ROM_E8000_16K 0x00000400
#define PEI_MR_OPTION_ROM_EC000_16K 0x00000800
#define PEI_MR_OPTION_ROM_F0000_16K 0x00001000
#define PEI_MR_OPTION_ROM_F4000_16K 0x00002000
#define PEI_MR_OPTION_ROM_F8000_16K 0x00004000
#define PEI_MR_OPTION_ROM_FC000_16K 0x00008000

//
// SMRAM Memory Range
//
#define PEI_MEMORY_RANGE_SMRAM      UINT32
#define PEI_MR_SMRAM_ALL            0xFFFFFFFF
#define PEI_MR_SMRAM_NONE           0x00000000
#define PEI_MR_SMRAM_CACHEABLE_MASK 0x80000000
#define PEI_MR_SMRAM_SEGTYPE_MASK   0x00FF0000
#define PEI_MR_SMRAM_ABSEG_MASK     0x00010000
#define PEI_MR_SMRAM_HSEG_MASK      0x00020000
#define PEI_MR_SMRAM_TSEG_MASK      0x00040000
//
// If adding additional entries, SMRAM Size
// is a multiple of 128KB.
//
#define PEI_MR_SMRAM_SIZE_MASK          0x0000FFFF
#define PEI_MR_SMRAM_SIZE_128K_MASK     0x00000001
#define PEI_MR_SMRAM_SIZE_256K_MASK     0x00000002
#define PEI_MR_SMRAM_SIZE_512K_MASK     0x00000004
#define PEI_MR_SMRAM_SIZE_1024K_MASK    0x00000008
#define PEI_MR_SMRAM_SIZE_2048K_MASK    0x00000010
#define PEI_MR_SMRAM_SIZE_4096K_MASK    0x00000020
#define PEI_MR_SMRAM_SIZE_8192K_MASK    0x00000040
#define PEI_MR_SMRAM_SIZE_16M_MASK      0x00000080
#define PEI_MR_SMRAM_SIZE_32M_MASK      0x00000100
#define PEI_MR_SMRAM_SIZE_64M_MASK      0x00000200
#define PEI_MR_SMRAM_SIZE_128M_MASK     0x00000400

#define PEI_MR_SMRAM_ABSEG_128K_NOCACHE 0x00010001
#define PEI_MR_SMRAM_HSEG_128K_CACHE    0x80020001
#define PEI_MR_SMRAM_HSEG_128K_NOCACHE  0x00020001
#define PEI_MR_SMRAM_TSEG_128K_CACHE    0x80040001
#define PEI_MR_SMRAM_TSEG_128K_NOCACHE  0x00040001
#define PEI_MR_SMRAM_TSEG_256K_CACHE    0x80040002
#define PEI_MR_SMRAM_TSEG_256K_NOCACHE  0x00040002
#define PEI_MR_SMRAM_TSEG_512K_CACHE    0x80040004
#define PEI_MR_SMRAM_TSEG_512K_NOCACHE  0x00040004
#define PEI_MR_SMRAM_TSEG_1024K_CACHE   0x80040008
#define PEI_MR_SMRAM_TSEG_1024K_NOCACHE 0x00040008

//
// Graphics Memory Range
//
#define PEI_MEMORY_RANGE_GRAPHICS_MEMORY  UINT32
#define PEI_MR_GRAPHICS_MEMORY_ALL        0xFFFFFFFF
#define PEI_MR_GRAPHICS_MEMORY_NONE       0x00000000
#define PEI_MR_GRAPHICS_MEMORY_CACHEABLE  0x80000000
//
// If adding additional entries, Graphics Memory Size
// is a multiple of 512KB.
//
#define PEI_MR_GRAPHICS_MEMORY_SIZE_MASK    0x0000FFFF
#define PEI_MR_GRAPHICS_MEMORY_512K_NOCACHE 0x00000001
#define PEI_MR_GRAPHICS_MEMORY_512K_CACHE   0x80000001
#define PEI_MR_GRAPHICS_MEMORY_1M_NOCACHE   0x00000002
#define PEI_MR_GRAPHICS_MEMORY_1M_CACHE     0x80000002
#define PEI_MR_GRAPHICS_MEMORY_2M_NOCACHE   0x00000004
#define PEI_MR_GRAPHICS_MEMORY_2M_CACHE     0x80000004
#define PEI_MR_GRAPHICS_MEMORY_4M_NOCACHE   0x00000008
#define PEI_MR_GRAPHICS_MEMORY_4M_CACHE     0x80000008
#define PEI_MR_GRAPHICS_MEMORY_8M_NOCACHE   0x00000010
#define PEI_MR_GRAPHICS_MEMORY_8M_CACHE     0x80000010
#define PEI_MR_GRAPHICS_MEMORY_16M_NOCACHE  0x00000020
#define PEI_MR_GRAPHICS_MEMORY_16M_CACHE    0x80000020
#define PEI_MR_GRAPHICS_MEMORY_32M_NOCACHE  0x00000040
#define PEI_MR_GRAPHICS_MEMORY_32M_CACHE    0x80000040
#define PEI_MR_GRAPHICS_MEMORY_48M_NOCACHE  0x00000060
#define PEI_MR_GRAPHICS_MEMORY_48M_CACHE    0x80000060
#define PEI_MR_GRAPHICS_MEMORY_64M_NOCACHE  0x00000080
#define PEI_MR_GRAPHICS_MEMORY_64M_CACHE    0x80000080
//
// Pci Memory Hole
//
#define PEI_MEMORY_RANGE_PCI_MEMORY       UINT32
#define PEI_MR_PCI_MEMORY_SIZE_512M_MASK  0x00000001

typedef
EFI_STATUS
(EFIAPI *PEI_CHOOSE_RANGES) (
  IN      EFI_PEI_SERVICES                      **PeiServices,
  IN PEI_PLATFORM_MEMORY_RANGE_PPI              * This,
  IN OUT  PEI_MEMORY_RANGE_OPTION_ROM           * OptionRomMask,
  IN OUT  PEI_MEMORY_RANGE_SMRAM                * SmramMask,
  IN OUT  PEI_MEMORY_RANGE_GRAPHICS_MEMORY      * GraphicsMemoryMask,
  IN OUT  PEI_MEMORY_RANGE_PCI_MEMORY           * PciMemoryMask
  );

typedef struct _PEI_PLATFORM_MEMORY_RANGE_PPI {
  PEI_CHOOSE_RANGES ChooseRanges;
} PEI_PLATFORM_MEMORY_RANGE_PPI;

extern EFI_GUID gPeiPlatformMemoryRangePpiGuid;

#endif
