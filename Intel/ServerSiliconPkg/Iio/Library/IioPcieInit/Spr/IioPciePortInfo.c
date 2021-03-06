/** @file
  This file provides required platform data structure for PCIE.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 1999 - 2020 Intel Corporation. <BR>

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

#include <Uefi/UefiBaseType.h>
#include "IioRegs.h"
#include "IioPlatformData.h"

INTEL_DMI_PCIE_INFO PcieInfoDefaultsSpr = {

    // PortInfo[NUMBER_PORTS_PER_SOCKET];
    //
    // Do not reorder these... entry #0, #1, #3, & #7 need to be the bifurcation table of root ports
    //
    {
        //DMI
        { DMI_DEV_NUM_SPR, DMI_FUNC_NUM_SPR, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_0_LINK_SEL, PCIE_PORT_0_SUPER_CLUSTER_PORT, DMI_DEV_NUM_SPR, DMI_FUNC_NUM_SPR, },

        //IOU0
        { PCIE_PORT_A_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1A_LINK_SEL_1, PCIE_PORT_1A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_B_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1B_LINK_SEL_1, PCIE_PORT_1H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_C_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1C_LINK_SEL_1, PCIE_PORT_1A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_D_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1D_LINK_SEL_1, PCIE_PORT_1H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_E_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1E_LINK_SEL_1, PCIE_PORT_1A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_F_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1F_LINK_SEL_1, PCIE_PORT_1H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_G_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1G_LINK_SEL_1, PCIE_PORT_1A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_H_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_1H_LINK_SEL_1, PCIE_PORT_1H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },

        //IOU1
        { PCIE_PORT_A_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2A_LINK_SEL_2, PCIE_PORT_2A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_B_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2B_LINK_SEL_2, PCIE_PORT_2H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_C_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2C_LINK_SEL_2, PCIE_PORT_2A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_D_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2D_LINK_SEL_2, PCIE_PORT_2H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_E_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2E_LINK_SEL_2, PCIE_PORT_2A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_F_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2F_LINK_SEL_2, PCIE_PORT_2H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_G_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2G_LINK_SEL_2, PCIE_PORT_2A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_H_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_2H_LINK_SEL_2, PCIE_PORT_2H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },

        //IOU2
        { PCIE_PORT_A_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3A_LINK_SEL_3, PCIE_PORT_3A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_B_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3B_LINK_SEL_3, PCIE_PORT_3H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_C_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3C_LINK_SEL_3, PCIE_PORT_3A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_D_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3D_LINK_SEL_3, PCIE_PORT_3H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_E_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3E_LINK_SEL_3, PCIE_PORT_3A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_F_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3F_LINK_SEL_3, PCIE_PORT_3H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_G_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3G_LINK_SEL_3, PCIE_PORT_3A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_H_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_3H_LINK_SEL_3, PCIE_PORT_3H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },

        //IOU3
        { PCIE_PORT_A_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4A_LINK_SEL_4, PCIE_PORT_4A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_B_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4B_LINK_SEL_4, PCIE_PORT_4H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_C_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4C_LINK_SEL_4, PCIE_PORT_4A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_D_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4D_LINK_SEL_4, PCIE_PORT_4H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_E_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4E_LINK_SEL_4, PCIE_PORT_4A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_F_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4F_LINK_SEL_4, PCIE_PORT_4H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_G_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4G_LINK_SEL_4, PCIE_PORT_4A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_H_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_4H_LINK_SEL_4, PCIE_PORT_4H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },

        //IOU4
        { PCIE_PORT_A_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5A_LINK_SEL_5, PCIE_PORT_5A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_B_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5B_LINK_SEL_5, PCIE_PORT_5H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_C_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5C_LINK_SEL_5, PCIE_PORT_5A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_D_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5D_LINK_SEL_5, PCIE_PORT_5H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_E_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5E_LINK_SEL_5, PCIE_PORT_5A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_F_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5F_LINK_SEL_5, PCIE_PORT_5H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_G_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5G_LINK_SEL_5, PCIE_PORT_5A_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },
        { PCIE_PORT_H_DEV_SPR, 0, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, NON_DFX_PCIE_PORT_DEV, NON_DFX_PCIE_PORT_FUNC, PCIE_PORT_5H_LINK_SEL_5, PCIE_PORT_5H_SUPER_CLUSTER_PORT_SPR, IIO_NTB_DEVICE_NUM_SPR, IIO_NTB_FUNC_NUM },

    }
};

const CHAR8* IioPortLabel[] = {
  "0",
  "1a", "1b", "1c", "1d", "1e", "1f", "1g", "1h",
  "2a", "2b", "2c", "2d", "2e", "2f", "2g", "2h",
  "3a", "3b", "3c", "3d", "3e", "3f", "3g", "3h",
  "4a", "4b", "4c", "4d", "4e", "4f", "4g", "4h",
  "5a", "5b", "5c", "5d", "5e", "5f", "5g", "5h",
  "N/A"
  };


/**
  Get platform default data structure for PCIe.

  @param PcieInfoDefaultsTable - Pointer to platform default data structure

  @retval EFI_SUCCESS    Function execution successful.
**/
EFI_STATUS
GetPcieInfoDefaultsTable (
  OUT  INTEL_DMI_PCIE_INFO    **PcieInfoDefaultsTable
  )
{
  *PcieInfoDefaultsTable =  &PcieInfoDefaultsSpr;

  return EFI_SUCCESS;
}
