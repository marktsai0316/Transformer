
/** @file
  IEH_SATELLITE.h

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2007 - 2020 Intel Corporation. <BR>
  
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
  
  This file contains Silicon register definitions.
  
  This is a generated file; please do not modify it directly.
  
**/

/* The following security policy groups are used by registers in this file:     */

/* SPRA0 Security Policy Groups:                                                */
/* BOOT_W                                                                       */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | OOB_MSM_SAI                                                             */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* BTSMM_W                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | HOSTIA_SMM_SAI | OOB_MSM_SAI                                            */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* COR_CNT                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | UNCORE_PMA_SAI | */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* DFX1                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI | UNCORE_PMA_SAI |     */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* OS_W                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | PM_PCS_SAI |                       */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_UNTRUSTED_SAI | OOB_MSM_SAI | DFX_THIRDPARTY_SAI                      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */

/* SPRB0 Security Policy Groups:                                                */
/* BOOT_W                                                                       */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | OOB_MSM_SAI                                                             */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* BTSMM_W                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | HOSTIA_SMM_SAI | OOB_MSM_SAI                                            */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* COR_CNT                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | UNCORE_PMA_SAI | */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* DFX1                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI | UNCORE_PMA_SAI |     */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* OS_W                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | PM_PCS_SAI |                       */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_UNTRUSTED_SAI | OOB_MSM_SAI | DFX_THIRDPARTY_SAI                      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */

/* SPRHBM Security Policy Groups:                                               */
/* BOOT_W                                                                       */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | OOB_MSM_SAI                                                             */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* BTSMM_W                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | HOSTIA_SMM_SAI | OOB_MSM_SAI                                            */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* COR_CNT                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | UNCORE_PMA_SAI | */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* DFX1                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI | UNCORE_PMA_SAI |     */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* OS_W                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | PM_PCS_SAI |                       */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_UNTRUSTED_SAI | OOB_MSM_SAI | DFX_THIRDPARTY_SAI                      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */

/* SPRC0 Security Policy Groups:                                                */
/* BOOT_W                                                                       */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | OOB_MSM_SAI                                                             */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* BTSMM_W                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | HOSTIA_SMM_SAI | OOB_MSM_SAI                                            */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* COR_CNT                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | UNCORE_PMA_SAI | */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* DFX1                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI | UNCORE_PMA_SAI |     */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* OS_W                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | PM_PCS_SAI |                       */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_UNTRUSTED_SAI | OOB_MSM_SAI | DFX_THIRDPARTY_SAI                      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */

/* SPRMCC Security Policy Groups:                                               */
/* BOOT_W                                                                       */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | OOB_MSM_SAI                                                             */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* BTSMM_W                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | HOSTIA_SMM_SAI | OOB_MSM_SAI                                            */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* COR_CNT                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | UNCORE_PMA_SAI | */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* DFX1                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI | UNCORE_PMA_SAI |     */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* OS_W                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | PM_PCS_SAI |                       */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_UNTRUSTED_SAI | OOB_MSM_SAI | DFX_THIRDPARTY_SAI                      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */

/* SPRUCC Security Policy Groups:                                               */
/* BOOT_W                                                                       */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | OOB_MSM_SAI                                                             */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* BTSMM_W                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | HOSTIA_BOOT_SAI  */
/*    | HOSTIA_SMM_SAI | OOB_MSM_SAI                                            */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* COR_CNT                                                                      */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | UNCORE_PMA_SAI | */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_SUNPASS_SAI | HOSTIA_UCODE_SAI |             */
/*    HOSTIA_SMM_SAI | HOSTIA_BOOT_SAI | OOB_MSM_SAI | PM_PCS_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_THIRDPARTY_SAI | DFX_UNTRUSTED_SAI                                    */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* DFX1                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI | UNCORE_PMA_SAI |     */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_UCODE_SAI | HOSTIA_SUNPASS_SAI | PM_PCS_SAI |                      */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI | OOB_MSM_SAI      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */
/* OS_W                                                                         */
/*  Security_ReadAccess_Str:                                                    */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | SAI_Reserved_5 | SAI_Reserved_6 |  */
/*    SAI_Reserved_7 | GT_SAI | PM_PCS_SAI | HW_CPU_SAI | MEM_CPL_SAI | VTD_SAI */
/*    | PM_DIE_TO_DIE_SAI | OOB_MSM_UNTRUSTED_SAI | HOSTCP_PMA_SAI |            */
/*    CSE_INTEL_SAI | CSE_OEM_SAI | FUSE_CTRL_SAI | FUSE_PULLER_SAI |           */
/*    PECI_MSM_SAI | PM_IOSS_SAI | CSE_DNX_SAI | FXR_INTERNAL_SAI |             */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_UNTRUSTED_SAI | SAI_Reserved_26 |       */
/*    IRC_SAI | NPK_SAI | DISPLAY2_SAI | DISPLAY3_SAI | HW_PCH_SAI |            */
/*    SAI_Reserved_32 | SAI_Reserved_33 | SAI_Reserved_34 | GT_PMA_SAI |        */
/*    HSP_SAI | SAI_Reserved_37 | SAI_Reserved_38 | SAI_Reserved_39 |           */
/*    UNCORE_PMA_SAI | RC_MORPHED_SAI | DFX_INTEL_PRODUCTION_SAI |              */
/*    DFX_THIRDPARTY_SAI | DISPLAY_SAI | SAI_Reserved_45 | SAI_Reserved_46 |    */
/*    DISPLAY_KVM_SAI | GT2_SAI | SAI_Reserved_49 | DEVICE_UNTRUSTED_IAL_SAI |  */
/*    SAI_Reserved_51 | CORE_EVENT_PROXY_SAI | DEVICE_ABORT_SAI |               */
/*    RCIOMMU_BYPASS_SAI | SAI_Reserved_55 | SAI_Reserved_56 | IE_CSE_SAI |     */
/*    SAI_Reserved_58 | SAI_Reserved_59 | CPM_SAI | OOB_MSM_SAI | XGBE_SAI |    */
/*    DEVICE_UNTRUSTED_SAI                                                      */
/*  Security_WriteAccess_Str:                                                   */
/*    HOSTIA_POSTBOOT_SAI | HOSTIA_UCODE_SAI | HOSTIA_SMM_SAI |                 */
/*    HOSTIA_SUNPASS_SAI | HOSTIA_BOOT_SAI | PM_PCS_SAI |                       */
/*    DFX_INTEL_MANUFACTURING_SAI | DFX_INTEL_PRODUCTION_SAI |                  */
/*    DFX_UNTRUSTED_SAI | OOB_MSM_SAI | DFX_THIRDPARTY_SAI                      */
/*  Security_Read_CP_Secured:                                                   */
/*    0                                                                         */


#ifndef _IEH_SATELLITE_h
#define _IEH_SATELLITE_h
#include <Base.h>

/* VID_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x10804000)                                                      */
/*      SPRB0 (0x10804000)                                                      */
/*      SPRHBM (0x10804000)                                                     */
/*      SPRC0 (0x10804000)                                                      */
/*      SPRMCC (0x10804000)                                                     */
/*      SPRUCC (0x10804000)                                                     */
/* Register default value on SPRA0: 0x00008086                                  */
/* Register default value on SPRB0: 0x00008086                                  */
/* Register default value on SPRHBM: 0x00008086                                 */
/* Register default value on SPRC0: 0x00008086                                  */
/* Register default value on SPRMCC: 0x00008086                                 */
/* Register default value on SPRUCC: 0x00008086                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Vendor ID
*/


#define VID_IEH_SATELLITE_REG 0x1F010000

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 vid : 16;

                            /* Bits[15:0], Access Type=RO, default=0x00008086*/

                            /*
                               This field identifies Intel as the manufacturer
                               of the device.
                            */

  } Bits;
  UINT16 Data;

} VID_IEH_SATELLITE_STRUCT;

/* DID_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x10804002)                                                      */
/*      SPRB0 (0x10804002)                                                      */
/*      SPRHBM (0x10804002)                                                     */
/*      SPRC0 (0x10804002)                                                      */
/*      SPRMCC (0x10804002)                                                     */
/*      SPRUCC (0x10804002)                                                     */
/* Register default value on SPRA0: 0x00000998                                  */
/* Register default value on SPRB0: 0x00000998                                  */
/* Register default value on SPRHBM: 0x00000998                                 */
/* Register default value on SPRC0: 0x00000998                                  */
/* Register default value on SPRMCC: 0x00000998                                 */
/* Register default value on SPRUCC: 0x00000998                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Device ID
*/


#define DID_IEH_SATELLITE_REG 0x1F010002

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 did : 16;

                            /* Bits[15:0], Access Type=RO/V, default=0x00000998*/

                            /*
                               This field identifies the particular function as
                               allocated by Intel.
                            */

  } Bits;
  UINT16 Data;

} DID_IEH_SATELLITE_STRUCT;

/* PCICMD_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x10804004)                                                      */
/*      SPRB0 (0x10804004)                                                      */
/*      SPRHBM (0x10804004)                                                     */
/*      SPRC0 (0x10804004)                                                      */
/*      SPRMCC (0x10804004)                                                     */
/*      SPRUCC (0x10804004)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Device ID
*/


#define PCICMD_IEH_SATELLITE_REG 0x1F010004

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 iose : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /*
                               This bit controls the function's response to IO
                               Space accesses. When this bit is 0b, the
                               function will handle memory transactions
                               targeting the Function as an Unsupported request
                               (UR). For Type 1 Configuration Space headers,
                               this bit controls the primary side response to
                               IO Space accesses targeting the secondary side.
                               When this bit is 0b, every memory transaction
                               targeting a secondary interface is handled as an
                               Unsupported Request (UR). For Non-posted
                               requests, a completion with UR completion status
                               must be returned.
                            */
    UINT16 mse : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000000*/

                            /*
                               This bit controls the function's response to
                               Memory Space accesses. When this bit is 0b, the
                               function will handle memory transactions
                               targeting the Function as an Unsupported request
                               (UR). For Type 1 Configuration Space headers,
                               this bit controls the primary side response to
                               memory Space accesses targeting the secondary
                               side. When this bit is 0b, every memory
                               transaction targeting a secondary interface is
                               handled as an Unsupported Request (UR). For Non-
                               posted requests, a completion with UR completion
                               status must be returned.
                            */
    UINT16 bme : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               This bit controls the ability of the Function to
                               issue Memory and I/O read or write requests, and
                               the ability of Root or Switch port to foRWard
                               memory and I/O read or write requests in the
                               upstream direction. When this bit is 0b, memory
                               and I/O requests received at the root port or
                               downstream side of a switch port (secondary
                               side) must be handled as an Unsupported Request
                               (UR). For Non-posted requests, a completion with
                               UR completion status must be returned The
                               foRWarding of requests other than memory or I/O
                               requests is not controlled by this bit. MSI
                               interrupts are inband memory writes and are
                               blocked when this bit is 0b.
                            */
    UINT16 sce : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000000*/

                            /*
                               Special Cycle Enable This bit was originally
                               described in the PCI Local Bus Specification.
                               Its functionality does not apply to PCI Express
                               and the bit must be hardwired to 0b.
                            */
    UINT16 mwi : 1;

                            /* Bits[4:4], Access Type=RO, default=0x00000000*/

                            /*
                               Memory Write and Invalidate This bit was
                               originally described in the PCI Local Bus
                               Specification and the PCI-to-PCI Bridge
                               Architecture Specification. Its functionality
                               does not apply to PCI Express and the bit must
                               be hardwired to 0b. For PCI Express to PCI/PCI-X
                               Bridges, refer to the PCI Express to PCI/PCI-X
                               Bridge Specification for requirements for this
                               register.
                            */
    UINT16 vgaps : 1;

                            /* Bits[5:5], Access Type=RO, default=0x00000000*/

                            /*
                               VGA Palette Snoop This bit was originally
                               described in the PCI Local Bus Specification and
                               the PCI-to-PCI Bridge Architecture
                               Specification. Its functionality does not apply
                               to PCI Express and the bit must be hardwired to
                               0b.
                            */
    UINT16 pere : 1;

                            /* Bits[6:6], Access Type=RO, default=0x00000000*/

                            /*
                               This bit controls the setting of the master data
                               parity error bit in the Status Register ('PCI
                               Status Register (PCISTS)' on page 1270) in
                               response to a parity error received on the PCI
                               Express interface (poisoned TLP).
                            */
    UINT16 idsel : 1;

                            /* Bits[7:7], Access Type=RO, default=0x00000000*/

                            /* IDSEL Stepping/Wait Cycle Control */
    UINT16 see : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               When set, this bit enables reporting of Non-
                               Fatal and Fatal errors detected by the Function
                               to the Root Complex. For Type 1 Configuration
                               Space headers, this bit controls transmission by
                               the primary interface of ERR_NONFATAL and
                               ERR_FATAL error messages foRWarded from the
                               secondary interface. ERR_COR messages are not
                               affected by this bit. Errors are reported when
                               enabled either through this bit or through the
                               PCI Express-specific bits in the Device Control
                               Register ('Device Control Register (DEVCTL)' on
                               page 1275).
                            */
    UINT16 fb2bte : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000000*/

                            /* Fast Back-to-Back Transactions Enable */
    UINT16 intxd : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               This bit controls the ability of the PCI-Express
                               Function to generate INTx interrupt message.
                               When set, functions are prevented from asserting
                               INTx interrupt messages. Any INTx emulation
                               interrupts already asserted by the function must
                               be deserted when this bit is set by generating a
                               Deassert_INTx message(s).
                            */
    UINT16 reserved_3 : 5;

                            /* Bits[15:11], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} PCICMD_IEH_SATELLITE_STRUCT;

/* PCISTS_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x10804006)                                                      */
/*      SPRB0 (0x10804006)                                                      */
/*      SPRHBM (0x10804006)                                                     */
/*      SPRC0 (0x10804006)                                                      */
/*      SPRMCC (0x10804006)                                                     */
/*      SPRUCC (0x10804006)                                                     */
/* Register default value on SPRA0: 0x00000010                                  */
/* Register default value on SPRB0: 0x00000010                                  */
/* Register default value on SPRHBM: 0x00000010                                 */
/* Register default value on SPRC0: 0x00000010                                  */
/* Register default value on SPRMCC: 0x00000010                                 */
/* Register default value on SPRUCC: 0x00000010                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* PCI Status Register
*/


#define PCISTS_IEH_SATELLITE_REG 0x1F010006

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 ir : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /*
                               Immediate Readiness (IR): This optional bit,
                               when Set indicates the Function is guaranteed to
                               be ready to successfully complete valid
                               configuration accesses at any time following any
                               reset that the host is capable of issuing
                               configuration requests to this function.
                            */
    UINT16 reserved : 2;

                            /* Bits[2:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT16 ints : 1;

                            /* Bits[3:3], Access Type=RO/V, default=0x00000000*/

                            /*
                               When set, this bit indicates that an INTx
                               emulation interrupt is pending internally in
                               this function. For Type 1 configuration header
                               functions, forwarded INTx messages are not
                               reflected in this bit. unless the INTx messages
                               is being generated fRO/Vm the Type 1
                               configuration header function.
                            */
    UINT16 cape : 1;

                            /* Bits[4:4], Access Type=RO, default=0x00000001*/

                            /*
                               This bit indicates the presence of an Extended
                               capabilities list items. Offset 34H indicates
                               the offset for the first entry in the linked
                               list of capabilities. All PCI Express Functions
                               are required to have a PCI Express Capability
                               Structure. So this bit must be hardwired to 1b.
                            */
    UINT16 sixtysixmhzen : 1;

                            /* Bits[5:5], Access Type=RO, default=0x00000000*/

                            /*
                               66 MHz Capable This bit was originally described
                               in the PCI Local Bus Specification. Its
                               functionality does not apply to PCI Express and
                               the bit must be hardwired to 0b.
                            */
    UINT16 reserved1 : 1;

                            /* Bits[6:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT16 fb2bte : 1;

                            /* Bits[7:7], Access Type=RO, default=0x00000000*/

                            /*
                               Fast Back-to-Back Transactions Capable This bit
                               was originally described in the PCI Local Bus
                               Specification. Its functionality does not apply
                               to PCI Express and the bit must be hardwired to
                               0b.
                            */
    UINT16 mdpd : 1;

                            /* Bits[8:8], Access Type=RO/V, default=0x00000000*/

                            /*
                               This bit is set by a requester (primary side of
                               type1 configuration header functoions) if the
                               parity erRO/Vr response enable bit (PERE in the
                               command register is set and either of the
                               following two conditions occur: 1. Requester
                               receives a completion marked poisoned 2.
                               requester poisons a write request. If the parity
                               erRO/Vr bit is 0b, this bit is never set.
                            */
    UINT16 devsel : 2;

                            /* Bits[10:9], Access Type=RO, default=0x00000000*/

                            /*
                               DEVSEL Timing This field was originally
                               described in the PCI Local Bus Specification.
                               Its functionality does not apply to PCI Express
                               and the field must be hardwired to 00b.
                            */
    UINT16 sta : 1;

                            /* Bits[11:11], Access Type=RO/V, default=0x00000000*/

                            /*
                               This bit is set when the switch generates a
                               completion packet with Completer Abort (CA)
                               status is generated by its primary side.
                            */
    UINT16 rta : 1;

                            /* Bits[12:12], Access Type=RO/V, default=0x00000000*/

                            /*
                               This bit is set when the requester receives a CA
                               completion status. On type 1 configuration
                               header functions, the bit is set when a
                               Completer Abort is received on the primary side.
                            */
    UINT16 rma : 1;

                            /* Bits[13:13], Access Type=RO/V, default=0x00000000*/

                            /*
                               This bit is set when the requester receives a
                               completion status with an UR. On type 1
                               configuration header functions, the bit is set
                               when a UR is received on the primary side.
                            */
    UINT16 sse : 1;

                            /* Bits[14:14], Access Type=RW/1C/V, default=0x00000000*/

                            /*
                               This bit is set when ERR_FATAL or ERR_NONFATAL
                               msg are set to the RO/Vot complex event
                               collector and the SERR enable bit in the PCICMD
                               Register is set.
                            */
    UINT16 dpe : 1;

                            /* Bits[15:15], Access Type=RO/V, default=0x00000000*/

                            /*
                               This bit is set when a poisoned TLP is received.
                               This is set even when the parity erRO/Vr
                               response enable bit is not set.
                            */

  } Bits;
  UINT16 Data;

} PCISTS_IEH_SATELLITE_STRUCT;

/* RID_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x804008)                                                        */
/*      SPRB0 (0x804008)                                                        */
/*      SPRHBM (0x804008)                                                       */
/*      SPRC0 (0x804008)                                                        */
/*      SPRMCC (0x804008)                                                       */
/*      SPRUCC (0x804008)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Class Code & Revision ID Register
*/


#define RID_IEH_SATELLITE_REG 0x1F000008

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 rid : 8;

                            /* Bits[7:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               This field specifies the specific revision of
                               this function and should be viewed as a
                               extension to the Device ID. Default values will
                               be determined by softstrap.
                            */

  } Bits;
  UINT8 Data;

} RID_IEH_SATELLITE_STRUCT;

/* CCRPI_IEH_SATELLITE_REG supported on:                                        */
/*      SPRA0 (0x804009)                                                        */
/*      SPRB0 (0x804009)                                                        */
/*      SPRHBM (0x804009)                                                       */
/*      SPRC0 (0x804009)                                                        */
/*      SPRMCC (0x804009)                                                       */
/*      SPRUCC (0x804009)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Class Code Programming Interface Register (CCRPI)
*/


#define CCRPI_IEH_SATELLITE_REG 0x1F000009

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 rlpi : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               Register-Level Programming Interface (RLPI): Set
                               to 00h for all non-APIC devices.
                            */

  } Bits;
  UINT8 Data;

} CCRPI_IEH_SATELLITE_STRUCT;

/* CCRSCC_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x80400a)                                                        */
/*      SPRB0 (0x80400a)                                                        */
/*      SPRHBM (0x80400a)                                                       */
/*      SPRC0 (0x80400a)                                                        */
/*      SPRMCC (0x80400a)                                                       */
/*      SPRUCC (0x80400a)                                                       */
/* Register default value on SPRA0: 0x00000007                                  */
/* Register default value on SPRB0: 0x00000007                                  */
/* Register default value on SPRHBM: 0x00000007                                 */
/* Register default value on SPRC0: 0x00000007                                  */
/* Register default value on SPRMCC: 0x00000007                                 */
/* Register default value on SPRUCC: 0x00000007                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Class Code Sub Class Code Register (CCRSCC)
*/


#define CCRSCC_IEH_SATELLITE_REG 0x1F00000A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 sc : 8;

                            /* Bits[7:0], Access Type=RW/V/P, default=0x00000007*/

                            /*
                               Sub-Class (SC): This function is hardwired to
                               00h, indicating a Host Bridge for global IEH
                               Hardwired to 07h indicating RCEC for satellite
                               IEH.
                            */

  } Bits;
  UINT8 Data;

} CCRSCC_IEH_SATELLITE_STRUCT;

/* CCRBCC_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x80400b)                                                        */
/*      SPRB0 (0x80400b)                                                        */
/*      SPRHBM (0x80400b)                                                       */
/*      SPRC0 (0x80400b)                                                        */
/*      SPRMCC (0x80400b)                                                       */
/*      SPRUCC (0x80400b)                                                       */
/* Register default value on SPRA0: 0x00000008                                  */
/* Register default value on SPRB0: 0x00000008                                  */
/* Register default value on SPRHBM: 0x00000008                                 */
/* Register default value on SPRC0: 0x00000008                                  */
/* Register default value on SPRMCC: 0x00000008                                 */
/* Register default value on SPRUCC: 0x00000008                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Class Code Base Class Code Register (CCRBCC)
*/


#define CCRBCC_IEH_SATELLITE_REG 0x1F00000B

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 bc : 8;

                            /* Bits[7:0], Access Type=RW/V/P, default=0x00000008*/

                            /*
                               Base Class: This function is hardwired to 06h
                               indicating a Host bridge for global IEH.
                               Hardwired to 08h indicating Generic system
                               peripheral for Satellite IEH.
                            */

  } Bits;
  UINT8 Data;

} CCRBCC_IEH_SATELLITE_STRUCT;

/* CLS_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x80400c)                                                        */
/*      SPRB0 (0x80400c)                                                        */
/*      SPRHBM (0x80400c)                                                       */
/*      SPRC0 (0x80400c)                                                        */
/*      SPRMCC (0x80400c)                                                       */
/*      SPRUCC (0x80400c)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Cacheline Size register
*/


#define CLS_IEH_SATELLITE_REG 0x1F00000C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 cls : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               These bits specify the system cache-line size in
                               units of DWords. This field is implemented by
                               PCI Express devices but has no effect on device
                               behaviour.
                            */

  } Bits;
  UINT8 Data;

} CLS_IEH_SATELLITE_STRUCT;

/* LAT_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x80400d)                                                        */
/*      SPRB0 (0x80400d)                                                        */
/*      SPRHBM (0x80400d)                                                       */
/*      SPRC0 (0x80400d)                                                        */
/*      SPRMCC (0x80400d)                                                       */
/*      SPRUCC (0x80400d)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Latency Timer Register (LAT)
*/


#define LAT_IEH_SATELLITE_REG 0x1F00000D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 lat : 8;

                            /* Bits[7:0], Access Type=RO, default=0x00000000*/

                            /*
                               Latency timer Not applicable to PCI-Express.
                               Hardwired to 00h.
                            */

  } Bits;
  UINT8 Data;

} LAT_IEH_SATELLITE_STRUCT;

/* HDR_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x80400e)                                                        */
/*      SPRB0 (0x80400e)                                                        */
/*      SPRHBM (0x80400e)                                                       */
/*      SPRC0 (0x80400e)                                                        */
/*      SPRMCC (0x80400e)                                                       */
/*      SPRUCC (0x80400e)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Header type register
*/


#define HDR_IEH_SATELLITE_REG 0x1F00000E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 htype : 7;

                            /* Bits[6:0], Access Type=RO, default=0x00000000*/

                            /*
                               These bits define the layout of addresses 10h
                               through 3Fh in the configuration Space.
                            */
    UINT8 mfd : 1;

                            /* Bits[7:7], Access Type=RO, default=0x00000000*/

                            /* Muti-fuction Device */

  } Bits;
  UINT8 Data;

} HDR_IEH_SATELLITE_STRUCT;

/* BIST_IEH_SATELLITE_REG supported on:                                         */
/*      SPRA0 (0x80400f)                                                        */
/*      SPRB0 (0x80400f)                                                        */
/*      SPRHBM (0x80400f)                                                       */
/*      SPRC0 (0x80400f)                                                        */
/*      SPRMCC (0x80400f)                                                       */
/*      SPRUCC (0x80400f)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Built-In Self-Test Register (BIST)
*/


#define BIST_IEH_SATELLITE_REG 0x1F00000F

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 bist_tst : 8;

                            /* Bits[7:0], Access Type=RO, default=0x00000000*/

                            /* BIST_TST Not supported. Hardwired to 0h. */

  } Bits;
  UINT8 Data;

} BIST_IEH_SATELLITE_STRUCT;

/* SVID_IEH_SATELLITE_REG supported on:                                         */
/*      SPRA0 (0x1080402c)                                                      */
/*      SPRB0 (0x1080402c)                                                      */
/*      SPRHBM (0x1080402c)                                                     */
/*      SPRC0 (0x1080402c)                                                      */
/*      SPRMCC (0x1080402c)                                                     */
/*      SPRUCC (0x1080402c)                                                     */
/* Register default value on SPRA0: 0x00008086                                  */
/* Register default value on SPRB0: 0x00008086                                  */
/* Register default value on SPRHBM: 0x00008086                                 */
/* Register default value on SPRC0: 0x00008086                                  */
/* Register default value on SPRMCC: 0x00008086                                 */
/* Register default value on SPRUCC: 0x00008086                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Subsystem Vendor ID Register
*/


#define SVID_IEH_SATELLITE_REG 0x1F01002C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 svid : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00008086*/

                            /*
                               This field identifies Intel as the manufacturer
                               of the device.
                            */

  } Bits;
  UINT16 Data;

} SVID_IEH_SATELLITE_STRUCT;

/* SID_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x1080402e)                                                      */
/*      SPRB0 (0x1080402e)                                                      */
/*      SPRHBM (0x1080402e)                                                     */
/*      SPRC0 (0x1080402e)                                                      */
/*      SPRMCC (0x1080402e)                                                     */
/*      SPRUCC (0x1080402e)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Subsystem ID Register
*/


#define SID_IEH_SATELLITE_REG 0x1F01002E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 sid : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /*
                               This field identifies the particular function as
                               allocated by Intel.
                            */

  } Bits;
  UINT16 Data;

} SID_IEH_SATELLITE_STRUCT;

/* CAPPTR_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x804034)                                                        */
/*      SPRB0 (0x804034)                                                        */
/*      SPRHBM (0x804034)                                                       */
/*      SPRC0 (0x804034)                                                        */
/*      SPRMCC (0x804034)                                                       */
/*      SPRUCC (0x804034)                                                       */
/* Register default value on SPRA0: 0x00000040                                  */
/* Register default value on SPRB0: 0x00000040                                  */
/* Register default value on SPRHBM: 0x00000040                                 */
/* Register default value on SPRC0: 0x00000040                                  */
/* Register default value on SPRMCC: 0x00000040                                 */
/* Register default value on SPRUCC: 0x00000040                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Capabilities Pointer Register
*/


#define CAPPTR_IEH_SATELLITE_REG 0x1F000034

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 capptr : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000040*/

                            /*
                               Contains the offset of the first item in the
                               list of capabilities. (EXPCAPLST)
                            */

  } Bits;
  UINT8 Data;

} CAPPTR_IEH_SATELLITE_STRUCT;

/* INTL_IEH_SATELLITE_REG supported on:                                         */
/*      SPRA0 (0x80403c)                                                        */
/*      SPRB0 (0x80403c)                                                        */
/*      SPRHBM (0x80403c)                                                       */
/*      SPRC0 (0x80403c)                                                        */
/*      SPRMCC (0x80403c)                                                       */
/*      SPRUCC (0x80403c)                                                       */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Interrupt Line Register
*/


#define INTL_IEH_SATELLITE_REG 0x1F00003C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 intl : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000000*/

                            /*
                               This register is used to communicate interrupt
                               line routing information. The device itself does
                               not use this value, rather it is used by device
                               drivers and operating systems. N/A for this
                               device.
                            */

  } Bits;
  UINT8 Data;

} INTL_IEH_SATELLITE_STRUCT;

/* INTP_IEH_SATELLITE_REG supported on:                                         */
/*      SPRA0 (0x80403d)                                                        */
/*      SPRB0 (0x80403d)                                                        */
/*      SPRHBM (0x80403d)                                                       */
/*      SPRC0 (0x80403d)                                                        */
/*      SPRMCC (0x80403d)                                                       */
/*      SPRUCC (0x80403d)                                                       */
/* Register default value on SPRA0: 0x00000001                                  */
/* Register default value on SPRB0: 0x00000001                                  */
/* Register default value on SPRHBM: 0x00000001                                 */
/* Register default value on SPRC0: 0x00000001                                  */
/* Register default value on SPRMCC: 0x00000001                                 */
/* Register default value on SPRUCC: 0x00000001                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Interrupt Pin
*/


#define INTP_IEH_SATELLITE_REG 0x1F00003D

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT8 intp : 8;

                            /* Bits[7:0], Access Type=RW, default=0x00000001*/

                            /*
                               This register tells which interrupt pin the
                               function uses. 01h: Generate INTA 02h: Generate
                               INTB 03h: Generate INTC 04h: Generate INTD
                               Others: Reserved Devices (or device functions)
                               that do not use an interrupt pin must put a 0 in
                               this register. N/A since this device does not
                               generate any interrupt on their own
                            */

  } Bits;
  UINT8 Data;

} INTP_IEH_SATELLITE_STRUCT;

/* EXPCAPLST_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x10804040)                                                      */
/*      SPRB0 (0x10804040)                                                      */
/*      SPRHBM (0x10804040)                                                     */
/*      SPRC0 (0x10804040)                                                      */
/*      SPRMCC (0x10804040)                                                     */
/*      SPRUCC (0x10804040)                                                     */
/* Register default value on SPRA0: 0x00008010                                  */
/* Register default value on SPRB0: 0x00008010                                  */
/* Register default value on SPRHBM: 0x00008010                                 */
/* Register default value on SPRC0: 0x00008010                                  */
/* Register default value on SPRMCC: 0x00008010                                 */
/* Register default value on SPRUCC: 0x00008010                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Express Capability List register
*/


#define EXPCAPLST_IEH_SATELLITE_REG 0x1F010040

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 capid : 8;

                            /* Bits[7:0], Access Type=RO, default=0x00000010*/

                            /* Identifies the function as PCI Express capable. */
    UINT16 np : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000080*/

                            /*
                               Contains the offset of the next item in the
                               capabilities list. Indicates that this is the
                               last capability in the list.
                            */

  } Bits;
  UINT16 Data;

} EXPCAPLST_IEH_SATELLITE_STRUCT;

/* EXPCAP_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x10804042)                                                      */
/*      SPRB0 (0x10804042)                                                      */
/*      SPRHBM (0x10804042)                                                     */
/*      SPRC0 (0x10804042)                                                      */
/*      SPRMCC (0x10804042)                                                     */
/*      SPRUCC (0x10804042)                                                     */
/* Register default value on SPRA0: 0x00000092                                  */
/* Register default value on SPRB0: 0x00000092                                  */
/* Register default value on SPRHBM: 0x00000092                                 */
/* Register default value on SPRC0: 0x00000092                                  */
/* Register default value on SPRMCC: 0x00000092                                 */
/* Register default value on SPRUCC: 0x00000092                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* PCI Express Capabilities register
*/


#define EXPCAP_IEH_SATELLITE_REG 0x1F010042

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 vn : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000002*/

                            /*
                               These bits indicate the version number of the
                               PCI Express capability structure.
                            */
    UINT16 dt : 4;

                            /* Bits[7:4], Access Type=RO/V/P, default=0x00000009*/

                            /* 1001b Root Complex Integrated Endpoint */
    UINT16 si : 1;

                            /* Bits[8:8], Access Type=RO, default=0x00000000*/

                            /*
                               Indicates the PCI Express link associated with
                               this port is connected to a slot. Indicates no
                               slot is connected to this port.
                            */
    UINT16 imn : 5;

                            /* Bits[13:9], Access Type=RO, default=0x00000000*/

                            /*
                               This field indicates the interrupt message
                               number that is generated from the PCI Express
                               port. When there is more than one MSI interrupt
                               number, this register is required to contain the
                               offset between the base Message Data and the MSI
                               Message that is generated when the status bits
                               in the slot status register or root port status
                               registers are set. The chipset us required to
                               update this field if the number of MSI messages
                               change.
                            */
    UINT16 reserved : 2;

                            /* Bits[15:14], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} EXPCAP_IEH_SATELLITE_STRUCT;

/* DEVCAP_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x20804044)                                                      */
/*      SPRB0 (0x20804044)                                                      */
/*      SPRHBM (0x20804044)                                                     */
/*      SPRC0 (0x20804044)                                                      */
/*      SPRMCC (0x20804044)                                                     */
/*      SPRUCC (0x20804044)                                                     */
/* Register default value on SPRA0: 0x00000002                                  */
/* Register default value on SPRB0: 0x00000002                                  */
/* Register default value on SPRHBM: 0x00000002                                 */
/* Register default value on SPRC0: 0x00000002                                  */
/* Register default value on SPRMCC: 0x00000002                                 */
/* Register default value on SPRUCC: 0x00000002                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Device Capabilities register
*/


#define DEVCAP_IEH_SATELLITE_REG 0x1F020044

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 mpss : 3;

                            /* Bits[2:0], Access Type=RO, default=0x00000002*/

                            /* 256-byte packets are the maximum supported. */
    UINT32 pfs : 2;

                            /* Bits[4:3], Access Type=RO, default=0x00000000*/

                            /* Not supported */
    UINT32 etfs : 1;

                            /* Bits[5:5], Access Type=RO, default=0x00000000*/

                            /* Only a 5-bit tag is supported. */
    UINT32 epl0al : 3;

                            /* Bits[8:6], Access Type=RO, default=0x00000000*/

                            /*
                               The least latency possible out of L0s is
                               supported.
                            */
    UINT32 epl1al : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* L1 ASPM is not supported. */
    UINT32 undefined : 3;

                            /* Bits[14:12], Access Type=RO, default=0x00000000*/

                            /* undefined */
    UINT32 rber : 1;

                            /* Bits[15:15], Access Type=RO, default=0x00000000*/

                            /* Role based Error Reporting */
    UINT32 reserved : 2;

                            /* Bits[17:16], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 csplv : 8;

                            /* Bits[25:18], Access Type=RO, default=0x00000000*/

                            /*
                               In combination with the Slot Power Limit value
                               (bits[27:26], this field specifies the upper
                               limit of the power supplied by slot. The power
                               limit (in Watts) is calculated by multiplying
                               the value in this field by the value in the Slot
                               Power Limit Value field. This value is set by
                               the Set_Slot_Power_Limit message.
                            */
    UINT32 cspls : 2;

                            /* Bits[27:26], Access Type=RO, default=0x00000000*/

                            /*
                               In combination with the Slot Power Limit Scale
                               value (bits[25:218]), this field specifies the
                               upper limit of the power supplied by slot. The
                               power limit (in Watts) is calculated by
                               multiplying the value in this field by the value
                               in the Slot Power Limit Scale field. This value
                               is set by the Set_Slot_Power_Limit message.
                            */
    UINT32 flr : 1;

                            /* Bits[28:28], Access Type=RO, default=0x00000000*/

                            /*
                               This field when set indicates this function
                               supports optional function Level Reset
                               mechanism. This field applies to Endpoints only.
                               For all other function types this bit must be
                               hardwired to 0b.
                            */
    UINT32 reserved_0 : 3;

                            /* Bits[31:29], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} DEVCAP_IEH_SATELLITE_STRUCT;

/* DEVCTL_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x10804048)                                                      */
/*      SPRB0 (0x10804048)                                                      */
/*      SPRHBM (0x10804048)                                                     */
/*      SPRC0 (0x10804048)                                                      */
/*      SPRMCC (0x10804048)                                                     */
/*      SPRUCC (0x10804048)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Device Control register
*/


#define DEVCTL_IEH_SATELLITE_REG 0x1F010048

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 cere : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set, generation of the ERR_CORR
                               message is enabled.
                            */
    UINT16 nfere : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set, generation of the
                               ERR_NONFATAL message is enabled.
                            */
    UINT16 fere : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               When this bit is set, generation of the
                               ERR_FATAL message is enabled.
                            */
    UINT16 urre : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               This bit controls the enabling of ERR_CORR,
                               ERR_NONFATAL or ERR_FATAL messages on PCI
                               Express for reporting 'Unsupported Request'
                               errors.
                            */
    UINT16 enro : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               When set, the function is permitted to set the
                               relaxed ordering bit in the attribute field of
                               transactions it initiates that do not require
                               strong write ordering. A function is permitted
                               to hardwire this bit to 0b if it never sets the
                               Relaxed ordering attribute in transactions it
                               initiates as a requester.
                            */
    UINT16 mps : 3;

                            /* Bits[7:5], Access Type=RW, default=0x00000000*/

                            /*
                               This field sets maximum TLP payload size for the
                               function. As a receiver, the function must
                               handle TLPs as larger as the set value. As a
                               Transmitter, the function must not generate TLPs
                               exceeding the set value. 000b: 128 bytes maximum
                               payload size 001b: 256 bytes maximum payload
                               size 010b: 512 bytes maximum payload size
                               (Unsupported) 011b: 1024 bytes maximum payload
                               size (Unsupported) 100b: 2048 bytes maximum
                               payload size (Unsupported) 101b: 4096 bytes
                               maximum payload size (Unsupported) Others:
                               Reserved
                            */
    UINT16 etfe : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               When set, this bit enables a function to use an
                               8-bit tag field as a Requester. Functions that
                               do not implement this capability hardwire this
                               bit to 0b.
                            */
    UINT16 pfe : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               When set, this bit enables a function to user
                               unclaimed functions as phantom functions to
                               extend the number of outstanding transaction
                               identifiers. Functions that do not implement
                               this capability hardware this bit to 0b.
                            */
    UINT16 auxpme : 1;

                            /* Bits[10:10], Access Type=RW/P, default=0x00000000*/

                            /* Not Supported */
    UINT16 enosnp : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               If this bit this is set, the function is
                               permitted to set the No Snoop bit in the
                               Requester attributes of transactions it
                               initiates that do not require hardware enforced
                               cache coherency. This bit is permitted to be
                               hardwired to 0b if a function would never set
                               the No Snoop attribute in transactions it
                               initiates.
                            */
    UINT16 mrrs : 3;

                            /* Bits[14:12], Access Type=RW, default=0x00000000*/

                            /*
                               This field sets the maximum Read Requests size
                               for the function as a requester. The Function
                               must not generate read requests with size
                               exceeding the set value. 000b: 128 bytes maximum
                               Read Request size 001b: 256 bytes maximum Read
                               Request size 010b: 512 bytes maximum Read
                               Request size 011b: 1024 bytes maximum Read
                               Request size 100b: 2048 bytes maximum Read
                               Request size 101b: 4096 bytes maximum Read
                               Request size Others: Reserved Functions that do
                               not generate Read Requests larger than 128B and
                               functions that do not generate Read Requests on
                               their own behalf are permitted to implement this
                               field as Read Only (RO) with a value of 000b.
                            */
    UINT16 reserved : 1;

                            /* Bits[15:15], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} DEVCTL_IEH_SATELLITE_STRUCT;

/* DEVSTS_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x1080404a)                                                      */
/*      SPRB0 (0x1080404a)                                                      */
/*      SPRHBM (0x1080404a)                                                     */
/*      SPRC0 (0x1080404a)                                                      */
/*      SPRMCC (0x1080404a)                                                     */
/*      SPRUCC (0x1080404a)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Device Status register
*/


#define DEVSTS_IEH_SATELLITE_REG 0x1F01004A

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 ced : 1;

                            /* Bits[0:0], Access Type=RW/1C/V, default=0x00000000*/

                            /*
                               This bit indicates status of correctable errors
                               detected. Errors are logged in this register
                               regardless of whether error reporting is enabled
                               or not in the Device Control register. For
                               devices supporting Advanced Error Handling,
                               errors are logged in this register regardless of
                               the settings of the correctable error mask
                               register.
                            */
    UINT16 nfed : 1;

                            /* Bits[1:1], Access Type=RW/1C/V, default=0x00000000*/

                            /*
                               This bit indicates status of non-fatal errors
                               detected. Errors are logged in this register
                               regardless of whether error reporting is enabled
                               or not in the Device Control register. For
                               devices supporting Advanced Error Handling,
                               errors are logged in this register regardless of
                               the settings of the correctable error mask
                               register.
                            */
    UINT16 fed : 1;

                            /* Bits[2:2], Access Type=RW/1C/V, default=0x00000000*/

                            /*
                               This bit indicates status of fatal errors
                               detected. Errors are logged in this register
                               regardless of whether error reporting is enabled
                               or not in the Device Control register. For
                               devices supporting Advanced Error Handling,
                               errors are logged in this register regardless of
                               the settings of the correctable error mask
                               register.
                            */
    UINT16 urd : 1;

                            /* Bits[3:3], Access Type=RW/1C/V, default=0x00000000*/

                            /*
                               This bit indicates that the device received an
                               Unsupported Request. Errors are logged in this
                               register regardless of whether error reporting
                               is enabled or not in the Device Control
                               Register.
                            */
    UINT16 apd : 1;

                            /* Bits[4:4], Access Type=RO, default=0x00000000*/

                            /* Auxiliary Power is not supported. */
    UINT16 tp : 1;

                            /* Bits[5:5], Access Type=RO, default=0x00000000*/

                            /*
                               When set, this bit indicates that the function
                               has issued Non-Posted REquests that have not
                               been completed. For Root or Switch port, it
                               applies to Non-Posted Requests the port has
                               issued on its own behalf (Port's Request ID). A
                               function reports this bit cleared only when all
                               outstanding Non-Posted Requests have completed.
                               Functions that do not issue Non-Posted requests
                               on their own behalf hardwire this bit to 0b.
                            */
    UINT16 reserved : 10;

                            /* Bits[15:6], Access Type=RO, default=0x00000000*/

                            /*
                               Reserved Zero: Software must always write 0 to
                               these bits.
                            */

  } Bits;
  UINT16 Data;

} DEVSTS_IEH_SATELLITE_STRUCT;

/* ROOTCTL_IEH_SATELLITE_REG supported on:                                      */
/*      SPRA0 (0x1080405c)                                                      */
/*      SPRB0 (0x1080405c)                                                      */
/*      SPRHBM (0x1080405c)                                                     */
/*      SPRC0 (0x1080405c)                                                      */
/*      SPRMCC (0x1080405c)                                                     */
/*      SPRUCC (0x1080405c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* 1.5.6 Root Control (ROOTCTL)
*/


#define ROOTCTL_IEH_SATELLITE_REG 0x1F01005C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 secee : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               System Error on Correctable Error Enable (SECEE)
                               This field controls generation of system errors
                               in the PCI-Express root Complex Event Collector
                               for correctable errors. 1: indicates that a
                               System Error should be generated if a
                               correctable error (ERR_COR) is reported by any
                               of the devices associated with and including
                               this PCI-Express root complex event collector 0:
                               No System Error should be generated on a
                               correctable error (ERR_COR) reported by any of
                               the devices associated with and including this
                               PCI-Express root complex event collector.
                            */
    UINT16 senfee : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               System Error On Non-fatal Error Enable (SENFEE)
                               This field controls generation of system errors
                               in the PCI-Express root Complex Event Collector
                               for non-fatal errors. 1: indicates that a System
                               Error should be generated if a non-fatal error
                               (ERR_NONFATAL) is reported by any of the devices
                               associated with and including this PCI-Express
                               root complex event collector. 0: No System Error
                               should be generated on a non-fatal error
                               (ERR_NONFATAL) reported by any of the devices
                               associated with and including this PCI-Express
                               root complex event collector.
                            */
    UINT16 sefee : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               System Error On Fatal Error Enable (SEFEE) This
                               field controls generation of system errors in
                               the PCI-Express root Complex Event Collector for
                               fatal errors. 1: indicates that a System Error
                               should be generated if a fatal error (ERR_FATAL)
                               is reported by any of the devices associated
                               with and including this PCI-Express root complex
                               event collector. 0: No System Error should be
                               generated on a fatal error (ERR_FATAL) reported
                               by any of the devices associated with and
                               including this PCI-Express root complex event
                               collector.
                            */
    UINT16 pmeie : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               PME Interrupt Enable (PMEIE) This field controls
                               the generation of interrupts for PME messages.
                               1: Enables interrupt generation upon receipt of
                               a PME message as reflected in the PME Status bit
                               defined in the ROOTSTS register. A PME interrupt
                               is generated if the PMESTATUS register bit is
                               set when this bit is set from a cleared state.
                               0: Disables interrupt generation for PME
                               messages.
                            */
    UINT16 crssve : 1;

                            /* Bits[4:4], Access Type=RO, default=0x00000000*/

                            /*
                               CRS Software Visibility Enable (CRSSVE) This
                               bit, when set, enables the Root Port to return
                               Configuration Retry Status (CRS) Completion
                               status to software. 1: Enable software to
                               received a CRS status. This allows software to
                               make the decision to re-issue the configuration
                               request or move on and re-issue the request at a
                               later time. 0: Disable software from receiving a
                               CRS response. The PCI-E will wait and re-issue
                               the configuration request until it receives a
                               response other than CRS without notifying
                               software.
                            */
    UINT16 reserved : 11;

                            /* Bits[15:5], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} ROOTCTL_IEH_SATELLITE_STRUCT;

/* ROOTCAP_IEH_SATELLITE_REG supported on:                                      */
/*      SPRA0 (0x1080405e)                                                      */
/*      SPRB0 (0x1080405e)                                                      */
/*      SPRHBM (0x1080405e)                                                     */
/*      SPRC0 (0x1080405e)                                                      */
/*      SPRMCC (0x1080405e)                                                     */
/*      SPRUCC (0x1080405e)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Root Control (ROOTCTL)
*/


#define ROOTCAP_IEH_SATELLITE_REG 0x1F01005E

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 crssv : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /*
                               CRS Software Visibility (CRSSV) This bit, when
                               set, indicates that the Root Port is capable of
                               returning Configuration Retry Status (CRS) on
                               completions to software.
                            */
    UINT16 reserved : 15;

                            /* Bits[15:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} ROOTCAP_IEH_SATELLITE_STRUCT;

/* ROOTSTS_IEH_SATELLITE_REG supported on:                                      */
/*      SPRA0 (0x20804060)                                                      */
/*      SPRB0 (0x20804060)                                                      */
/*      SPRHBM (0x20804060)                                                     */
/*      SPRC0 (0x20804060)                                                      */
/*      SPRMCC (0x20804060)                                                     */
/*      SPRUCC (0x20804060)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Root Status (ROOTSTS)
*/


#define ROOTSTS_IEH_SATELLITE_REG 0x1F020060

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 pmerid : 16;

                            /* Bits[15:0], Access Type=RO, default=0x00000000*/

                            /*
                               PME Requestor ID (PMERID) This field indicates
                               the PCI requester ID of the last PME requestor.
                            */
    UINT32 pmests : 1;

                            /* Bits[16:16], Access Type=RO, default=0x00000000*/

                            /*
                               PME Status (PMESTS) This field indicates status
                               of a PME that is underway in the PCI-Express
                               port. 1: PME was asserted by a requester as
                               indicated by the PMEREQID field This bit is
                               cleared by software by writing a '1'. Subsequent
                               PMEs are kept pending until the PME Status is
                               cleared.
                            */
    UINT32 pmepend : 1;

                            /* Bits[17:17], Access Type=RO, default=0x00000000*/

                            /*
                               PME Pending (PMEPEND) This field indicates that
                               another PME is pending when the PME Status bit
                               is set. When the PME Status bit is cleared by
                               software, the pending PME is delivered by
                               hardware by setting the PME Status bit again and
                               updating the Requestor ID appropriately. The PME
                               pending bit is cleared by hardware if no more
                               PMEs are pending. NOTE: The root port can handle
                               two outstanding PM_PME messages in its internal
                               queues of the Power Management controller per
                               port. If the downstream device issues more than
                               2 PM_PME messages successively, it will be
                               dropped.
                            */
    UINT32 reserved : 14;

                            /* Bits[31:18], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ROOTSTS_IEH_SATELLITE_STRUCT;

/* PMCAP_IEH_SATELLITE_REG supported on:                                        */
/*      SPRA0 (0x20804080)                                                      */
/*      SPRB0 (0x20804080)                                                      */
/*      SPRHBM (0x20804080)                                                     */
/*      SPRC0 (0x20804080)                                                      */
/*      SPRMCC (0x20804080)                                                     */
/*      SPRUCC (0x20804080)                                                     */
/* Register default value on SPRA0: 0x00039001                                  */
/* Register default value on SPRB0: 0x00039001                                  */
/* Register default value on SPRHBM: 0x00039001                                 */
/* Register default value on SPRC0: 0x00039001                                  */
/* Register default value on SPRMCC: 0x00039001                                 */
/* Register default value on SPRUCC: 0x00039001                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Power Management Capabilities Register (PMCAP)
*/


#define PMCAP_IEH_SATELLITE_REG 0x1F020080

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 capid : 8;

                            /* Bits[7:0], Access Type=RO, default=0x00000001*/

                            /*
                               CAPID (CAPID) Identifies the function as PCI
                               Power Management capable.
                            */
    UINT32 np : 8;

                            /* Bits[15:8], Access Type=RW/V, default=0x00000090*/

                            /*
                               Next Capability Pointer (NP) Contains the offset
                               of the next item in the capabilities list
                               (RCEC_MSICAPLST).
                            */
    UINT32 ver : 3;

                            /* Bits[18:16], Access Type=RO, default=0x00000003*/

                            /*
                               Version (VER) PM implementation is compliant
                               with PCI Bus Power Management Interface
                               Specification, Revision 11 1.2.
                            */
    UINT32 pmeclk : 1;

                            /* Bits[19:19], Access Type=RO, default=0x00000000*/

                            /*
                               PME Clock (PMECLK) Does not apply to PCI
                               Express. Hard-wired to 0.
                            */
    UINT32 irrz : 1;

                            /* Bits[20:20], Access Type=RO, default=0x00000000*/

                            /* Immediate_Readiness_On_Return_To_Zero (IRRZ) */
    UINT32 dsi : 1;

                            /* Bits[21:21], Access Type=RO, default=0x00000000*/

                            /*
                               Device Specific Initialization (DSI) Device-
                               specific initialization is not required when
                               transitioning to D0 from D3hot state. This bit
                               is zero.
                            */
    UINT32 ac : 3;

                            /* Bits[24:22], Access Type=RO, default=0x00000000*/

                            /*
                               Aux_Current (AC) Auxiliary power is not
                               supported.
                            */
    UINT32 d1s : 1;

                            /* Bits[25:25], Access Type=RO, default=0x00000000*/

                            /* D1 Support (D1S) Not supported */
    UINT32 d2s : 1;

                            /* Bits[26:26], Access Type=RO, default=0x00000000*/

                            /* D2 Support (D2S) Not supported */
    UINT32 pmesup : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /*
                               PME Support (PMESUP) PME assertion is supported
                               when in D3hot. PME assertion from D3cold is not
                               supported.
                            */

  } Bits;
  UINT32 Data;

} PMCAP_IEH_SATELLITE_STRUCT;

/* PMCSR_IEH_SATELLITE_REG supported on:                                        */
/*      SPRA0 (0x20804084)                                                      */
/*      SPRB0 (0x20804084)                                                      */
/*      SPRHBM (0x20804084)                                                     */
/*      SPRC0 (0x20804084)                                                      */
/*      SPRMCC (0x20804084)                                                     */
/*      SPRUCC (0x20804084)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* RCEC Power Management Control / Status (PMCSR)
*/


#define PMCSR_IEH_SATELLITE_REG 0x1F020084

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ps : 2;

                            /* Bits[1:0], Access Type=RW, default=0x00000000*/

                            /*
                               PowerState (PS) This field is used both to
                               determine the current power state of a function
                               and to set the function into a new power state.
                               The definition of the supported values is given
                               below: 0h - D0 3h - D3hot If software attempts
                               to write an unsupported, optional state to this
                               field, the write operation must complete
                               normally, however, the data is discarded and no
                               state change occurs. (Restricted Value: 1h, 2h
                               Result: no change)/DescriptionconditionInternal
                               Only/condition
                            */
    UINT32 reserved : 1;

                            /* Bits[2:2], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 no_soft_reset : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000000*/

                            /* No_Soft_Reset */
    UINT32 reserved_1 : 4;

                            /* Bits[7:4], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pmeen : 1;

                            /* Bits[8:8], Access Type=RO, default=0x00000000*/

                            /*
                               PME_En (PMEEN) Gates assertion of the PME
                               message.
                            */
    UINT32 dselect : 4;

                            /* Bits[12:9], Access Type=RO, default=0x00000000*/

                            /* Data Select (DSelect) Not supported */
    UINT32 dscale : 2;

                            /* Bits[14:13], Access Type=RO, default=0x00000000*/

                            /* Data Scale (DScale) Not supported */
    UINT32 pmests : 1;

                            /* Bits[15:15], Access Type=RO, default=0x00000000*/

                            /* PME_Status (PMESTS) */
    UINT32 reserved_2 : 6;

                            /* Bits[21:16], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 undefined : 10;

                            /* Bits[31:22], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} PMCSR_IEH_SATELLITE_STRUCT;

/* MSICAPLST_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x10804090)                                                      */
/*      SPRB0 (0x10804090)                                                      */
/*      SPRHBM (0x10804090)                                                     */
/*      SPRC0 (0x10804090)                                                      */
/*      SPRMCC (0x10804090)                                                     */
/*      SPRUCC (0x10804090)                                                     */
/* Register default value on SPRA0: 0x00000005                                  */
/* Register default value on SPRB0: 0x00000005                                  */
/* Register default value on SPRHBM: 0x00000005                                 */
/* Register default value on SPRC0: 0x00000005                                  */
/* Register default value on SPRMCC: 0x00000005                                 */
/* Register default value on SPRUCC: 0x00000005                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* MSI Capability Header (MSICAPLST)
*/


#define MSICAPLST_IEH_SATELLITE_REG 0x1F010090

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 capid : 8;

                            /* Bits[7:0], Access Type=RO, default=0x00000005*/

                            /*
                               Capability ID (CAPID) Identifies the function as
                               MSI capable.
                            */
    UINT16 np : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /*
                               Next Capability Pointer (NP) Contains the offset
                               of the next item in the capabilities list. A
                               null value is used to indicate that this is the
                               last capability.
                            */

  } Bits;
  UINT16 Data;

} MSICAPLST_IEH_SATELLITE_STRUCT;

/* MSICTL_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x10804092)                                                      */
/*      SPRB0 (0x10804092)                                                      */
/*      SPRHBM (0x10804092)                                                     */
/*      SPRC0 (0x10804092)                                                      */
/*      SPRMCC (0x10804092)                                                     */
/*      SPRUCC (0x10804092)                                                     */
/* Register default value on SPRA0: 0x00000100                                  */
/* Register default value on SPRB0: 0x00000100                                  */
/* Register default value on SPRHBM: 0x00000100                                 */
/* Register default value on SPRC0: 0x00000100                                  */
/* Register default value on SPRMCC: 0x00000100                                 */
/* Register default value on SPRUCC: 0x00000100                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* MSI Capability Header (MSICAPLST)
*/


#define MSICTL_IEH_SATELLITE_REG 0x1F010092

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 mseie : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               MSI Enable (MSIE) When set, MSI is enabled and
                               traditional interrupt pins are not used to
                               generate interrupts.
                            */
    UINT16 mmc : 3;

                            /* Bits[3:1], Access Type=RO, default=0x00000000*/

                            /*
                               Multiple Message Capable (MMC) Only one message
                               is supported.
                            */
    UINT16 mmen : 3;

                            /* Bits[6:4], Access Type=RW, default=0x00000000*/

                            /*
                               Multiple Message Enable (MMEN) Only one message
                               is supported. These bits are R/W for software
                               compatibility.
                            */
    UINT16 ad64c : 1;

                            /* Bits[7:7], Access Type=RO, default=0x00000000*/

                            /*
                               64 bit address capable (AD64C) When set, this
                               bit indicates that the function is capable of
                               generating a 64-bit message address.
                            */
    UINT16 pvm : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000001*/

                            /*
                               Per Vector Masking Capable (PVM) This bit
                               indicates that this device supports MSI per-
                               vector masking.
                            */
    UINT16 emdc : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000000*/

                            /* Extended Message Data Capable */
    UINT16 emdc_1 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000000*/

                            /* Extended Message Data Capable */
    UINT16 reserved : 5;

                            /* Bits[15:11], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} MSICTL_IEH_SATELLITE_STRUCT;

/* MSIADDR_IEH_SATELLITE_REG supported on:                                      */
/*      SPRA0 (0x20804094)                                                      */
/*      SPRB0 (0x20804094)                                                      */
/*      SPRHBM (0x20804094)                                                     */
/*      SPRC0 (0x20804094)                                                      */
/*      SPRMCC (0x20804094)                                                     */
/*      SPRUCC (0x20804094)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* MSI Capability Header (MSICAPLST)
*/


#define MSIADDR_IEH_SATELLITE_REG 0x1F020094

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 2;

                            /* Bits[1:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 address : 30;

                            /* Bits[31:2], Access Type=RW, default=0x00000000*/

                            /*
                               Address (Address) Message address specified by
                               the system, always DWORD aligned
                            */

  } Bits;
  UINT32 Data;

} MSIADDR_IEH_SATELLITE_STRUCT;

/* MSIDATA_IEH_SATELLITE_REG supported on:                                      */
/*      SPRA0 (0x10804098)                                                      */
/*      SPRB0 (0x10804098)                                                      */
/*      SPRHBM (0x10804098)                                                     */
/*      SPRC0 (0x10804098)                                                      */
/*      SPRMCC (0x10804098)                                                     */
/*      SPRUCC (0x10804098)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* MSI Message Data (MSIDATA)
*/


#define MSIDATA_IEH_SATELLITE_REG 0x1F010098

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 data : 16;

                            /* Bits[15:0], Access Type=RW, default=0x00000000*/

                            /* Message Data (Data) */

  } Bits;
  UINT16 Data;

} MSIDATA_IEH_SATELLITE_STRUCT;

/* MSIMSK_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x2080409c)                                                      */
/*      SPRB0 (0x2080409c)                                                      */
/*      SPRHBM (0x2080409c)                                                     */
/*      SPRC0 (0x2080409c)                                                      */
/*      SPRMCC (0x2080409c)                                                     */
/*      SPRUCC (0x2080409c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* MSI Mask Bit (MSIMSK)
*/


#define MSIMSK_IEH_SATELLITE_REG 0x1F02009C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 mskb : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               This register indicates the programmable BITMAP
                               field of Satellite IEH. The BitMap field is set
                               to non-zero value by the BIOS
                            */
    UINT32 reserved : 31;

                            /* Bits[31:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} MSIMSK_IEH_SATELLITE_STRUCT;

/* MSIPEND_IEH_SATELLITE_REG supported on:                                      */
/*      SPRA0 (0x208040a0)                                                      */
/*      SPRB0 (0x208040a0)                                                      */
/*      SPRHBM (0x208040a0)                                                     */
/*      SPRC0 (0x208040a0)                                                      */
/*      SPRMCC (0x208040a0)                                                     */
/*      SPRUCC (0x208040a0)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* MSI Pending Bit (MSIPENDING)
*/


#define MSIPEND_IEH_SATELLITE_REG 0x1F0200A0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 pb : 1;

                            /* Bits[0:0], Access Type=RO/V, default=0x00000000*/

                            /*
                               Pending Bit (PB) For each Pending bit that is
                               set, the device has a pending associated
                               message. Corresponding bits are pending if set
                               to '1'
                            */
    UINT32 reserved : 31;

                            /* Bits[31:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} MSIPEND_IEH_SATELLITE_STRUCT;

/* IEHCAP_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x208040d0)                                                      */
/*      SPRB0 (0x208040d0)                                                      */
/*      SPRHBM (0x208040d0)                                                     */
/*      SPRC0 (0x208040d0)                                                      */
/*      SPRMCC (0x208040d0)                                                     */
/*      SPRUCC (0x208040d0)                                                     */
/* Register default value on SPRA0: 0x00000040                                  */
/* Register default value on SPRB0: 0x00000040                                  */
/* Register default value on SPRHBM: 0x00000040                                 */
/* Register default value on SPRC0: 0x00000040                                  */
/* Register default value on SPRMCC: 0x00000040                                 */
/* Register default value on SPRUCC: 0x00000040                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This register indicates the type of the IEH (Global IEH, Satellite IEH directly connected to Global IEH or South Satellite IEH not directly connected to Global IEH).
*/


#define IEHCAP_IEH_SATELLITE_REG 0x1F0200D0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ieh_type : 4;

                            /* Bits[3:0], Access Type=RO/V, default=0x00000000*/

                            /*
                               Type of the IEH 10: South Satellite IEH not
                               directly connected to Global IEH 01: Satellite
                               IEH directly connected to Global IEH 00: Global
                               IEH
                            */
    UINT32 ieh_ver : 4;

                            /* Bits[7:4], Access Type=RO/V, default=0x00000004*/

                            /*
                               Version of the IEH 0: Wave1/2 IEH (legacy IEH ?
                               used in ICX-SP, ICX-D, SNR) 1: Emmitsburg PCH
                               IEH 2: Tigerlake PCH IEH 3: IEH with RCEC
                               Enabled 4: IEH with RCEC Disabled Others:
                               Reserved
                            */
    UINT32 ieh_busnum : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /* Bus Number of the IEH. BIOS programs this field. */
    UINT32 lcl_err_src : 8;

                            /* Bits[23:16], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               Indicates the number of IPs reporting to the
                               Local Error Logic of the IEH.
                            */
    UINT32 glb_err_src : 8;

                            /* Bits[31:24], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               This field is the same as DEVCOUNT register in
                               wave1/2. We have removed DEVCOUNT register in
                               Wave3. DEVCOUNT for Global IEH= Number of CPU
                               Satellite IEH + Number of agents logged in the
                               global error registers + 1 (for internal
                               errors). DEVCOUNT for Satellite IEH = Number of
                               agents logged in the global error registers + 1
                               (for internal errors). Note: There is no strap
                               register dedicated for this, since this field
                               takes care of the device count.
                            */

  } Bits;
  UINT32 Data;

} IEHCAP_IEH_SATELLITE_STRUCT;

/* MISCCTRL1_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x208040e4)                                                      */
/*      SPRB0 (0x208040e4)                                                      */
/*      SPRHBM (0x208040e4)                                                     */
/*      SPRC0 (0x208040e4)                                                      */
/*      SPRMCC (0x208040e4)                                                     */
/*      SPRUCC (0x208040e4)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* Misc Control 1 Register (MISCCTRL1)
*/


#define MISCCTRL1_IEH_SATELLITE_REG 0x1F0200E4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 disable_register_for_strap : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Disable_register_for_strap: If set, value of the
                               IEH straps will be consumed directly in IEH
                               without going through the register
                            */
    UINT32 reserved1 : 30;

                            /* Bits[31:2], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} MISCCTRL1_IEH_SATELLITE_STRUCT;

/* AERCAPHDR_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804100)                                                      */
/*      SPRB0 (0x20804100)                                                      */
/*      SPRHBM (0x20804100)                                                     */
/*      SPRC0 (0x20804100)                                                      */
/*      SPRMCC (0x20804100)                                                     */
/*      SPRUCC (0x20804100)                                                     */
/* Register default value on SPRA0: 0x16010001                                  */
/* Register default value on SPRB0: 0x16010001                                  */
/* Register default value on SPRHBM: 0x16010001                                 */
/* Register default value on SPRC0: 0x16010001                                  */
/* Register default value on SPRMCC: 0x16010001                                 */
/* Register default value on SPRUCC: 0x16010001                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* Advanced Error Reporting Extended Capability Header (AERCAPHDR)
*/


#define AERCAPHDR_IEH_SATELLITE_REG 0x1F020100

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 excapid : 16;

                            /* Bits[15:0], Access Type=RO, default=0x00000001*/

                            /*
                               PCI Express Extended Capability ID (EXCAPID)
                               Identifies the function as Advanced Error
                               Reporting capable.
                            */
    UINT32 cv : 4;

                            /* Bits[19:16], Access Type=RO, default=0x00000001*/

                            /*
                               Capability Version (CV) Indicates the version of
                               the Capability structure present.
                            */
    UINT32 nco : 12;

                            /* Bits[31:20], Access Type=RW, default=0x00000160*/

                            /*
                               Next Capability Offset (NCO) Contains the offset
                               of the next structure in the Extended
                               Capabilities list. (RCECEPACAPHDR)
                            */

  } Bits;
  UINT32 Data;

} AERCAPHDR_IEH_SATELLITE_STRUCT;

/* ERRUNCSTS_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804104)                                                      */
/*      SPRB0 (0x20804104)                                                      */
/*      SPRHBM (0x20804104)                                                     */
/*      SPRC0 (0x20804104)                                                      */
/*      SPRMCC (0x20804104)                                                     */
/*      SPRUCC (0x20804104)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define ERRUNCSTS_IEH_SATELLITE_REG 0x1F020104

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRUNCSTS_IEH_SATELLITE_STRUCT;

/* ERRUNCMSK_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804108)                                                      */
/*      SPRB0 (0x20804108)                                                      */
/*      SPRHBM (0x20804108)                                                     */
/*      SPRC0 (0x20804108)                                                      */
/*      SPRMCC (0x20804108)                                                     */
/*      SPRUCC (0x20804108)                                                     */
/* Register default value on SPRA0: 0x04400000                                  */
/* Register default value on SPRB0: 0x04400000                                  */
/* Register default value on SPRHBM: 0x04400000                                 */
/* Register default value on SPRC0: 0x04400000                                  */
/* Register default value on SPRMCC: 0x04400000                                 */
/* Register default value on SPRUCC: 0x04400000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define ERRUNCMSK_IEH_SATELLITE_REG 0x1F020108

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000001*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000001*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRUNCMSK_IEH_SATELLITE_STRUCT;

/* ERRUNCSEV_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x2080410c)                                                      */
/*      SPRB0 (0x2080410c)                                                      */
/*      SPRHBM (0x2080410c)                                                     */
/*      SPRC0 (0x2080410c)                                                      */
/*      SPRMCC (0x2080410c)                                                     */
/*      SPRUCC (0x2080410c)                                                     */
/* Register default value on SPRA0: 0x00462030                                  */
/* Register default value on SPRB0: 0x00462030                                  */
/* Register default value on SPRHBM: 0x00462030                                 */
/* Register default value on SPRC0: 0x00462030                                  */
/* Register default value on SPRMCC: 0x00462030                                 */
/* Register default value on SPRUCC: 0x00462030                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Severity (ERRUNCSEV):This register controls whether an individual uncorrectable error is reported as a fatal error. An uncorrectable error is reported as fatal when the corresponding error bit in this register is set. When the bit is cleared, the corresponding error is considered non-fatal.
*/


#define ERRUNCSEV_IEH_SATELLITE_REG 0x1F02010C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000001*/

                            /* Data Link Protocol Error Severity (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000001*/

                            /* Surprise Down Error Severity (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Severity (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Flow Control Protocol Error Severity (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Severity (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Severity (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Severity (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000001*/

                            /* Receiver Overflow Severity (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000001*/

                            /* Malformed TLP Severity (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Severity (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Severity (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Severity (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000001*/

                            /* Uncorrectable Internal Error Severity (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Severity (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Severity (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Severity (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Severity (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRUNCSEV_IEH_SATELLITE_STRUCT;

/* ERRCORSTS_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804110)                                                      */
/*      SPRB0 (0x20804110)                                                      */
/*      SPRHBM (0x20804110)                                                     */
/*      SPRC0 (0x20804110)                                                      */
/*      SPRMCC (0x20804110)                                                     */
/*      SPRUCC (0x20804110)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define ERRCORSTS_IEH_SATELLITE_REG 0x1F020110

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRCORSTS_IEH_SATELLITE_STRUCT;

/* ERRCORMSK_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804114)                                                      */
/*      SPRB0 (0x20804114)                                                      */
/*      SPRHBM (0x20804114)                                                     */
/*      SPRC0 (0x20804114)                                                      */
/*      SPRMCC (0x20804114)                                                     */
/*      SPRUCC (0x20804114)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define ERRCORMSK_IEH_SATELLITE_REG 0x1F020114

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRCORMSK_IEH_SATELLITE_STRUCT;

/* AERCAPCTL_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804118)                                                      */
/*      SPRB0 (0x20804118)                                                      */
/*      SPRHBM (0x20804118)                                                     */
/*      SPRC0 (0x20804118)                                                      */
/*      SPRMCC (0x20804118)                                                     */
/*      SPRUCC (0x20804118)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* 1.8.7 Advanced Error Capabilities and Control (AERCAPCTL) This register gives the status and control for ECRC checks and also the pointer to the first uncorrectable error that happened.
*/


#define AERCAPCTL_IEH_SATELLITE_REG 0x1F020118

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 fep : 5;

                            /* Bits[4:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               First Error Pointer (FEP) This field identifies
                               the bit position of the first error reported in
                               the Uncorrectable Error Status Register (xref).
                               This register re-arms itself (which does not
                               change its current value) as soon as the error
                               status bit indicated by the pointer is cleared
                               by the software by writing a 1 to that status
                               bit.
                            */
    UINT32 egc : 1;

                            /* Bits[5:5], Access Type=RO, default=0x00000000*/

                            /*
                               ECRC Generation Capable (EGC) Not supported
                               hard-wired to 0
                            */
    UINT32 ege : 1;

                            /* Bits[6:6], Access Type=RO, default=0x00000000*/

                            /*
                               ECRC Generation Enable (EGE) Not supported hard-
                               wired to 0
                            */
    UINT32 ecc : 1;

                            /* Bits[7:7], Access Type=RO, default=0x00000000*/

                            /*
                               ECRC Check Capable (ECC) Not supported hard-
                               wired to 0
                            */
    UINT32 ece : 1;

                            /* Bits[8:8], Access Type=RO, default=0x00000000*/

                            /*
                               ECRC Check Enable (ECE) Not supported hard-wired
                               to 0
                            */
    UINT32 mhrc : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000000*/

                            /*
                               Multiple Header Recording Capable (MHRC) Not
                               supported hard-wired to 0
                            */
    UINT32 mhre : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000000*/

                            /*
                               Multiple Header Recording Enable (MHRE) Not
                               supported hard-wired to 0
                            */
    UINT32 tplp : 1;

                            /* Bits[11:11], Access Type=RO, default=0x00000000*/

                            /*
                               TLP Prefix Log Present (TPLP) Not supported
                               hard-wired to 0
                            */
    UINT32 ctphlc : 1;

                            /* Bits[12:12], Access Type=RO, default=0x00000000*/

                            /*
                               Completion Timeout Prefix/Header Log Capable
                               (CTPHLC) Not supported hard-wired to 0
                            */
    UINT32 reserved : 19;

                            /* Bits[31:13], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} AERCAPCTL_IEH_SATELLITE_STRUCT;

/* AERHDRLOG1_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x2080411c)                                                      */
/*      SPRB0 (0x2080411c)                                                      */
/*      SPRHBM (0x2080411c)                                                     */
/*      SPRC0 (0x2080411c)                                                      */
/*      SPRMCC (0x2080411c)                                                     */
/*      SPRUCC (0x2080411c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Header Log (AERHDRLOG1)
*/


#define AERHDRLOG1_IEH_SATELLITE_REG 0x1F02011C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} AERHDRLOG1_IEH_SATELLITE_STRUCT;

/* AERHDRLOG2_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804120)                                                      */
/*      SPRB0 (0x20804120)                                                      */
/*      SPRHBM (0x20804120)                                                     */
/*      SPRC0 (0x20804120)                                                      */
/*      SPRMCC (0x20804120)                                                     */
/*      SPRUCC (0x20804120)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Header Log (AERHDRLOG2)
*/


#define AERHDRLOG2_IEH_SATELLITE_REG 0x1F020120

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} AERHDRLOG2_IEH_SATELLITE_STRUCT;

/* AERHDRLOG3_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804124)                                                      */
/*      SPRB0 (0x20804124)                                                      */
/*      SPRHBM (0x20804124)                                                     */
/*      SPRC0 (0x20804124)                                                      */
/*      SPRMCC (0x20804124)                                                     */
/*      SPRUCC (0x20804124)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Header Log (AERHDRLOG3)
*/


#define AERHDRLOG3_IEH_SATELLITE_REG 0x1F020124

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} AERHDRLOG3_IEH_SATELLITE_STRUCT;

/* AERHDRLOG4_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804128)                                                      */
/*      SPRB0 (0x20804128)                                                      */
/*      SPRHBM (0x20804128)                                                     */
/*      SPRC0 (0x20804128)                                                      */
/*      SPRMCC (0x20804128)                                                     */
/*      SPRUCC (0x20804128)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Header Log (AERHDRLOG4)
*/


#define AERHDRLOG4_IEH_SATELLITE_REG 0x1F020128

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} AERHDRLOG4_IEH_SATELLITE_STRUCT;

/* ROOTERRCMD_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x2080412c)                                                      */
/*      SPRB0 (0x2080412c)                                                      */
/*      SPRHBM (0x2080412c)                                                     */
/*      SPRC0 (0x2080412c)                                                      */
/*      SPRMCC (0x2080412c)                                                     */
/*      SPRUCC (0x2080412c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Root Error Command (ROOTERRCMD)
*/


#define ROOTERRCMD_IEH_SATELLITE_REG 0x1F02012C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cere : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Correctable Error Reporting Enable (CERE) When
                               set, this bit enables the generation of an
                               interrupt when a Correctable error is reported
                               by any of the functions in the hierarchy
                               associated with this Root Port.
                            */
    UINT32 nfere : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Non-Fatal Error Reporting Enable (NFERE) When
                               set, this bit enables the generation of an
                               interrupt when a Non-Fatal error is reported by
                               any of the functions in the hierarchy associated
                               with this Root Port.
                            */
    UINT32 fere : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Fatal Error Reporting Enable (FERE) When set,
                               this bit enables the generation of an interrupt
                               when a Fatal error is reported by any of the
                               functions in the hierarchy associated with this
                               Root Port.
                            */
    UINT32 reserved : 29;

                            /* Bits[31:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ROOTERRCMD_IEH_SATELLITE_STRUCT;

/* ROOTERRSTS_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804130)                                                      */
/*      SPRB0 (0x20804130)                                                      */
/*      SPRHBM (0x20804130)                                                     */
/*      SPRC0 (0x20804130)                                                      */
/*      SPRMCC (0x20804130)                                                     */
/*      SPRUCC (0x20804130)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Root Error Status (ROOTERRSTS)
*/


#define ROOTERRSTS_IEH_SATELLITE_REG 0x1F020130

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cer : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               ERR_COR Received (CER) Set when a Correctable
                               error Message is received and this bit is not
                               already Set.
                            */
    UINT32 mcer : 1;

                            /* Bits[1:1], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               Multiple ERR_COR Received (MCER) Set when a
                               Correctable error Message is received and
                               ERR_COR Received is already Set.
                            */
    UINT32 efr : 1;

                            /* Bits[2:2], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               ERR_FATAL/NONFATAL Received (EFR) Set when a
                               Fatal or a Non-fatal error Message is received
                               and this bit is not already Set.
                            */
    UINT32 mefr : 1;

                            /* Bits[3:3], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               Multiple ERR_FATAL/NONFATAL Received (MEFR) Set
                               when either a Fatal or a Non-fatal error is
                               received and ERR_FATAL/NONFATAL Received is
                               already Set.
                            */
    UINT32 fuf : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               First Uncorrectable Fatal (FUF) Set when the
                               first Uncorrectable error Message or PCI_error
                               Message received is for a Fatal error.
                            */
    UINT32 nfemr : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               Non-Fatal Error Messages Received (NFEMR) Set
                               when one or more Non-Fatal Uncorrectable error
                               Messages have been received.
                            */
    UINT32 femr : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               Fatal Error Messages Received (FEMR) Set when
                               one or more Fatal Uncorrectable error Messages
                               have been received.
                            */
    UINT32 reserved_copy : 20;

                            /* Bits[26:7], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 aemn : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /*
                               Advanced Error Interrupt Message Number (AEMN):
                               This register indicates which MSI/MSI-X vector
                               is used for the interrupt message generated in
                               association with any of the status bits of this
                               Capability. For MSI, the value in this register
                               indicates the offset between the base Message
                               Data and the interrupt message that is
                               generated. Hardware is required to update this
                               field so that it is correct if the number of MSI
                               Messages assigned to the Function changes when
                               software writes to the Multiple Message Enable
                               field in the MSI Message Control register. For
                               MSI-X, the value in this register indicates
                               which MSI-X Table entry is used to generate the
                               interrupt message. The entry must be one of the
                               first 32 entries even if the Function implements
                               more than 32 entries. For a given MSI-X
                               implementation, the entry must remain constant.
                               If both MSI and MSI-X are implemented, they are
                               permitted to use different vectors, though
                               software is permitted to enable only one
                               mechanism at a time. If MSI-X is enabled, the
                               value in this register must indicate the vector
                               for MSI-X. If MSI is enabled or neither is
                               enabled, the value in this register must
                               indicate the vector for MSI. If software enables
                               both MSI and MSI-X at the same time, the value
                               in this register is undefined.
                            */

  } Bits;
  UINT32 Data;

} ROOTERRSTS_IEH_SATELLITE_STRUCT;

/* ERRSRCID_IEH_SATELLITE_REG supported on:                                     */
/*      SPRA0 (0x20804134)                                                      */
/*      SPRB0 (0x20804134)                                                      */
/*      SPRHBM (0x20804134)                                                     */
/*      SPRC0 (0x20804134)                                                      */
/*      SPRMCC (0x20804134)                                                     */
/*      SPRUCC (0x20804134)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Error Source Identification (ERRSRCID)
*/


#define ERRSRCID_IEH_SATELLITE_REG 0x1F020134

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ecsid : 16;

                            /* Bits[15:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               ERR_COR Source Identification (ECSID) Requester
                               ID of the source when a correctable error is
                               received.
                            */
    UINT32 efsid : 16;

                            /* Bits[31:16], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               ERR_COR Source Identification (ECSID) Requester
                               ID of the source when a correctable error is
                               received.
                            */

  } Bits;
  UINT32 Data;

} ERRSRCID_IEH_SATELLITE_STRUCT;

/* TLPPREFIXLOG1_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804138)                                                      */
/*      SPRB0 (0x20804138)                                                      */
/*      SPRHBM (0x20804138)                                                     */
/*      SPRC0 (0x20804138)                                                      */
/*      SPRMCC (0x20804138)                                                     */
/*      SPRUCC (0x20804138)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* TLP Prefix Log Register (TLPPREFIXLOG1): This register logs the 4 Dwords of the TLP Prefix for PCI Express errors.
*/


#define TLPPREFIXLOG1_IEH_SATELLITE_REG 0x1F020138

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlpprefixlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} TLPPREFIXLOG1_IEH_SATELLITE_STRUCT;


/* TLPPREFIXLOG3_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804140)                                                      */
/*      SPRB0 (0x20804140)                                                      */
/*      SPRHBM (0x20804140)                                                     */
/*      SPRC0 (0x20804140)                                                      */
/*      SPRMCC (0x20804140)                                                     */
/*      SPRUCC (0x20804140)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* TLP Prefix Log Register (TLPPREFIXLOG3): This register logs the 4 Dwords of the TLP Prefix for PCI Express errors.
*/


#define TLPPREFIXLOG3_IEH_SATELLITE_REG 0x1F020140

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlpprefixlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} TLPPREFIXLOG3_IEH_SATELLITE_STRUCT;

/* TLPPREFIXLOG4_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804144)                                                      */
/*      SPRB0 (0x20804144)                                                      */
/*      SPRHBM (0x20804144)                                                     */
/*      SPRC0 (0x20804144)                                                      */
/*      SPRMCC (0x20804144)                                                     */
/*      SPRUCC (0x20804144)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* TLP Prefix Log Register (TLPPREFIXLOG4): This register logs the 4 Dwords of the TLP Prefix for PCI Express errors.
*/


#define TLPPREFIXLOG4_IEH_SATELLITE_REG 0x1F020144

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlpprefixlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               TLPHDRLOG (TLPHDRLOG) As soon as an error is
                               logged in this register, it remains locked for
                               further error-logging until the software clears
                               the status bit that caused the header log (in
                               other words, until the error pointer is re-armed
                               for logging again).
                            */

  } Bits;
  UINT32 Data;

} TLPPREFIXLOG4_IEH_SATELLITE_STRUCT;

/* RCECEPACAPHDR_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804160)                                                      */
/*      SPRB0 (0x20804160)                                                      */
/*      SPRHBM (0x20804160)                                                     */
/*      SPRC0 (0x20804160)                                                      */
/*      SPRMCC (0x20804160)                                                     */
/*      SPRUCC (0x20804160)                                                     */
/* Register default value on SPRA0: 0x00020007                                  */
/* Register default value on SPRB0: 0x00020007                                  */
/* Register default value on SPRHBM: 0x00020007                                 */
/* Register default value on SPRC0: 0x00020007                                  */
/* Register default value on SPRMCC: 0x00020007                                 */
/* Register default value on SPRUCC: 0x00020007                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* RCEC Endpoint Association Extended Capability Header (RCECEPACAPHDR)
*/


#define RCECEPACAPHDR_IEH_SATELLITE_REG 0x1F020160

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ecid : 16;

                            /* Bits[15:0], Access Type=RO, default=0x00000007*/

                            /*
                               Extended Capability ID (ECID) Identifies the
                               function supports Root Complex Event Collector
                               Endpoint Association capability.
                            */
    UINT32 cv : 4;

                            /* Bits[19:16], Access Type=RO, default=0x00000002*/

                            /*
                               Capability Version (CV) Indicates the version of
                               the Capability structure present.
                            */
    UINT32 nco : 12;

                            /* Bits[31:20], Access Type=RO, default=0x00000000*/

                            /*
                               Next Capability Offset (NCO) This field contains
                               000h indicating the end of the extended
                               capability list.
                            */

  } Bits;
  UINT32 Data;

} RCECEPACAPHDR_IEH_SATELLITE_STRUCT;

/* ABMRCIEP_COPY_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804164)                                                      */
/*      SPRB0 (0x20804164)                                                      */
/*      SPRHBM (0x20804164)                                                     */
/*      SPRC0 (0x20804164)                                                      */
/*      SPRMCC (0x20804164)                                                     */
/*      SPRUCC (0x20804164)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* RCEC Association Bitmap for Root Complex Integrated Endpoints (ABMRCIEP)
*/


#define ABMRCIEP_COPY_IEH_SATELLITE_REG 0x1F020164

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 ab0to31 : 32;

                            /* Bits[31:0], Access Type=RW, default=0x00000000*/

                            /* AB0-AB31 (Association BitMap) */

  } Bits;
  UINT32 Data;

} ABMRCIEP_COPY_IEH_SATELLITE_STRUCT;

/* ABN_IEH_SATELLITE_REG supported on:                                          */
/*      SPRA0 (0x20804168)                                                      */
/*      SPRB0 (0x20804168)                                                      */
/*      SPRHBM (0x20804168)                                                     */
/*      SPRC0 (0x20804168)                                                      */
/*      SPRMCC (0x20804168)                                                     */
/*      SPRUCC (0x20804168)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BOOT_W                                           */
/* SPRB0 Security PolicyGroup: BOOT_W                                           */
/* SPRHBM Security PolicyGroup: BOOT_W                                          */
/* SPRC0 Security PolicyGroup: BOOT_W                                           */
/* SPRMCC Security PolicyGroup: BOOT_W                                          */
/* SPRUCC Security PolicyGroup: BOOT_W                                          */
/* RCEC Associated Bus Numbers (ABN)
*/


#define ABN_IEH_SATELLITE_REG 0x1F020168

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 brp : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bus Range Present (BRP): When Set, this bit
                               indicates that the RCEC Next Bus Number and RCEC
                               Last Bus Number fields are present and describe
                               a range of containing RCiEPs associated with
                               this. When Clear, this bit indicates that the
                               RCEC Next Bus Number and RCEC Last Bus Number
                               fields are not present and that all RCiEPs
                               associated with this RCEC are on the same
                               Logical Bus as the RCEC itself.
                            */
    UINT32 reserved : 7;

                            /* Bits[7:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 nbn : 8;

                            /* Bits[15:8], Access Type=RW, default=0x00000000*/

                            /*
                               RCEC Next Bus Number (NBN): Contains the lowest
                               bus number containing RCiEPs associated with the
                               RCEC
                            */
    UINT32 lbn : 8;

                            /* Bits[23:16], Access Type=RW, default=0x00000000*/

                            /*
                               RCEC Last Bus Number (LBN): Contains the highest
                               bus number containing RCiEPs associated with the
                               RCEC
                            */
    UINT32 reserved_1 : 8;

                            /* Bits[31:24], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ABN_IEH_SATELLITE_STRUCT;

/* ROOTCTLOVR_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x10804180)                                                      */
/*      SPRB0 (0x10804180)                                                      */
/*      SPRHBM (0x10804180)                                                     */
/*      SPRC0 (0x10804180)                                                      */
/*      SPRMCC (0x10804180)                                                     */
/*      SPRUCC (0x10804180)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* 1.10.2 Root Control Override (ROOTCTLOVR)
*/


#define ROOTCTLOVR_IEH_SATELLITE_REG 0x1F010180

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 seceeo : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /*
                               System Error on Correctable Error Enable
                               Override (SECEEO) This field controls override
                               of system errors generation for correctable
                               errors. When set to 1, it indicates that a
                               System Error should be generated if a
                               correctable error (ERR_COR) is reported by any
                               of the RCiEPs associated with and including the
                               RCEC regardless of the setting of the
                               corresponding bit in the ROOTCTL register. When
                               clear, the correctable errors are only
                               propagated if the corresponding bit in ROOTCTL
                               register is set.
                            */
    UINT16 senfeeo : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /*
                               System Error on Non-Fatal Error Enable Override
                               (SENFEEO) This field controls the override of
                               system errors generation for non-fatal errors.
                               When set to 1, it indicates that a System Error
                               should be generated if a non-fatal error
                               (ERR_NONFATAL) is reported by any of the RCiEPs
                               associated with and including the RCEC
                               regardless of the setting of the corresponding
                               bit in the ROOTCTL register. When clear, the
                               non-fatal errors are only propagated if the
                               corresponding bit in ROOTCTL register is set.
                            */
    UINT16 sefeeo : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /*
                               System Error on Fatal Error Enable Overrid
                               (SECEEO) This field controls the override of
                               system errors generation in for fatal errors.
                               When set to 1, it indicates that a System Error
                               should be generated if a fatal error (ERR_FATAL)
                               is reported by any of the RCiEPs associated with
                               and including the RCEC regardless of the setting
                               of the corresponding bit in the ROOTCTL
                               register. When clear, the fatal errors are only
                               propagated if the corresponding bit in ROOTCTL
                               register is set.
                            */
    UINT16 reserved : 13;

                            /* Bits[15:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} ROOTCTLOVR_IEH_SATELLITE_STRUCT;

/* ROOTERRMSK_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x10804182)                                                      */
/*      SPRB0 (0x10804182)                                                      */
/*      SPRHBM (0x10804182)                                                     */
/*      SPRC0 (0x10804182)                                                      */
/*      SPRMCC (0x10804182)                                                     */
/*      SPRUCC (0x10804182)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* Root Error Mask Register (ROOTERRMSK)
*/


#define ROOTERRMSK_IEH_SATELLITE_REG 0x1F010182

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT16 rcem : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /*
                               Root Correctable Error Mask (RCEM) When this bit
                               is set, the PCIe errors do not trigger an MSI or
                               INTx interrupt, regardless MSI or INTx is
                               enabled or not.
                            */
    UINT16 rnfem : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /*
                               Root Non-Fatal Error Mask (RNFEM) When this bit
                               is set, the PCIe errors do not trigger an MSI or
                               INTx interrupt, regardless MSI or INTx is
                               enabled or not.
                            */
    UINT16 rfem : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /*
                               Root Fatal Error Mask (RFEM) When this bit is
                               set, the PCIe errors do not trigger an MSI or
                               INTx interrupt, regardless MSI or INTx is
                               enabled or not.
                            */
    UINT16 reserved : 13;

                            /* Bits[15:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT16 Data;

} ROOTERRMSK_IEH_SATELLITE_STRUCT;

/* GERRFATSTS_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804200)                                                      */
/*      SPRB0 (0x20804200)                                                      */
/*      SPRHBM (0x20804200)                                                     */
/*      SPRC0 (0x20804200)                                                      */
/*      SPRMCC (0x20804200)                                                     */
/*      SPRUCC (0x20804200)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* This register indicates that a Fatal error is reported to the global error logic. An individual error status bit that is set indicates that a particular local device or RCEC has detected an error.
*/


#define GERRFATSTS_IEH_SATELLITE_REG 0x1F020200

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 iehlocal_fa_sts : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* IEH Local Error Status (DEV0_FA_STS) */
    UINT32 dev1_fa_sts : 1;

                            /* Bits[1:1], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev1 Error Status (DEV1_FA_STS) */
    UINT32 dev2_fa_sts : 1;

                            /* Bits[2:2], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev2 Error Status (DEV2_FA_STS) */
    UINT32 dev3_fa_sts : 1;

                            /* Bits[3:3], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev3 Error Status (DEV3_FA_STS) */
    UINT32 dev4_fa_sts : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev4 Error Status (DEV4_FA_STS) */
    UINT32 dev5_fa_sts : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev5 Error Status (DEV5_FA_STS) */
    UINT32 dev6_fa_sts : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev6 Error Status (DEV6_FA_STS) */
    UINT32 dev7_fa_sts : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev7 Error Status (DEV7_FA_STS) */
    UINT32 dev8_fa_sts : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev8 Error Status (DEV8_FA_STS) */
    UINT32 dev9_fa_sts : 1;

                            /* Bits[9:9], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev9 Error Status (DEV9_FA_STS) */
    UINT32 dev10_fa_sts : 1;

                            /* Bits[10:10], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev10 Error Status (DEV10_FA_STS) */
    UINT32 dev11_fa_sts : 1;

                            /* Bits[11:11], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev11 Error Status (DEV11_FA_STS) */
    UINT32 dev12_fa_sts : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev12 Error Status (DEV12_FA_STS) */
    UINT32 dev13_fa_sts : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev13 Error Status (DEV13_FA_STS) */
    UINT32 dev14_fa_sts : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev14 Error Status (DEV14_FA_STS) */
    UINT32 dev15_fa_sts : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev15 Error Status (DEV15_FA_STS) */
    UINT32 dev16_fa_sts : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev16 Error Status (DEV16_FA_STS) */
    UINT32 dev17_fa_sts : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev17 Error Status (DEV17_FA_STS) */
    UINT32 dev18_fa_sts : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev18 Error Status (DEV18_FA_STS) */
    UINT32 dev19_fa_sts : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev19 Error Status (DEV19_FA_STS) */
    UINT32 dev20_fa_sts : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev20 Error Status (DEV20_FA_STS) */
    UINT32 dev21_fa_sts : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev21 Error Status (DEV21_FA_STS) */
    UINT32 dev22_fa_sts : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev22 Error Status (DEV22_FA_STS) */
    UINT32 dev23_fa_sts : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev23 Error Status (DEV23_FA_STS) */
    UINT32 dev24_fa_sts : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev24 Error Status (DEV24_FA_STS) */
    UINT32 dev25_fat_sts : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev25 Error Status (DEV25_FAT_STS) */
    UINT32 dev26_fat_sts : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev26 Error Status (DEV26_FAT_STS) */
    UINT32 dev27_fat_sts : 1;

                            /* Bits[27:27], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev27 Error Status (DEV27_FAT_STS) */
    UINT32 dev28_fat_sts : 1;

                            /* Bits[28:28], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev28 Error Status (DEV28_FAT_STS) */
    UINT32 dev29_fat_sts : 1;

                            /* Bits[29:29], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev29 Error Status (DEV29_FAT_STS) */
    UINT32 dev30_fat_sts : 1;

                            /* Bits[30:30], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev30 Error Status (DEV30_FAT_STS) */
    UINT32 dev31_fat_sts : 1;

                            /* Bits[31:31], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev31 Error Status (DEV31_FAT_STS) */

  } Bits;
  UINT32 Data;

} GERRFATSTS_IEH_SATELLITE_STRUCT;

/* GERRNONSTS_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804204)                                                      */
/*      SPRB0 (0x20804204)                                                      */
/*      SPRHBM (0x20804204)                                                     */
/*      SPRC0 (0x20804204)                                                      */
/*      SPRMCC (0x20804204)                                                     */
/*      SPRUCC (0x20804204)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* This register indicates that a Fatal error is reported to the global error logic. An individual error status bit that is set indicates that a particular local device or RCEC has detected an error.
*/


#define GERRNONSTS_IEH_SATELLITE_REG 0x1F020204

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 iehlocal_nf_sts : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* IEH Local Error Status (DEV0_NF_STS) */
    UINT32 dev1_nf_sts : 1;

                            /* Bits[1:1], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev1 Error Status (DEV1_NF_STS) */
    UINT32 dev2_nf_sts : 1;

                            /* Bits[2:2], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev2 Error Status (DEV2_NF_STS) */
    UINT32 dev3_nf_sts : 1;

                            /* Bits[3:3], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev3 Error Status (DEV3_NF_STS) */
    UINT32 dev4_nf_sts : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev4 Error Status (DEV4_NF_STS) */
    UINT32 dev5_nf_sts : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev5 Error Status (DEV5_NF_STS) */
    UINT32 dev6_nf_sts : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev6 Error Status (DEV6_NF_STS) */
    UINT32 dev7_nf_sts : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev7 Error Status (DEV7_NF_STS) */
    UINT32 dev8_nf_sts : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev8 Error Status (DEV8_NF_STS) */
    UINT32 dev9_nf_sts : 1;

                            /* Bits[9:9], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev9 Error Status (DEV9_NF_STS) */
    UINT32 dev10_nf_sts : 1;

                            /* Bits[10:10], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev10 Error Status (DEV10_NF_STS) */
    UINT32 dev11_nf_sts : 1;

                            /* Bits[11:11], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev11 Error Status (DEV11_NF_STS) */
    UINT32 dev12_nf_sts : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev12 Error Status (DEV12_NF_STS) */
    UINT32 dev13_nf_sts : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev13 Error Status (DEV13_NF_STS) */
    UINT32 dev14_nf_sts : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev14 Error Status (DEV14_NF_STS) */
    UINT32 dev15_nf_sts : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev15 Error Status (DEV15_NF_STS) */
    UINT32 dev16_nf_sts : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev16 Error Status (DEV16_NF_STS) */
    UINT32 dev17_nf_sts : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev17 Error Status (DEV17_NF_STS) */
    UINT32 dev18_nf_sts : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev18 Error Status (DEV18_NF_STS) */
    UINT32 dev19_nf_sts : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev19 Error Status (DEV19_NF_STS) */
    UINT32 dev20_nf_sts : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev20 Error Status (DEV20_NF_STS) */
    UINT32 dev21_nf_sts : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev21 Error Status (DEV21_NF_STS) */
    UINT32 dev22_nf_sts : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev22 Error Status (DEV22_NF_STS) */
    UINT32 dev23_nf_sts : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev23 Error Status (DEV23_NF_STS) */
    UINT32 dev24_nf_sts : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev24 Error Status (DEV24_NF_STS) */
    UINT32 dev25_nf_sts : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev25 Error Status (DEV25_NF_STS) */
    UINT32 dev26_nf_sts : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev26 Error Status (DEV26_NF_STS) */
    UINT32 dev27_nf_sts : 1;

                            /* Bits[27:27], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev27 Error Status (DEV27_NF_STS) */
    UINT32 dev28_nf_sts : 1;

                            /* Bits[28:28], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev28 Error Status (DEV28_NF_STS) */
    UINT32 dev29_nf_sts : 1;

                            /* Bits[29:29], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev29 Error Status (DEV29_NF_STS) */
    UINT32 dev30_nf_sts : 1;

                            /* Bits[30:30], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev30 Error Status (DEV30_NF_STS) */
    UINT32 dev31_nf_sts : 1;

                            /* Bits[31:31], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev31 Error Status (DEV31_NF_STS) */

  } Bits;
  UINT32 Data;

} GERRNONSTS_IEH_SATELLITE_STRUCT;

/* GERRCORSTS_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804208)                                                      */
/*      SPRB0 (0x20804208)                                                      */
/*      SPRHBM (0x20804208)                                                     */
/*      SPRC0 (0x20804208)                                                      */
/*      SPRMCC (0x20804208)                                                     */
/*      SPRUCC (0x20804208)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register indicates that a Fatal error is reported to the global error logic. An individual error status bit that is set indicates that a particular local device or RCEC has detected an error.
*/


#define GERRCORSTS_IEH_SATELLITE_REG 0x1F020208

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 iehlocal_co_sts : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* IEH Local Error Status (DEV0_CO_STS) */
    UINT32 dev1_co_sts : 1;

                            /* Bits[1:1], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev1 Error Status (DEV1_CO_STS) */
    UINT32 dev2_co_sts : 1;

                            /* Bits[2:2], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev2 Error Status (DEV2_CO_STS) */
    UINT32 dev3_co_sts : 1;

                            /* Bits[3:3], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev3 Error Status (DEV3_CO_STS) */
    UINT32 dev4_co_sts : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev4 Error Status (DEV4_CO_STS) */
    UINT32 dev5_co_sts : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev5 Error Status (DEV5_CO_STS) */
    UINT32 dev6_co_sts : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev6 Error Status (DEV6_CO_STS) */
    UINT32 dev7_co_sts : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev7 Error Status (DEV7_CO_STS) */
    UINT32 dev8_co_sts : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev8 Error Status (DEV8_CO_STS) */
    UINT32 dev9_co_sts : 1;

                            /* Bits[9:9], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev9 Error Status (DEV9_CO_STS) */
    UINT32 dev10_co_sts : 1;

                            /* Bits[10:10], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev10 Error Status (DEV10_CO_STS) */
    UINT32 dev11_co_sts : 1;

                            /* Bits[11:11], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev11 Error Status (DEV11_CO_STS) */
    UINT32 dev12_co_sts : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev12 Error Status (DEV12_CO_STS) */
    UINT32 dev13_co_sts : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev13 Error Status (DEV13_CO_STS) */
    UINT32 dev14_co_sts : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev14 Error Status (DEV14_CO_STS) */
    UINT32 dev15_co_sts : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev15 Error Status (DEV15_CO_STS) */
    UINT32 dev16_co_sts : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev16 Error Status (DEV16_CO_STS) */
    UINT32 dev17_co_sts : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev17 Error Status (DEV17_CO_STS) */
    UINT32 dev18_co_sts : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev18 Error Status (DEV18_CO_STS) */
    UINT32 dev19_co_sts : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev19 Error Status (DEV19_CO_STS) */
    UINT32 dev20_co_sts : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev20 Error Status (DEV20_CO_STS) */
    UINT32 dev21_co_sts : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev21 Error Status (DEV21_CO_STS) */
    UINT32 dev22_co_sts : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev22 Error Status (DEV22_CO_STS) */
    UINT32 dev23_co_sts : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev23 Error Status (DEV23_CO_STS) */
    UINT32 dev24_co_sts : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev24 Error Status (DEV24_CO_STS) */
    UINT32 dev25_co_sts : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev25 Error Status (DEV25_CO_STS) */
    UINT32 dev26_co_sts : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev26 Error Status (DEV26_CO_STS) */
    UINT32 dev27_co_sts : 1;

                            /* Bits[27:27], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev27 Error Status (DEV27_CO_STS) */
    UINT32 dev28_co_sts : 1;

                            /* Bits[28:28], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev28 Error Status (DEV28_CO_STS) */
    UINT32 dev29_co_sts : 1;

                            /* Bits[29:29], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev29 Error Status (DEV29_CO_STS) */
    UINT32 dev30_co_sts : 1;

                            /* Bits[30:30], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev30 Error Status (DEV30_CO_STS) */
    UINT32 dev31_co_sts : 1;

                            /* Bits[31:31], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Dev31 Error Status (DEV31_CO_STS) */

  } Bits;
  UINT32 Data;

} GERRCORSTS_IEH_SATELLITE_STRUCT;

/* GERRFATMSK_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x2080420c)                                                      */
/*      SPRB0 (0x2080420c)                                                      */
/*      SPRHBM (0x2080420c)                                                     */
/*      SPRC0 (0x2080420c)                                                      */
/*      SPRMCC (0x2080420c)                                                     */
/*      SPRUCC (0x2080420c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This register indicates that a Fatal error is reported to the global error logic. An individual error status bit that is set indicates that a particular local device or RCEC has detected an error.
*/


#define GERRFATMSK_IEH_SATELLITE_REG 0x1F02020C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 iehlocal_famsk : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* IEH Local Error Mask (DEV0_FAMSK) */
    UINT32 dev1_famsk : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /* Dev1 Error Mask (DEV1_FAMSK) */
    UINT32 dev2_famsk : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /* Dev2 Error Mask (DEV2_FAMSK) */
    UINT32 dev3_famsk : 1;

                            /* Bits[3:3], Access Type=RW/P, default=0x00000000*/

                            /* Dev3 Error Mask (DEV3_FAMSK) */
    UINT32 dev4_famsk : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Dev4 Error Mask (DEV4_FAMSK) */
    UINT32 dev5_famsk : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Dev5 Error Mask (DEV5_FAMSK) */
    UINT32 dev6_famsk : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Dev6 Error Mask (DEV6_FAMSK) */
    UINT32 dev7_famsk : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Dev7 Error Mask (DEV7_FAMSK) */
    UINT32 dev8_famsk : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* Dev8 Error Mask (DEV8_FAMSK) */
    UINT32 dev9_famsk : 1;

                            /* Bits[9:9], Access Type=RW/P, default=0x00000000*/

                            /* Dev9 Error Mask (DEV9_FAMSK) */
    UINT32 dev10_famsk : 1;

                            /* Bits[10:10], Access Type=RW/P, default=0x00000000*/

                            /* Dev10 Error Mask (DEV10_FAMSK) */
    UINT32 dev11_famsk : 1;

                            /* Bits[11:11], Access Type=RW/P, default=0x00000000*/

                            /* Dev11 Error Mask (DEV11_FAMSK) */
    UINT32 dev12_famsk : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Dev12 Error Mask (DEV12_FAMSK) */
    UINT32 dev13_famsk : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Dev13 Error Mask (DEV13_FAMSK) */
    UINT32 dev14_famsk : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Dev14 Error Mask (DEV14_FAMSK) */
    UINT32 dev15_famsk : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Dev15 Error Mask (DEV15_FAMSK) */
    UINT32 dev16_famsk : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Dev16 Error Mask (DEV16_FAMSK) */
    UINT32 dev17_famsk : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Dev17 Error Mask (DEV17_FAMSK) */
    UINT32 dev18_famsk : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Dev18 Error Mask (DEV18_FAMSK) */
    UINT32 dev19_famsk : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* Dev19 Error Mask (DEV19_FAMSK) */
    UINT32 dev20_famsk : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Dev20 Error Mask (DEV20_FAMSK) */
    UINT32 dev21_famsk : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* Dev21 Error Mask (DEV21_FAMSK) */
    UINT32 dev22_famsk : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Dev22 Error Mask (DEV22_FAMSK) */
    UINT32 dev23_famsk : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* Dev23 Error Mask (DEV23_FAMSK) */
    UINT32 dev24_famsk : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* Dev24 Error Mask (DEV24_FAMSK) */
    UINT32 dev25_famsk : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* Dev25 Error Status (DEV25_FAMSK) */
    UINT32 dev26_famsk : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Dev26 Error Mask (DEV26_FAMSK) */
    UINT32 dev27_famsk : 1;

                            /* Bits[27:27], Access Type=RW/P, default=0x00000000*/

                            /* Dev27 Error Mask (DEV27_FAMSK) */
    UINT32 dev28_famsk : 1;

                            /* Bits[28:28], Access Type=RW/P, default=0x00000000*/

                            /* Dev28 Error Mask (DEV28_FAMSK) */
    UINT32 dev29_famsk : 1;

                            /* Bits[29:29], Access Type=RW/P, default=0x00000000*/

                            /* Dev29 Error Mask (DEV29_FAMSK) */
    UINT32 dev30_famsk : 1;

                            /* Bits[30:30], Access Type=RW/P, default=0x00000000*/

                            /* Dev30 Error Mask (DEV30_FAMSK) */
    UINT32 dev31_famsk : 1;

                            /* Bits[31:31], Access Type=RW/P, default=0x00000000*/

                            /* Dev31 Error Mask (DEV31_FAMSK) */

  } Bits;
  UINT32 Data;

} GERRFATMSK_IEH_SATELLITE_STRUCT;

/* GERRNONMSK_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804210)                                                      */
/*      SPRB0 (0x20804210)                                                      */
/*      SPRHBM (0x20804210)                                                     */
/*      SPRC0 (0x20804210)                                                      */
/*      SPRMCC (0x20804210)                                                     */
/*      SPRUCC (0x20804210)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This register indicates that a Fatal error is reported to the global error logic. An individual error status bit that is set indicates that a particular local device or RCEC has detected an error.
*/


#define GERRNONMSK_IEH_SATELLITE_REG 0x1F020210

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 iehlocal_nfmsk : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* IEH Local Error Mask (DEV0_NFMSK) */
    UINT32 dev1_nfmsk : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /* Dev1 Error Mask (DEV1_NFMSK) */
    UINT32 dev2_nfmsk : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /* Dev2 Error Mask (DEV2_NFMSK) */
    UINT32 dev3_nfmsk : 1;

                            /* Bits[3:3], Access Type=RW/P, default=0x00000000*/

                            /* Dev3 Error Mask (DEV3_NFMSK) */
    UINT32 dev4_nfmsk : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Dev4 Error Mask (DEV4_NFMSK) */
    UINT32 dev5_nfmsk : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Dev5 Error Mask (DEV5_NFMSK) */
    UINT32 dev6_nfmsk : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Dev6 Error Mask (DEV6_NFMSK) */
    UINT32 dev7_nfmsk : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Dev7 Error Mask (DEV7_NFMSK) */
    UINT32 dev8_nfmsk : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* Dev8 Error Mask (DEV8_NFMSK) */
    UINT32 dev9_nfmsk : 1;

                            /* Bits[9:9], Access Type=RW/P, default=0x00000000*/

                            /* Dev9 Error Mask (DEV9_NFMSK) */
    UINT32 dev10_nfmsk : 1;

                            /* Bits[10:10], Access Type=RW/P, default=0x00000000*/

                            /* Dev10 Error Mask (DEV10_NFMSK) */
    UINT32 dev11_nfmsk : 1;

                            /* Bits[11:11], Access Type=RW/P, default=0x00000000*/

                            /* Dev11 Error Mask (DEV11_NFMSK) */
    UINT32 dev12_nfmsk : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Dev12 Error Mask (DEV12_NFMSK) */
    UINT32 dev13_nfmsk : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Dev13 Error Mask (DEV13_NFMSK) */
    UINT32 dev14_nfmsk : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Dev14 Error Mask (DEV14_NFMSK) */
    UINT32 dev15_nfmsk : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Dev15 Error Mask (DEV15_NFMSK) */
    UINT32 dev16_nfmsk : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Dev16 Error Mask (DEV16_NFMSK) */
    UINT32 dev17_nfmsk : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Dev17 Error Mask (DEV17_NFMSK) */
    UINT32 dev18_nfmsk : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Dev18 Error Mask (DEV18_NFMSK) */
    UINT32 dev19_nfmsk : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* Dev19 Error Mask (DEV19_NFMSK) */
    UINT32 dev20_nfmsk : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Dev20 Error Mask (DEV20_NFMSK) */
    UINT32 dev21_nfmsk : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* Dev21 Error Mask (DEV21_NFMSK) */
    UINT32 dev22_nfmsk : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Dev22 Error Mask (DEV22_NFMSK) */
    UINT32 dev23_nfmsk : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* Dev23 Error Mask (DEV23_NFMSK) */
    UINT32 dev24_nfmsk : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* Dev24 Error Mask (DEV24_NFMSK) */
    UINT32 dev25_nfmsk : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* Dev25 Error Mask (DEV25_NFMSK) */
    UINT32 dev26_nfmsk : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Dev26 Error Mask (DEV26_NFMSK) */
    UINT32 dev27_nfmsk : 1;

                            /* Bits[27:27], Access Type=RW/P, default=0x00000000*/

                            /* Dev27 Error Mask (DEV27_NFMSK) */
    UINT32 dev28_nfmsk : 1;

                            /* Bits[28:28], Access Type=RW/P, default=0x00000000*/

                            /* Dev28 Error Mask (DEV28_NFMSK) */
    UINT32 dev29_nfmsk : 1;

                            /* Bits[29:29], Access Type=RW/P, default=0x00000000*/

                            /* Dev29 Error Mask (DEV29_NFMSK) */
    UINT32 dev30_nfmsk : 1;

                            /* Bits[30:30], Access Type=RW/P, default=0x00000000*/

                            /* Dev30 Error Mask (DEV30_NFMSK) */
    UINT32 dev31_nfmsk : 1;

                            /* Bits[31:31], Access Type=RW/P, default=0x00000000*/

                            /* Dev31 Error Mask (DEV31_NFMSK) */

  } Bits;
  UINT32 Data;

} GERRNONMSK_IEH_SATELLITE_STRUCT;

/* GERRCORMSK_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804214)                                                      */
/*      SPRB0 (0x20804214)                                                      */
/*      SPRHBM (0x20804214)                                                     */
/*      SPRC0 (0x20804214)                                                      */
/*      SPRMCC (0x20804214)                                                     */
/*      SPRUCC (0x20804214)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register indicates that a Fatal error is reported to the global error logic. An individual error status bit that is set indicates that a particular local device or RCEC has detected an error.
*/


#define GERRCORMSK_IEH_SATELLITE_REG 0x1F020214

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 iehlocal_comsk : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* IEH Local Error Mask (DEV0_COMSK) */
    UINT32 dev1_comsk : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /* Dev1 Error Mask (DEV1_COMSK) */
    UINT32 dev2_comsk : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /* Dev2 Error Mask (DEV2_COMSK) */
    UINT32 dev3_comsk : 1;

                            /* Bits[3:3], Access Type=RW/P, default=0x00000000*/

                            /* Dev3 Error Mask (DEV3_COMSK) */
    UINT32 dev4_comsk : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Dev4 Error Mask (DEV4_COMSK) */
    UINT32 dev5_comsk : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Dev5 Error Mask (DEV5_COMSK) */
    UINT32 dev6_comsk : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Dev6 Error Mask (DEV6_COMSK) */
    UINT32 dev7_comsk : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Dev7 Error Mask (DEV7_COMSK) */
    UINT32 dev8_comsk : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* Dev8 Error Mask (DEV8_COMSK) */
    UINT32 dev9_comsk : 1;

                            /* Bits[9:9], Access Type=RW/P, default=0x00000000*/

                            /* Dev9 Error Mask (DEV9_COMSK) */
    UINT32 dev10_comsk : 1;

                            /* Bits[10:10], Access Type=RW/P, default=0x00000000*/

                            /* Dev10 Error Mask (DEV10_COMSK) */
    UINT32 dev11_comsk : 1;

                            /* Bits[11:11], Access Type=RW/P, default=0x00000000*/

                            /* Dev11 Error Mask (DEV11_COMSK) */
    UINT32 dev12_comsk : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Dev12 Error Mask (DEV12_COMSK) */
    UINT32 dev13_comsk : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Dev13 Error Mask (DEV13_COMSK) */
    UINT32 dev14_comsk : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Dev14 Error Mask (DEV14_COMSK) */
    UINT32 dev15_comsk : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Dev15 Error Mask (DEV15_COMSK) */
    UINT32 dev16_comsk : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Dev16 Error Mask (DEV16_COMSK) */
    UINT32 dev17_comsk : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Dev17 Error Mask (DEV17_COMSK) */
    UINT32 dev18_comsk : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Dev18 Error Mask (DEV18_COMSK) */
    UINT32 dev19_comsk : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* Dev19 Error Mask (DEV19_COMSK) */
    UINT32 dev20_comsk : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Dev20 Error Mask (DEV20_COMSK) */
    UINT32 dev21_comsk : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* Dev21 Error Mask (DEV21_COMSK) */
    UINT32 dev22_comsk : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Dev22 Error Mask (DEV22_COMSK) */
    UINT32 dev23_comsk : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* Dev23 Error Mask (DEV23_COMSK) */
    UINT32 dev24_comsk : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* Dev24 Error Mask (DEV24_COMSK) */
    UINT32 dev25_co_msk : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* Dev25 Error Mask (DEV25_CO_MSK) */
    UINT32 dev26_co_msk : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Dev26 Error Mask (DEV26_CO_MSK) */
    UINT32 dev27_co_msk : 1;

                            /* Bits[27:27], Access Type=RW/P, default=0x00000000*/

                            /* Dev27 Error Mask (DEV27_CO_MSK) */
    UINT32 dev28_co_msk : 1;

                            /* Bits[28:28], Access Type=RW/P, default=0x00000000*/

                            /* Dev28 Error Mask (DEV28_CO_MSK) */
    UINT32 dev29_co_msk : 1;

                            /* Bits[29:29], Access Type=RW/P, default=0x00000000*/

                            /* Dev29 Error Mask (DEV29_CO_MSK) */
    UINT32 dev30_co_msk : 1;

                            /* Bits[30:30], Access Type=RW/P, default=0x00000000*/

                            /* Dev30 Error Mask (DEV30_CO_MSK) */
    UINT32 dev31_co_msk : 1;

                            /* Bits[31:31], Access Type=RW/P, default=0x00000000*/

                            /* Dev31 Error Mask (DEV31_CO_MSK) */

  } Bits;
  UINT32 Data;

} GERRCORMSK_IEH_SATELLITE_STRUCT;

/* GERRSRCID_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804218)                                                      */
/*      SPRB0 (0x20804218)                                                      */
/*      SPRHBM (0x20804218)                                                     */
/*      SPRC0 (0x20804218)                                                      */
/*      SPRMCC (0x20804218)                                                     */
/*      SPRUCC (0x20804218)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Error Source Identification (ERRSRCID)
*/


#define GERRSRCID_IEH_SATELLITE_REG 0x1F020218

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 gecsid : 16;

                            /* Bits[15:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               ERR_COR Source Identification (ECSID) Requester
                               ID of the source when a correctable error is
                               received.
                            */
    UINT32 gefsid : 16;

                            /* Bits[31:16], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               ERR_COR Source Identification (ECSID) Requester
                               ID of the source when a correctable error is
                               received.
                            */

  } Bits;
  UINT32 Data;

} GERRSRCID_IEH_SATELLITE_STRUCT;

/* GTIME_N0_IEH_SATELLITE_REG supported on:                                     */
/*      SPRA0 (0x20804240)                                                      */
/*      SPRB0 (0x20804240)                                                      */
/*      SPRHBM (0x20804240)                                                     */
/*      SPRC0 (0x20804240)                                                      */
/*      SPRMCC (0x20804240)                                                     */
/*      SPRUCC (0x20804240)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Global Error Timer register is a free running 64-bit counter and will indicate the current value of the 64-bit counter. This counter is reset to 0 by PWRGOOD. Once out of PWRGOOD reset, the counter begins to run.
*/


#define GTIME_N0_IEH_SATELLITE_REG 0x1F020240

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 gtime_value : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global Error Timer value (GTIME_Value) */

  } Bits;
  UINT32 Data;

} GTIME_N0_IEH_SATELLITE_STRUCT;

/* GTIME_N1_IEH_SATELLITE_REG supported on:                                     */
/*      SPRA0 (0x20804244)                                                      */
/*      SPRB0 (0x20804244)                                                      */
/*      SPRHBM (0x20804244)                                                     */
/*      SPRC0 (0x20804244)                                                      */
/*      SPRMCC (0x20804244)                                                     */
/*      SPRUCC (0x20804244)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Global Error Timer register is a free running 64-bit counter and will indicate the current value of the 64-bit counter. This counter is reset to 0 by PWRGOOD. Once out of PWRGOOD reset, the counter begins to run.
*/


#define GTIME_N1_IEH_SATELLITE_REG 0x1F020244

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 gtime_value : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global Error Timer value (GTIME_Value) */

  } Bits;
  UINT32 Data;

} GTIME_N1_IEH_SATELLITE_STRUCT;

/* GERRFATTIME_N0_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804248)                                                      */
/*      SPRB0 (0x20804248)                                                      */
/*      SPRHBM (0x20804248)                                                     */
/*      SPRC0 (0x20804248)                                                      */
/*      SPRMCC (0x20804248)                                                     */
/*      SPRUCC (0x20804248)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* The time stamp register logs the 64-bit free running counter when the first fatal error was logged.
*/


#define GERRFATTIME_N0_IEH_SATELLITE_REG 0x1F020248

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 g_faferr_time : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global FAFERR Time Stamp (G_FAFERR_TIME) */

  } Bits;
  UINT32 Data;

} GERRFATTIME_N0_IEH_SATELLITE_STRUCT;

/* GERRFATTIME_N1_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x2080424c)                                                      */
/*      SPRB0 (0x2080424c)                                                      */
/*      SPRHBM (0x2080424c)                                                     */
/*      SPRC0 (0x2080424c)                                                      */
/*      SPRMCC (0x2080424c)                                                     */
/*      SPRUCC (0x2080424c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* The time stamp register logs the 64-bit free running counter when the first fatal error was logged.
*/


#define GERRFATTIME_N1_IEH_SATELLITE_REG 0x1F02024C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 g_faferr_time : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global FAFERR Time Stamp (G_FAFERR_TIME) */

  } Bits;
  UINT32 Data;

} GERRFATTIME_N1_IEH_SATELLITE_STRUCT;

/* GERRNONTIME_N0_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804250)                                                      */
/*      SPRB0 (0x20804250)                                                      */
/*      SPRHBM (0x20804250)                                                     */
/*      SPRC0 (0x20804250)                                                      */
/*      SPRMCC (0x20804250)                                                     */
/*      SPRUCC (0x20804250)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* The time stamp register logs the 64-bit free running counter when the first fatal error was logged.
*/


#define GERRNONTIME_N0_IEH_SATELLITE_REG 0x1F020250

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 g_nfferr_time : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global NFFERR Time Stamp (G_NFFERR_TIME): */

  } Bits;
  UINT32 Data;

} GERRNONTIME_N0_IEH_SATELLITE_STRUCT;

/* GERRNONTIME_N1_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804254)                                                      */
/*      SPRB0 (0x20804254)                                                      */
/*      SPRHBM (0x20804254)                                                     */
/*      SPRC0 (0x20804254)                                                      */
/*      SPRMCC (0x20804254)                                                     */
/*      SPRUCC (0x20804254)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* The time stamp register logs the 64-bit free running counter when the first fatal error was logged.
*/


#define GERRNONTIME_N1_IEH_SATELLITE_REG 0x1F020254

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 g_nfferr_time : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global NFFERR Time Stamp (G_NFFERR_TIME): */

  } Bits;
  UINT32 Data;

} GERRNONTIME_N1_IEH_SATELLITE_STRUCT;

/* GERRCORTIME_N0_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804258)                                                      */
/*      SPRB0 (0x20804258)                                                      */
/*      SPRHBM (0x20804258)                                                     */
/*      SPRC0 (0x20804258)                                                      */
/*      SPRMCC (0x20804258)                                                     */
/*      SPRUCC (0x20804258)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* The time stamp register logs the 64-bit free running counter when the first fatal error was logged.
*/


#define GERRCORTIME_N0_IEH_SATELLITE_REG 0x1F020258

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 g_coferr_time : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global COFERR Time Stamp (G_COFERR_TIME) */

  } Bits;
  UINT32 Data;

} GERRCORTIME_N0_IEH_SATELLITE_STRUCT;

/* GERRCORTIME_N1_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x2080425c)                                                      */
/*      SPRB0 (0x2080425c)                                                      */
/*      SPRHBM (0x2080425c)                                                     */
/*      SPRC0 (0x2080425c)                                                      */
/*      SPRMCC (0x2080425c)                                                     */
/*      SPRUCC (0x2080425c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* The time stamp register logs the 64-bit free running counter when the first fatal error was logged.
*/


#define GERRCORTIME_N1_IEH_SATELLITE_REG 0x1F02025C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 g_coferr_time : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /* Global COFERR Time Stamp (G_COFERR_TIME) */

  } Bits;
  UINT32 Data;

} GERRCORTIME_N1_IEH_SATELLITE_STRUCT;

/* GSYSEVTSTS_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804260)                                                      */
/*      SPRB0 (0x20804260)                                                      */
/*      SPRHBM (0x20804260)                                                     */
/*      SPRC0 (0x20804260)                                                      */
/*      SPRMCC (0x20804260)                                                     */
/*      SPRUCC (0x20804260)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register indicates the error severity signaled by the global error logic. Setting of an individual error status bit indicates that the corresponding error severity has been detected.
*/


#define GSYSEVTSTS_IEH_SATELLITE_REG 0x1F020260

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 co_sysev_sts : 1;

                            /* Bits[0:0], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               Correctable Error Status - A correctable error
                               was detected when set (CO_SYSEV_STS)
                            */
    UINT32 nf_sysev_sts : 1;

                            /* Bits[1:1], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               Nonfatal Error Status - A nonfatal error was
                               detected when set (NF_SYSEV_STS)
                            */
    UINT32 fa_sysev_sts : 1;

                            /* Bits[2:2], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               Fatal Error Status - A fatal error was detected
                               when set (FA_SYSEV_STS)
                            */
    UINT32 reserved : 29;

                            /* Bits[31:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} GSYSEVTSTS_IEH_SATELLITE_STRUCT;

/* GSYSEVTCTL_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804264)                                                      */
/*      SPRB0 (0x20804264)                                                      */
/*      SPRHBM (0x20804264)                                                     */
/*      SPRC0 (0x20804264)                                                      */
/*      SPRMCC (0x20804264)                                                     */
/*      SPRUCC (0x20804264)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* The System Event Mask register masks the reporting the errors indicated by the system event status register. When set, the error severity does not cause the generation of the system event. When cleared, detection of the error severity generates system event(s) according to System Event Map Register (SYSEVMAP)
*/


#define GSYSEVTCTL_IEH_SATELLITE_REG 0x1F020264

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 co_sysev_m : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /*
                               Correctable Error Mask(CO_SYSEV_M) Correctable
                               Error System Event Mask: 1 - Unmask system event
                               reporting of the correctable error, 0 - Mask
                               system event reporting of the correctable error
                            */
    UINT32 nf_sysev_m : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /*
                               Nonfatal Error Mask(NF_SYSEV_M) NonFatal Error
                               System Event Mask: 1 - Unmask system event
                               reporting of the nonfatal error, 0 - Mask system
                               event reporting of the nonfatal error
                            */
    UINT32 fa_sysev_m : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /*
                               Fatal Error Mask(FA_SYSEV_M) Fatal Error System
                               Event Mask: 1 - Unmask system event reporting of
                               the fatal error, 0 - Mask system event reporting
                               of the fatal error
                            */
    UINT32 reserved : 29;

                            /* Bits[31:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} GSYSEVTCTL_IEH_SATELLITE_STRUCT;

/* GSYSEVTMAP_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804268)                                                      */
/*      SPRB0 (0x20804268)                                                      */
/*      SPRHBM (0x20804268)                                                     */
/*      SPRC0 (0x20804268)                                                      */
/*      SPRMCC (0x20804268)                                                     */
/*      SPRUCC (0x20804268)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* The System Event Mask register masks the reporting the errors indicated by the system event status register. When set, the error severity does not cause the generation of the system event. When cleared, detection of the error severity generates system event(s) according to System Event Map Register (SYSEVMAP)
*/


#define GSYSEVTMAP_IEH_SATELLITE_REG 0x1F020268

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 co_sysev_map : 2;

                            /* Bits[1:0], Access Type=RW/P, default=0x00000000*/

                            /*
                               11: Reserved 10: Generate NMI 01 Generate SMI
                               00: No system event generation Note: NMIE.NMI=1
                               and NSC.SERR#_NMI_enable=1 to generate an NMI.
                            */
    UINT32 nf_sysev_map : 2;

                            /* Bits[3:2], Access Type=RW/P, default=0x00000000*/

                            /*
                               11: Reserved 10: Generate NMI 01 Generate SMI
                               00: No system event generation Note: NMIE.NMI=1
                               and NSC.SERR#_NMI_enable=1 to generate an NMI.
                            */
    UINT32 fa_sysev_map : 2;

                            /* Bits[5:4], Access Type=RW/P, default=0x00000000*/

                            /*
                               11: Reserved 10: Generate NMI 01 Generate SMI
                               00: No system event generation Note: NMIE.NMI=1
                               and NSC.SERR#_NMI_enable=1 to generate an NMI.
                            */
    UINT32 reserved : 26;

                            /* Bits[31:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} GSYSEVTMAP_IEH_SATELLITE_STRUCT;

/* ERRPINCTRL_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804270)                                                      */
/*      SPRB0 (0x20804270)                                                      */
/*      SPRHBM (0x20804270)                                                     */
/*      SPRC0 (0x20804270)                                                      */
/*      SPRMCC (0x20804270)                                                     */
/*      SPRUCC (0x20804270)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This register provides the option to configure an error pin to either as a special purpose error pin which is asserted based on the detected error severity, or as a general purpose output which is asserted based on the value in the ERRPINDAT. The assertion of the error pins can also be completely disabled by this register.
*/


#define ERRPINCTRL_IEH_SATELLITE_REG 0x1F020270

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 err0_enable : 2;

                            /* Bits[1:0], Access Type=RW/P, default=0x00000000*/

                            /*
                               11: Reserved. 10: Assert Error Pin when Fatal
                               error is set in the system event status reg. 01:
                               Assert and Deassert Error pin according to Error
                               Pin Data register 00: Disable Error pin
                               assertion
                            */
    UINT32 err1_enable : 2;

                            /* Bits[3:2], Access Type=RW/P, default=0x00000000*/

                            /*
                               11: Reserved. 10: Assert Error Pin when Fatal
                               error is set in the system event status reg. 01:
                               Assert and Deassert Error pin according to Error
                               Pin Data register 00: Disable Error pin
                               assertion
                            */
    UINT32 err2_enable : 2;

                            /* Bits[5:4], Access Type=RW/P, default=0x00000000*/

                            /*
                               11: Reserved. 10: Assert Error Pin when Fatal
                               error is set in the system event status reg. 01:
                               Assert and Deassert Error pin according to Error
                               Pin Data register 00: Disable Error pin
                               assertion
                            */
    UINT32 reserved : 26;

                            /* Bits[31:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRPINCTRL_IEH_SATELLITE_STRUCT;

/* ERRPINSTS_IEH_SATELLITE_REG supported on:                                    */
/*      SPRA0 (0x20804274)                                                      */
/*      SPRB0 (0x20804274)                                                      */
/*      SPRHBM (0x20804274)                                                     */
/*      SPRC0 (0x20804274)                                                      */
/*      SPRMCC (0x20804274)                                                     */
/*      SPRUCC (0x20804274)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reflects the state of the error pin assertion. The status bit of the corresponding error pin is set upon the deassertion to assertion transition of the error pin. This bit is cleared by the software with writing 1 to the corresponding bit.
*/


#define ERRPINSTS_IEH_SATELLITE_REG 0x1F020274

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 err0_sts : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               This bit is set upon the transition of
                               deassertion to assertion of the Error pin.
                               Software writes1 to clear the status.
                            */
    UINT32 err1_sts : 1;

                            /* Bits[1:1], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               This bit is set upon the transition of
                               deassertion to assertion of the Error pin.
                               Software writes1 to clear the status.
                            */
    UINT32 err2_sts : 1;

                            /* Bits[2:2], Access Type=RW/1C/V/P, default=0x00000000*/

                            /*
                               This bit is set upon the transition of
                               deassertion to assertion of the Error pin.
                               Software writes1 to clear the status.
                            */
    UINT32 reserved : 29;

                            /* Bits[31:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRPINSTS_IEH_SATELLITE_STRUCT;

/* ERRPINDATA_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804278)                                                      */
/*      SPRB0 (0x20804278)                                                      */
/*      SPRHBM (0x20804278)                                                     */
/*      SPRC0 (0x20804278)                                                      */
/*      SPRMCC (0x20804278)                                                     */
/*      SPRUCC (0x20804278)                                                     */
/* Register default value on SPRA0: 0x00000007                                  */
/* Register default value on SPRB0: 0x00000007                                  */
/* Register default value on SPRHBM: 0x00000007                                 */
/* Register default value on SPRC0: 0x00000007                                  */
/* Register default value on SPRMCC: 0x00000007                                 */
/* Register default value on SPRUCC: 0x00000007                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This register provides the data value when the error pin is configured as a general purpose output.
*/


#define ERRPINDATA_IEH_SATELLITE_REG 0x1F020278

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 err0_pindata : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               (applies when ERRPINCNTL[1:0]=01; otherwise
                               reserved). This bit acts as the general purpose
                               output for the ERR[0] pin. ERR[0] pin value will
                               follow the value programmed in ERR[0] Pin Data
                               register. This bit applies only when
                               ERRPINCTRL[1:0]=01; otherwise it is reserved. 0
                               - Deassert ERR[0] pin. 1 - Assert ERR[0] pin
                               This value only applies to the pin when
                               ERRPINCTL[1:0]=01
                            */
    UINT32 err1_pindata : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000001*/

                            /*
                               (applies when ERRPINCNTL[3:2]=01; otherwise
                               reserved). This bit acts as the general purpose
                               output for the ERR[0] pin. ERR[1] pin value will
                               follow the value programmed in ERR[1] Pin Data
                               register. This bit applies only when
                               ERRPINCTRL[3:2]=01; otherwise it is reserved. 0
                               - Deassert ERR[1] pin. 1 - Assert ERR[1] pin
                               This value only applies to the pin when
                               ERRPINCTL[3:2]=01
                            */
    UINT32 err2_pindata : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               (applies when ERRPINCNTL[5:4]=01; otherwise
                               reserved). This bit acts as the general purpose
                               output for the ERR[2] pin. ERR[2] pin value will
                               follow the value programmed in ERR[2] Pin Data
                               register. This bit applies only when
                               ERRPINCTRL[5:4]=01; otherwise it is reserved. 0
                               - Deassert ERR[2] pin. 1 - Assert ERR[2] pin
                               This value only applies to the pin when
                               ERRPINCTL[5:4]=01
                            */
    UINT32 reserved : 29;

                            /* Bits[31:3], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} ERRPINDATA_IEH_SATELLITE_STRUCT;

/* BITMAP_IEH_SATELLITE_REG supported on:                                       */
/*      SPRA0 (0x2080427c)                                                      */
/*      SPRB0 (0x2080427c)                                                      */
/*      SPRHBM (0x2080427c)                                                     */
/*      SPRC0 (0x2080427c)                                                      */
/*      SPRMCC (0x2080427c)                                                     */
/*      SPRUCC (0x2080427c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This register indicates the programmable BITMAP field of Satellite IEH.
*/


#define BITMAP_IEH_SATELLITE_REG 0x1F02027C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 sat_bitmap : 5;

                            /* Bits[4:0], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               This register indicates the programmable BITMAP
                               field of Satellite IEH. The BitMap field is set
                               to non-zero value by the BIOS
                            */
    UINT32 reserved : 27;

                            /* Bits[31:5], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} BITMAP_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804280)                                                      */
/*      SPRB0 (0x20804280)                                                      */
/*      SPRHBM (0x20804280)                                                     */
/*      SPRC0 (0x20804280)                                                      */
/*      SPRMCC (0x20804280)                                                     */
/*      SPRUCC (0x20804280)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Local Uncorrectable Error Status Register
*/


#define LERRUNCSTS0_IEH_SATELLITE_REG 0x1F020280

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 undefined : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /* Bit 0 is undefined. Refer IEH HAS. */
    UINT32 malformedpcieaer : 1;

                            /* Bits[1:1], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed PCIe AER packet */
    UINT32 malformedpcieerr : 1;

                            /* Bits[2:2], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed PCIe ERR packet */
    UINT32 ieh_ur : 1;

                            /* Bits[3:3], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* IEH responds with UR */
    UINT32 malformeddoserr : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed Do_SERR packet */
    UINT32 reserved : 24;

                            /* Bits[28:5], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 do_serr_0 : 1;

                            /* Bits[29:29], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Legacy devices sending Do_SERR */
    UINT32 grpe : 1;

                            /* Bits[30:30], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* GPSB Router Parity Error */
    UINT32 prpe : 1;

                            /* Bits[31:31], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* PMSB Router Parity Error */

  } Bits;
  UINT32 Data;

} LERRUNCSTS0_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804284)                                                      */
/*      SPRB0 (0x20804284)                                                      */
/*      SPRHBM (0x20804284)                                                     */
/*      SPRC0 (0x20804284)                                                      */
/*      SPRMCC (0x20804284)                                                     */
/*      SPRUCC (0x20804284)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS1_IEH_SATELLITE_REG 0x1F020284

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS1_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS2_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804288)                                                      */
/*      SPRB0 (0x20804288)                                                      */
/*      SPRHBM (0x20804288)                                                     */
/*      SPRC0 (0x20804288)                                                      */
/*      SPRMCC (0x20804288)                                                     */
/*      SPRUCC (0x20804288)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS2_IEH_SATELLITE_REG 0x1F020288

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS2_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS3_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x2080428c)                                                      */
/*      SPRB0 (0x2080428c)                                                      */
/*      SPRHBM (0x2080428c)                                                     */
/*      SPRC0 (0x2080428c)                                                      */
/*      SPRMCC (0x2080428c)                                                     */
/*      SPRUCC (0x2080428c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS3_IEH_SATELLITE_REG 0x1F02028C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS3_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS4_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804290)                                                      */
/*      SPRB0 (0x20804290)                                                      */
/*      SPRHBM (0x20804290)                                                     */
/*      SPRC0 (0x20804290)                                                      */
/*      SPRMCC (0x20804290)                                                     */
/*      SPRUCC (0x20804290)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS4_IEH_SATELLITE_REG 0x1F020290

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS4_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS5_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804294)                                                      */
/*      SPRB0 (0x20804294)                                                      */
/*      SPRHBM (0x20804294)                                                     */
/*      SPRC0 (0x20804294)                                                      */
/*      SPRMCC (0x20804294)                                                     */
/*      SPRUCC (0x20804294)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS5_IEH_SATELLITE_REG 0x1F020294

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS5_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS6_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804298)                                                      */
/*      SPRB0 (0x20804298)                                                      */
/*      SPRHBM (0x20804298)                                                     */
/*      SPRC0 (0x20804298)                                                      */
/*      SPRMCC (0x20804298)                                                     */
/*      SPRUCC (0x20804298)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS6_IEH_SATELLITE_REG 0x1F020298

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS6_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS7_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x2080429c)                                                      */
/*      SPRB0 (0x2080429c)                                                      */
/*      SPRHBM (0x2080429c)                                                     */
/*      SPRC0 (0x2080429c)                                                      */
/*      SPRMCC (0x2080429c)                                                     */
/*      SPRUCC (0x2080429c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS7_IEH_SATELLITE_REG 0x1F02029C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS7_IEH_SATELLITE_STRUCT;

/* LERRUNCSTS8_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042a0)                                                      */
/*      SPRB0 (0x208042a0)                                                      */
/*      SPRHBM (0x208042a0)                                                     */
/*      SPRC0 (0x208042a0)                                                      */
/*      SPRMCC (0x208042a0)                                                     */
/*      SPRUCC (0x208042a0)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Uncorrectable Error Status (ERRUNCSTS): This register reports the error status of individual uncorrectable error sources. An individual error status bit that is set to 1 indicates that a particular error occurred. Software can clear an error status by writing a 1 to the respective bit.
*/


#define LERRUNCSTS8_IEH_SATELLITE_REG 0x1F0202A0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Data Link Protocol Error Status (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Surprise Down Error Status (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Received Status (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Flow Control Protocol Error Status (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completion Timeout Status (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Completer Abort Status (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unexpected Completion Status (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Overflow Status (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Malformed TLP Status (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ECRC Error Status (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Unsupported Request Error Status (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* ACS Violation Status (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Status (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* MC Blocked TLP Status (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Status (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Status (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Status (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCSTS8_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042a4)                                                      */
/*      SPRB0 (0x208042a4)                                                      */
/*      SPRHBM (0x208042a4)                                                     */
/*      SPRC0 (0x208042a4)                                                      */
/*      SPRMCC (0x208042a4)                                                     */
/*      SPRUCC (0x208042a4)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Local Uncorrectable Error Status Register
*/


#define LERRUNCMSK0_IEH_SATELLITE_REG 0x1F0202A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 1;

                            /* Bits[0:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 malformedpcieaer_mask : 1;

                            /* Bits[1:1], Access Type=RW/P, default=0x00000000*/

                            /* Malformed PCIe AER packet Mask */
    UINT32 malformedpcieerr_mask : 1;

                            /* Bits[2:2], Access Type=RW/P, default=0x00000000*/

                            /* Malformed PCIe ERR packet Mask */
    UINT32 ieh_ur_mask : 1;

                            /* Bits[3:3], Access Type=RW/P, default=0x00000000*/

                            /* IEH responds with UR Mask */
    UINT32 malformeddoserr_mask : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Malformed Do_SERR packet */
    UINT32 reserved_1 : 24;

                            /* Bits[28:5], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 do_serr_0_mask : 1;

                            /* Bits[29:29], Access Type=RW/P, default=0x00000000*/

                            /* Legacy devices sending Do_SERR */
    UINT32 grpe_mask : 1;

                            /* Bits[30:30], Access Type=RW/P, default=0x00000000*/

                            /* GPSB Router Parity Error Mask */
    UINT32 prpe_mask : 1;

                            /* Bits[31:31], Access Type=RW/P, default=0x00000000*/

                            /* PMSB Router Parity Error Mask */

  } Bits;
  UINT32 Data;

} LERRUNCMSK0_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042a8)                                                      */
/*      SPRB0 (0x208042a8)                                                      */
/*      SPRHBM (0x208042a8)                                                     */
/*      SPRC0 (0x208042a8)                                                      */
/*      SPRMCC (0x208042a8)                                                     */
/*      SPRUCC (0x208042a8)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK1_IEH_SATELLITE_REG 0x1F0202A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK1_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK2_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042ac)                                                      */
/*      SPRB0 (0x208042ac)                                                      */
/*      SPRHBM (0x208042ac)                                                     */
/*      SPRC0 (0x208042ac)                                                      */
/*      SPRMCC (0x208042ac)                                                     */
/*      SPRUCC (0x208042ac)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK2_IEH_SATELLITE_REG 0x1F0202AC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK2_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK3_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042b0)                                                      */
/*      SPRB0 (0x208042b0)                                                      */
/*      SPRHBM (0x208042b0)                                                     */
/*      SPRC0 (0x208042b0)                                                      */
/*      SPRMCC (0x208042b0)                                                     */
/*      SPRUCC (0x208042b0)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK3_IEH_SATELLITE_REG 0x1F0202B0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK3_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK4_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042b4)                                                      */
/*      SPRB0 (0x208042b4)                                                      */
/*      SPRHBM (0x208042b4)                                                     */
/*      SPRC0 (0x208042b4)                                                      */
/*      SPRMCC (0x208042b4)                                                     */
/*      SPRUCC (0x208042b4)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK4_IEH_SATELLITE_REG 0x1F0202B4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK4_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK5_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042b8)                                                      */
/*      SPRB0 (0x208042b8)                                                      */
/*      SPRHBM (0x208042b8)                                                     */
/*      SPRC0 (0x208042b8)                                                      */
/*      SPRMCC (0x208042b8)                                                     */
/*      SPRUCC (0x208042b8)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK5_IEH_SATELLITE_REG 0x1F0202B8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK5_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK6_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042bc)                                                      */
/*      SPRB0 (0x208042bc)                                                      */
/*      SPRHBM (0x208042bc)                                                     */
/*      SPRC0 (0x208042bc)                                                      */
/*      SPRMCC (0x208042bc)                                                     */
/*      SPRUCC (0x208042bc)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK6_IEH_SATELLITE_REG 0x1F0202BC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK6_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK7_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042c0)                                                      */
/*      SPRB0 (0x208042c0)                                                      */
/*      SPRHBM (0x208042c0)                                                     */
/*      SPRC0 (0x208042c0)                                                      */
/*      SPRMCC (0x208042c0)                                                     */
/*      SPRUCC (0x208042c0)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK7_IEH_SATELLITE_REG 0x1F0202C0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK7_IEH_SATELLITE_STRUCT;

/* LERRUNCMSK8_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042c4)                                                      */
/*      SPRB0 (0x208042c4)                                                      */
/*      SPRHBM (0x208042c4)                                                     */
/*      SPRC0 (0x208042c4)                                                      */
/*      SPRMCC (0x208042c4)                                                     */
/*      SPRUCC (0x208042c4)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* Uncorrectable Error Mask (ERRUNCMSK):This register controls the reporting of individual uncorrectable errors by device to the host bridge via a PCI Express error message. This register also controls the logging of the header. Refer to the PCI Express specifications for details of how the mask bits function. A masked error (respective bit set in the mask register) is not reported to the host bridge by the switch, nor is the header logged (status bits unaffected by the mask bit). There is a mask bit per bit of the Uncorrectable Error Status Register.
*/


#define LERRUNCMSK8_IEH_SATELLITE_REG 0x1F0202C4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 4;

                            /* Bits[3:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 dlpe : 1;

                            /* Bits[4:4], Access Type=RW/P, default=0x00000000*/

                            /* Data Link Protocol Error Mask (DLPE) */
    UINT32 sde : 1;

                            /* Bits[5:5], Access Type=RW/P, default=0x00000000*/

                            /* Surprise Down Error Mask (SDE) */
    UINT32 reserved_1 : 6;

                            /* Bits[11:6], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 pt : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Received Mask (PT) */
    UINT32 fcep : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000000*/

                            /* Flow Control Protocol Error Mask (FCEP) */
    UINT32 ct : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000000*/

                            /* Completion Timeout Mask (CT) */
    UINT32 ca : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000000*/

                            /* Completer Abort Mask (CA) */
    UINT32 uc : 1;

                            /* Bits[16:16], Access Type=RW/P, default=0x00000000*/

                            /* Unexpected Completion Mask (UC) */
    UINT32 ro : 1;

                            /* Bits[17:17], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Overflow Mask (RO) */
    UINT32 mt : 1;

                            /* Bits[18:18], Access Type=RW/P, default=0x00000000*/

                            /* Malformed TLP Mask (MT) */
    UINT32 ee : 1;

                            /* Bits[19:19], Access Type=RW/P, default=0x00000000*/

                            /* ECRC Error Mask (EE) */
    UINT32 ure : 1;

                            /* Bits[20:20], Access Type=RW/P, default=0x00000000*/

                            /* Unsupported Request Error Mask (URE) */
    UINT32 av : 1;

                            /* Bits[21:21], Access Type=RW/P, default=0x00000000*/

                            /* ACS Violation Mask (AV) */
    UINT32 uie : 1;

                            /* Bits[22:22], Access Type=RW/P, default=0x00000000*/

                            /* Uncorrectable Internal Error Mask (UIE) */
    UINT32 mbt : 1;

                            /* Bits[23:23], Access Type=RW/P, default=0x00000000*/

                            /* MC Blocked TLP Mask (MBT) */
    UINT32 aeb : 1;

                            /* Bits[24:24], Access Type=RW/P, default=0x00000000*/

                            /* AtomicOp Egress Blocked Mask (AEB) */
    UINT32 tpbe : 1;

                            /* Bits[25:25], Access Type=RW/P, default=0x00000000*/

                            /* TLP Prefix Blocked Error Mask (TPBE) */
    UINT32 pteb : 1;

                            /* Bits[26:26], Access Type=RW/P, default=0x00000000*/

                            /* Poisoned TLP Egress Blocked Mask (PTEB) */
    UINT32 reserved_2 : 5;

                            /* Bits[31:27], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRUNCMSK8_IEH_SATELLITE_STRUCT;

/* LERRCORSTS0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042c8)                                                      */
/*      SPRB0 (0x208042c8)                                                      */
/*      SPRHBM (0x208042c8)                                                     */
/*      SPRC0 (0x208042c8)                                                      */
/*      SPRMCC (0x208042c8)                                                     */
/*      SPRUCC (0x208042c8)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* Local Uncorrectable Error Status Register
*/


#define LERRCORSTS0_IEH_SATELLITE_REG 0x1F0202C8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 32;

                            /* Bits[31:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS0_IEH_SATELLITE_STRUCT;

/* LERRCORSTS1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042cc)                                                      */
/*      SPRB0 (0x208042cc)                                                      */
/*      SPRHBM (0x208042cc)                                                     */
/*      SPRC0 (0x208042cc)                                                      */
/*      SPRMCC (0x208042cc)                                                     */
/*      SPRUCC (0x208042cc)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS1_IEH_SATELLITE_REG 0x1F0202CC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS1_IEH_SATELLITE_STRUCT;

/* LERRCORSTS2_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042d0)                                                      */
/*      SPRB0 (0x208042d0)                                                      */
/*      SPRHBM (0x208042d0)                                                     */
/*      SPRC0 (0x208042d0)                                                      */
/*      SPRMCC (0x208042d0)                                                     */
/*      SPRUCC (0x208042d0)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS2_IEH_SATELLITE_REG 0x1F0202D0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS2_IEH_SATELLITE_STRUCT;

/* LERRCORSTS3_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042d4)                                                      */
/*      SPRB0 (0x208042d4)                                                      */
/*      SPRHBM (0x208042d4)                                                     */
/*      SPRC0 (0x208042d4)                                                      */
/*      SPRMCC (0x208042d4)                                                     */
/*      SPRUCC (0x208042d4)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS3_IEH_SATELLITE_REG 0x1F0202D4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS3_IEH_SATELLITE_STRUCT;

/* LERRCORSTS4_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042d8)                                                      */
/*      SPRB0 (0x208042d8)                                                      */
/*      SPRHBM (0x208042d8)                                                     */
/*      SPRC0 (0x208042d8)                                                      */
/*      SPRMCC (0x208042d8)                                                     */
/*      SPRUCC (0x208042d8)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS4_IEH_SATELLITE_REG 0x1F0202D8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS4_IEH_SATELLITE_STRUCT;

/* LERRCORSTS5_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042dc)                                                      */
/*      SPRB0 (0x208042dc)                                                      */
/*      SPRHBM (0x208042dc)                                                     */
/*      SPRC0 (0x208042dc)                                                      */
/*      SPRMCC (0x208042dc)                                                     */
/*      SPRUCC (0x208042dc)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS5_IEH_SATELLITE_REG 0x1F0202DC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS5_IEH_SATELLITE_STRUCT;

/* LERRCORSTS6_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042e0)                                                      */
/*      SPRB0 (0x208042e0)                                                      */
/*      SPRHBM (0x208042e0)                                                     */
/*      SPRC0 (0x208042e0)                                                      */
/*      SPRMCC (0x208042e0)                                                     */
/*      SPRUCC (0x208042e0)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS6_IEH_SATELLITE_REG 0x1F0202E0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS6_IEH_SATELLITE_STRUCT;

/* LERRCORSTS7_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042e4)                                                      */
/*      SPRB0 (0x208042e4)                                                      */
/*      SPRHBM (0x208042e4)                                                     */
/*      SPRC0 (0x208042e4)                                                      */
/*      SPRMCC (0x208042e4)                                                     */
/*      SPRUCC (0x208042e4)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS7_IEH_SATELLITE_REG 0x1F0202E4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS7_IEH_SATELLITE_STRUCT;

/* LERRCORSTS8_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042e8)                                                      */
/*      SPRB0 (0x208042e8)                                                      */
/*      SPRHBM (0x208042e8)                                                     */
/*      SPRC0 (0x208042e8)                                                      */
/*      SPRMCC (0x208042e8)                                                     */
/*      SPRUCC (0x208042e8)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register reports the error status of individual correctable error sources on a PCI Express device. An individual error status bit set to 1 indicates that a particular error has occurred. Software can clear the error status by writing a 1 to the respective bit.
*/


#define LERRCORSTS8_IEH_SATELLITE_REG 0x1F0202E8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Receiver Error Status (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad TLP Error Status (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Bad DLLP Error Status (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Status (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Replay Timer Timeout Status (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Advisory Non-Fatal Error Status (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Correctable Internal Error Status (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/1C/V/P, default=0x00000000*/

                            /* Header Log Overflow Status (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORSTS8_IEH_SATELLITE_STRUCT;

/* LERRCORMSK0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042ec)                                                      */
/*      SPRB0 (0x208042ec)                                                      */
/*      SPRHBM (0x208042ec)                                                     */
/*      SPRC0 (0x208042ec)                                                      */
/*      SPRMCC (0x208042ec)                                                     */
/*      SPRUCC (0x208042ec)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* Local Uncorrectable Error Status Register
*/


#define LERRCORMSK0_IEH_SATELLITE_REG 0x1F0202EC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 reserved : 32;

                            /* Bits[31:0], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK0_IEH_SATELLITE_STRUCT;

/* LERRCORMSK1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042f0)                                                      */
/*      SPRB0 (0x208042f0)                                                      */
/*      SPRHBM (0x208042f0)                                                     */
/*      SPRC0 (0x208042f0)                                                      */
/*      SPRMCC (0x208042f0)                                                     */
/*      SPRUCC (0x208042f0)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK1_IEH_SATELLITE_REG 0x1F0202F0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK1_IEH_SATELLITE_STRUCT;

/* LERRCORMSK2_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042f4)                                                      */
/*      SPRB0 (0x208042f4)                                                      */
/*      SPRHBM (0x208042f4)                                                     */
/*      SPRC0 (0x208042f4)                                                      */
/*      SPRMCC (0x208042f4)                                                     */
/*      SPRUCC (0x208042f4)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK2_IEH_SATELLITE_REG 0x1F0202F4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK2_IEH_SATELLITE_STRUCT;

/* LERRCORMSK3_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042f8)                                                      */
/*      SPRB0 (0x208042f8)                                                      */
/*      SPRHBM (0x208042f8)                                                     */
/*      SPRC0 (0x208042f8)                                                      */
/*      SPRMCC (0x208042f8)                                                     */
/*      SPRUCC (0x208042f8)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK3_IEH_SATELLITE_REG 0x1F0202F8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK3_IEH_SATELLITE_STRUCT;

/* LERRCORMSK4_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208042fc)                                                      */
/*      SPRB0 (0x208042fc)                                                      */
/*      SPRHBM (0x208042fc)                                                     */
/*      SPRC0 (0x208042fc)                                                      */
/*      SPRMCC (0x208042fc)                                                     */
/*      SPRUCC (0x208042fc)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK4_IEH_SATELLITE_REG 0x1F0202FC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK4_IEH_SATELLITE_STRUCT;

/* LERRCORMSK5_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804300)                                                      */
/*      SPRB0 (0x20804300)                                                      */
/*      SPRHBM (0x20804300)                                                     */
/*      SPRC0 (0x20804300)                                                      */
/*      SPRMCC (0x20804300)                                                     */
/*      SPRUCC (0x20804300)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK5_IEH_SATELLITE_REG 0x1F020300

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK5_IEH_SATELLITE_STRUCT;

/* LERRCORMSK6_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804304)                                                      */
/*      SPRB0 (0x20804304)                                                      */
/*      SPRHBM (0x20804304)                                                     */
/*      SPRC0 (0x20804304)                                                      */
/*      SPRMCC (0x20804304)                                                     */
/*      SPRUCC (0x20804304)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK6_IEH_SATELLITE_REG 0x1F020304

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK6_IEH_SATELLITE_STRUCT;

/* LERRCORMSK7_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x20804308)                                                      */
/*      SPRB0 (0x20804308)                                                      */
/*      SPRHBM (0x20804308)                                                     */
/*      SPRC0 (0x20804308)                                                      */
/*      SPRMCC (0x20804308)                                                     */
/*      SPRUCC (0x20804308)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK7_IEH_SATELLITE_REG 0x1F020308

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK7_IEH_SATELLITE_STRUCT;

/* LERRCORMSK8_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x2080430c)                                                      */
/*      SPRB0 (0x2080430c)                                                      */
/*      SPRHBM (0x2080430c)                                                     */
/*      SPRC0 (0x2080430c)                                                      */
/*      SPRMCC (0x2080430c)                                                     */
/*      SPRUCC (0x2080430c)                                                     */
/* Register default value on SPRA0: 0x0000E000                                  */
/* Register default value on SPRB0: 0x0000E000                                  */
/* Register default value on SPRHBM: 0x0000E000                                 */
/* Register default value on SPRC0: 0x0000E000                                  */
/* Register default value on SPRMCC: 0x0000E000                                 */
/* Register default value on SPRUCC: 0x0000E000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register controls the reporting of individual correctable errors via ERR_COR message. A masked error (respective bit set in mask register) is not reported to the host bridge by the switch. There is a mask bit corresponding to every bit in the Correctable Error Status Register.
*/


#define LERRCORMSK8_IEH_SATELLITE_REG 0x1F02030C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 re : 1;

                            /* Bits[0:0], Access Type=RW/P, default=0x00000000*/

                            /* Receiver Error Mask (RE) */
    UINT32 reserved : 5;

                            /* Bits[5:1], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 btple : 1;

                            /* Bits[6:6], Access Type=RW/P, default=0x00000000*/

                            /* Bad TLP Error Mask (BTLPE) */
    UINT32 bdllpe : 1;

                            /* Bits[7:7], Access Type=RW/P, default=0x00000000*/

                            /* Bad DLLP Error Mask (BDLLPE) */
    UINT32 rnre : 1;

                            /* Bits[8:8], Access Type=RW/P, default=0x00000000*/

                            /* REPLAY_NUM Rollover Mask (RNRE) */
    UINT32 reserved_1 : 3;

                            /* Bits[11:9], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rtte : 1;

                            /* Bits[12:12], Access Type=RW/P, default=0x00000000*/

                            /* Replay Timer Timeout Mask (RTTE) */
    UINT32 anfe : 1;

                            /* Bits[13:13], Access Type=RW/P, default=0x00000001*/

                            /* Advisory Non-Fatal Error Mask (ANFE) */
    UINT32 cie : 1;

                            /* Bits[14:14], Access Type=RW/P, default=0x00000001*/

                            /* Correctable Internal Error Mask (CIE) */
    UINT32 hloe : 1;

                            /* Bits[15:15], Access Type=RW/P, default=0x00000001*/

                            /* Header Log Overflow Mask (HLOE) */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} LERRCORMSK8_IEH_SATELLITE_STRUCT;

/* REG_LERRUNCFEP_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804310)                                                      */
/*      SPRB0 (0x20804310)                                                      */
/*      SPRHBM (0x20804310)                                                     */
/*      SPRC0 (0x20804310)                                                      */
/*      SPRMCC (0x20804310)                                                     */
/*      SPRUCC (0x20804310)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* Local Uncorrectable Error First Error Pointer 
*/


#define REG_LERRUNCFEP_IEH_SATELLITE_REG 0x1F020310

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 fep : 5;

                            /* Bits[4:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               First Error Pointer: Points to the particular
                               uncorrectable error type
                            */
    UINT32 fes : 5;

                            /* Bits[9:5], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               First Error Source: First error among 8 possible
                               sources
                            */
    UINT32 reserved : 6;

                            /* Bits[15:10], Access Type=RO, default=0x00000000*/

                            /* Reserved */
    UINT32 rsvd : 16;

                            /* Bits[31:16], Access Type=RO, default=None*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} REG_LERRUNCFEP_IEH_SATELLITE_STRUCT;

/* REG_LERRHDRLOG1_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x20804314)                                                      */
/*      SPRB0 (0x20804314)                                                      */
/*      SPRHBM (0x20804314)                                                     */
/*      SPRC0 (0x20804314)                                                      */
/*      SPRMCC (0x20804314)                                                     */
/*      SPRUCC (0x20804314)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRHDRLOG1_IEH_SATELLITE_REG 0x1F020314

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRHDRLOG1_IEH_SATELLITE_STRUCT;

/* REG_LERRHDRLOG2_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x20804318)                                                      */
/*      SPRB0 (0x20804318)                                                      */
/*      SPRHBM (0x20804318)                                                     */
/*      SPRC0 (0x20804318)                                                      */
/*      SPRMCC (0x20804318)                                                     */
/*      SPRUCC (0x20804318)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRHDRLOG2_IEH_SATELLITE_REG 0x1F020318

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRHDRLOG2_IEH_SATELLITE_STRUCT;

/* REG_LERRHDRLOG3_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x2080431c)                                                      */
/*      SPRB0 (0x2080431c)                                                      */
/*      SPRHBM (0x2080431c)                                                     */
/*      SPRC0 (0x2080431c)                                                      */
/*      SPRMCC (0x2080431c)                                                     */
/*      SPRUCC (0x2080431c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRHDRLOG3_IEH_SATELLITE_REG 0x1F02031C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRHDRLOG3_IEH_SATELLITE_STRUCT;

/* REG_LERRHDRLOG4_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x20804320)                                                      */
/*      SPRB0 (0x20804320)                                                      */
/*      SPRHBM (0x20804320)                                                     */
/*      SPRC0 (0x20804320)                                                      */
/*      SPRMCC (0x20804320)                                                     */
/*      SPRUCC (0x20804320)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRHDRLOG4_IEH_SATELLITE_REG 0x1F020320

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 tlphdrlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRHDRLOG4_IEH_SATELLITE_STRUCT;

/* REG_LERRPFXLOG1_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x20804324)                                                      */
/*      SPRB0 (0x20804324)                                                      */
/*      SPRHBM (0x20804324)                                                     */
/*      SPRC0 (0x20804324)                                                      */
/*      SPRMCC (0x20804324)                                                     */
/*      SPRUCC (0x20804324)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRPFXLOG1_IEH_SATELLITE_REG 0x1F020324

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 lerrpfxlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRPFXLOG1_IEH_SATELLITE_STRUCT;

/* REG_LERRPFXLOG2_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x20804328)                                                      */
/*      SPRB0 (0x20804328)                                                      */
/*      SPRHBM (0x20804328)                                                     */
/*      SPRC0 (0x20804328)                                                      */
/*      SPRMCC (0x20804328)                                                     */
/*      SPRUCC (0x20804328)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRPFXLOG2_IEH_SATELLITE_REG 0x1F020328

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 lerrpfxlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRPFXLOG2_IEH_SATELLITE_STRUCT;

/* REG_LERRPFXLOG3_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x2080432c)                                                      */
/*      SPRB0 (0x2080432c)                                                      */
/*      SPRHBM (0x2080432c)                                                     */
/*      SPRC0 (0x2080432c)                                                      */
/*      SPRMCC (0x2080432c)                                                     */
/*      SPRUCC (0x2080432c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRPFXLOG3_IEH_SATELLITE_REG 0x1F02032C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 lerrpfxlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRPFXLOG3_IEH_SATELLITE_STRUCT;

/* REG_LERRPFXLOG4_IEH_SATELLITE_REG supported on:                              */
/*      SPRA0 (0x20804330)                                                      */
/*      SPRB0 (0x20804330)                                                      */
/*      SPRHBM (0x20804330)                                                     */
/*      SPRC0 (0x20804330)                                                      */
/*      SPRMCC (0x20804330)                                                     */
/*      SPRUCC (0x20804330)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: BTSMM_W                                          */
/* SPRB0 Security PolicyGroup: BTSMM_W                                          */
/* SPRHBM Security PolicyGroup: BTSMM_W                                         */
/* SPRC0 Security PolicyGroup: BTSMM_W                                          */
/* SPRMCC Security PolicyGroup: BTSMM_W                                         */
/* SPRUCC Security PolicyGroup: BTSMM_W                                         */
/* This Header Log register stores the header information associated with the first uncorrectable error.
*/


#define REG_LERRPFXLOG4_IEH_SATELLITE_REG 0x1F020330

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 lerrpfxlog : 32;

                            /* Bits[31:0], Access Type=RO/V/P, default=0x00000000*/

                            /*
                               As soon as an error is logged in this register,
                               it remains locked for further error-logging
                               until the software clears the status bit that
                               caused the header log (in other words, until the
                               error pointer is re-armed for logging again).
                            */

  } Bits;
  UINT32 Data;

} REG_LERRPFXLOG4_IEH_SATELLITE_STRUCT;

/* REG_LERRCORCNT_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804334)                                                      */
/*      SPRB0 (0x20804334)                                                      */
/*      SPRHBM (0x20804334)                                                     */
/*      SPRC0 (0x20804334)                                                      */
/*      SPRMCC (0x20804334)                                                     */
/*      SPRUCC (0x20804334)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* 0x2A8 This register selects which error types associated with the reporting of IEH, P2SB and PSF Correctable errors that participate in error counting.
*/


#define REG_LERRCORCNT_IEH_SATELLITE_REG 0x1F020334

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 errcnt : 32;

                            /* Bits[31:0], Access Type=RW/V/P, default=0x00000000*/

                            /* Error Accumulator */

  } Bits;
  UINT32 Data;

} REG_LERRCORCNT_IEH_SATELLITE_STRUCT;






/* G_AGENT_SRCID_06_IEH_SATELLITE_REG supported on:                             */
/*      SPRA0 (0x20804614)                                                      */
/*      SPRB0 (0x20804614)                                                      */
/*      SPRHBM (0x20804614)                                                     */
/*      SPRC0 (0x20804614)                                                      */
/*      SPRMCC (0x20804614)                                                     */
/*      SPRUCC (0x20804614)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* For wave3, all the IEH straps will be associated with a register. 
*/


#define G_AGENT_SRCID_06_IEH_SATELLITE_REG 0x1F020614

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 portid : 16;

                            /* Bits[15:0], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               This field contains the PortID value driven in
                               the g_agent_srcid_06 strap
                            */
    UINT32 reserved : 16;

                            /* Bits[31:16], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} G_AGENT_SRCID_06_IEH_SATELLITE_STRUCT;

/* G_AGENT_SRCID_07_IEH_SATELLITE_REG supported on:                             */
/*      SPRA0 (0x20804618)                                                      */
/*      SPRB0 (0x20804618)                                                      */
/*      SPRHBM (0x20804618)                                                     */
/*      SPRC0 (0x20804618)                                                      */
/*      SPRMCC (0x20804618)                                                     */
/*      SPRUCC (0x20804618)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* For wave3, all the IEH straps will be associated with a register. 
*/


#define G_AGENT_SRCID_07_IEH_SATELLITE_REG 0x1F020618

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 portid : 16;

                            /* Bits[15:0], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               This field contains the PortID value driven in
                               the g_agent_srcid_07 strap
                            */
    UINT32 reserved : 16;

                            /* Bits[31:16], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} G_AGENT_SRCID_07_IEH_SATELLITE_STRUCT;

/* G_AGENT_SRCID_08_IEH_SATELLITE_REG supported on:                             */
/*      SPRA0 (0x2080461c)                                                      */
/*      SPRB0 (0x2080461c)                                                      */
/*      SPRHBM (0x2080461c)                                                     */
/*      SPRC0 (0x2080461c)                                                      */
/*      SPRMCC (0x2080461c)                                                     */
/*      SPRUCC (0x2080461c)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* For wave3, all the IEH straps will be associated with a register. 
*/


#define G_AGENT_SRCID_08_IEH_SATELLITE_REG 0x1F02061C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 portid : 16;

                            /* Bits[15:0], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               This field contains the PortID value driven in
                               the g_agent_srcid_08 strap
                            */
    UINT32 reserved : 16;

                            /* Bits[31:16], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} G_AGENT_SRCID_08_IEH_SATELLITE_STRUCT;

/* G_AGENT_SRCID_09_IEH_SATELLITE_REG supported on:                             */
/*      SPRA0 (0x20804620)                                                      */
/*      SPRB0 (0x20804620)                                                      */
/*      SPRHBM (0x20804620)                                                     */
/*      SPRC0 (0x20804620)                                                      */
/*      SPRMCC (0x20804620)                                                     */
/*      SPRUCC (0x20804620)                                                     */
/* Register default value on SPRA0: 0x00000000                                  */
/* Register default value on SPRB0: 0x00000000                                  */
/* Register default value on SPRHBM: 0x00000000                                 */
/* Register default value on SPRC0: 0x00000000                                  */
/* Register default value on SPRMCC: 0x00000000                                 */
/* Register default value on SPRUCC: 0x00000000                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* For wave3, all the IEH straps will be associated with a register. 
*/


#define G_AGENT_SRCID_09_IEH_SATELLITE_REG 0x1F020620

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 portid : 16;

                            /* Bits[15:0], Access Type=RW/V/P, default=0x00000000*/

                            /*
                               This field contains the PortID value driven in
                               the g_agent_srcid_09 strap
                            */
    UINT32 reserved : 16;

                            /* Bits[31:16], Access Type=RO, default=0x00000000*/

                            /* Reserved */

  } Bits;
  UINT32 Data;

} G_AGENT_SRCID_09_IEH_SATELLITE_STRUCT;





































/* COR_CNT_CP_N0_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804780)                                                      */
/*      SPRB0 (0x20804780)                                                      */
/*      SPRHBM (0x20804780)                                                     */
/*      SPRC0 (0x20804780)                                                      */
/*      SPRMCC (0x20804780)                                                     */
/*      SPRUCC (0x20804780)                                                     */
/* Register default value on SPRA0: 0x0100021E                                  */
/* Register default value on SPRB0: 0x0100021E                                  */
/* Register default value on SPRHBM: 0x0100021E                                 */
/* Register default value on SPRC0: 0x0100021E                                  */
/* Register default value on SPRMCC: 0x0100021E                                 */
/* Register default value on SPRUCC: 0x0100021E                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register configures the write access to RAC, WAC and CP registers for COR_CNT security policy group. This policy group is expected to be used for registers that log corrected error counts. BIOS is in the policy group for this register (BOOT and SMM). Bits corresponding to trusted sources (pcode, ucode, Intel Dfx) are made read-only in the CP/RAC/WAC to prevent BIOS from accidentally/maliciously removing access to the trusted sources
*/


#define COR_CNT_CP_N0_IEH_SATELLITE_REG 0x1F020780

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cor_cnt_ctrl_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_1 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} COR_CNT_CP_N0_IEH_SATELLITE_STRUCT;

/* COR_CNT_CP_N1_IEH_SATELLITE_REG supported on:                                */
/*      SPRA0 (0x20804784)                                                      */
/*      SPRB0 (0x20804784)                                                      */
/*      SPRHBM (0x20804784)                                                     */
/*      SPRC0 (0x20804784)                                                      */
/*      SPRMCC (0x20804784)                                                     */
/*      SPRUCC (0x20804784)                                                     */
/* Register default value on SPRA0: 0x00000400                                  */
/* Register default value on SPRB0: 0x00000400                                  */
/* Register default value on SPRHBM: 0x00000400                                 */
/* Register default value on SPRC0: 0x00000400                                  */
/* Register default value on SPRMCC: 0x00000400                                 */
/* Register default value on SPRUCC: 0x00000400                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register configures the write access to RAC, WAC and CP registers for COR_CNT security policy group. This policy group is expected to be used for registers that log corrected error counts. BIOS is in the policy group for this register (BOOT and SMM). Bits corresponding to trusted sources (pcode, ucode, Intel Dfx) are made read-only in the CP/RAC/WAC to prevent BIOS from accidentally/maliciously removing access to the trusted sources
*/


#define COR_CNT_CP_N1_IEH_SATELLITE_REG 0x1F020784

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cor_cnt_ctrl_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 cor_cnt_ctrl_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to COR_CNT WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} COR_CNT_CP_N1_IEH_SATELLITE_STRUCT;

/* COR_CNT_WAC_N0_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804788)                                                      */
/*      SPRB0 (0x20804788)                                                      */
/*      SPRHBM (0x20804788)                                                     */
/*      SPRC0 (0x20804788)                                                      */
/*      SPRMCC (0x20804788)                                                     */
/*      SPRUCC (0x20804788)                                                     */
/* Register default value on SPRA0: 0x0300021F                                  */
/* Register default value on SPRB0: 0x0300021F                                  */
/* Register default value on SPRHBM: 0x0300021F                                 */
/* Register default value on SPRC0: 0x0300021F                                  */
/* Register default value on SPRMCC: 0x0300021F                                 */
/* Register default value on SPRUCC: 0x0300021F                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register configures the write access to registers in COR_CNT security policy group. SAI bits corresponding to pcode/ucode/Intel Dfx are read only to prevent BIOS from removing access for them.
*/


#define COR_CNT_WAC_N0_IEH_SATELLITE_REG 0x1F020788

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cor_cnt_sai_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_1 : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} COR_CNT_WAC_N0_IEH_SATELLITE_STRUCT;

/* COR_CNT_WAC_N1_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x2080478c)                                                      */
/*      SPRB0 (0x2080478c)                                                      */
/*      SPRHBM (0x2080478c)                                                     */
/*      SPRC0 (0x2080478c)                                                      */
/*      SPRMCC (0x2080478c)                                                     */
/*      SPRUCC (0x2080478c)                                                     */
/* Register default value on SPRA0: 0x20000C00                                  */
/* Register default value on SPRB0: 0x20000C00                                  */
/* Register default value on SPRHBM: 0x20000C00                                 */
/* Register default value on SPRC0: 0x20000C00                                  */
/* Register default value on SPRMCC: 0x20000C00                                 */
/* Register default value on SPRUCC: 0x20000C00                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register configures the write access to registers in COR_CNT security policy group. SAI bits corresponding to pcode/ucode/Intel Dfx are read only to prevent BIOS from removing access for them.
*/


#define COR_CNT_WAC_N1_IEH_SATELLITE_REG 0x1F02078C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cor_cnt_sai_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} COR_CNT_WAC_N1_IEH_SATELLITE_STRUCT;

/* COR_CNT_RAC_N0_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804790)                                                      */
/*      SPRB0 (0x20804790)                                                      */
/*      SPRHBM (0x20804790)                                                     */
/*      SPRC0 (0x20804790)                                                      */
/*      SPRMCC (0x20804790)                                                     */
/*      SPRUCC (0x20804790)                                                     */
/* Register default value on SPRA0: 0x0300021F                                  */
/* Register default value on SPRB0: 0x0300021F                                  */
/* Register default value on SPRHBM: 0x0300021F                                 */
/* Register default value on SPRC0: 0x0300021F                                  */
/* Register default value on SPRMCC: 0x0300021F                                 */
/* Register default value on SPRUCC: 0x0300021F                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register configures the read access to registers in COR_CNT security policy group. That is, read access is permitted to all IPs for registers in this group. SAI bits corresponding to pcode/ucode/Intel Dfx are read only to prevent BIOS from removing access for them.
*/


#define COR_CNT_RAC_N0_IEH_SATELLITE_REG 0x1F020790

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cor_cnt_sai_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_1 : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} COR_CNT_RAC_N0_IEH_SATELLITE_STRUCT;

/* COR_CNT_RAC_N1_IEH_SATELLITE_REG supported on:                               */
/*      SPRA0 (0x20804794)                                                      */
/*      SPRB0 (0x20804794)                                                      */
/*      SPRHBM (0x20804794)                                                     */
/*      SPRC0 (0x20804794)                                                      */
/*      SPRMCC (0x20804794)                                                     */
/*      SPRUCC (0x20804794)                                                     */
/* Register default value on SPRA0: 0x20000D00                                  */
/* Register default value on SPRB0: 0x20000D00                                  */
/* Register default value on SPRHBM: 0x20000D00                                 */
/* Register default value on SPRC0: 0x20000D00                                  */
/* Register default value on SPRMCC: 0x20000D00                                 */
/* Register default value on SPRUCC: 0x20000D00                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: COR_CNT                                          */
/* SPRB0 Security PolicyGroup: COR_CNT                                          */
/* SPRHBM Security PolicyGroup: COR_CNT                                         */
/* SPRC0 Security PolicyGroup: COR_CNT                                          */
/* SPRMCC Security PolicyGroup: COR_CNT                                         */
/* SPRUCC Security PolicyGroup: COR_CNT                                         */
/* This register configures the read access to registers in COR_CNT security policy group. That is, read access is permitted to all IPs for registers in this group. SAI bits corresponding to pcode/ucode/Intel Dfx are read only to prevent BIOS from removing access for them.
*/


#define COR_CNT_RAC_N1_IEH_SATELLITE_REG 0x1F020794

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 cor_cnt_sai_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 cor_cnt_sai_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} COR_CNT_RAC_N1_IEH_SATELLITE_STRUCT;

/* DFX1_CP_N0_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x20804798)                                                      */
/*      SPRB0 (0x20804798)                                                      */
/*      SPRHBM (0x20804798)                                                     */
/*      SPRC0 (0x20804798)                                                      */
/*      SPRMCC (0x20804798)                                                     */
/*      SPRUCC (0x20804798)                                                     */
/* Register default value on SPRA0: 0x01000218                                  */
/* Register default value on SPRB0: 0x01000218                                  */
/* Register default value on SPRHBM: 0x01000218                                 */
/* Register default value on SPRC0: 0x01000218                                  */
/* Register default value on SPRMCC: 0x01000218                                 */
/* Register default value on SPRUCC: 0x01000218                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* DFX1: Registers which are only used for debug or special test modes. DFX1 registers maybe updated by BIOS at boot time. Boot BIOS may open up DFX1 to HOSTIA_POSTBOOT_SAI or HOSTIA_SMM SAI for bug workarounds or debug (MVE).
*/


#define DFX1_CP_N0_IEH_SATELLITE_REG 0x1F020798

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 dfx1_ctrl_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_1 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} DFX1_CP_N0_IEH_SATELLITE_STRUCT;

/* DFX1_CP_N1_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x2080479c)                                                      */
/*      SPRB0 (0x2080479c)                                                      */
/*      SPRHBM (0x2080479c)                                                     */
/*      SPRC0 (0x2080479c)                                                      */
/*      SPRMCC (0x2080479c)                                                     */
/*      SPRUCC (0x2080479c)                                                     */
/* Register default value on SPRA0: 0x00000400                                  */
/* Register default value on SPRB0: 0x00000400                                  */
/* Register default value on SPRHBM: 0x00000400                                 */
/* Register default value on SPRC0: 0x00000400                                  */
/* Register default value on SPRMCC: 0x00000400                                 */
/* Register default value on SPRUCC: 0x00000400                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* DFX1: Registers which are only used for debug or special test modes. DFX1 registers maybe updated by BIOS at boot time. Boot BIOS may open up DFX1 to HOSTIA_POSTBOOT_SAI or HOSTIA_SMM SAI for bug workarounds or debug (MVE).
*/


#define DFX1_CP_N1_IEH_SATELLITE_REG 0x1F02079C

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 dfx1_ctrl_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 dfx1_ctrl_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to DFX1 WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} DFX1_CP_N1_IEH_SATELLITE_STRUCT;

/* DFX1_WAC_N0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047a0)                                                      */
/*      SPRB0 (0x208047a0)                                                      */
/*      SPRHBM (0x208047a0)                                                     */
/*      SPRC0 (0x208047a0)                                                      */
/*      SPRMCC (0x208047a0)                                                     */
/*      SPRUCC (0x208047a0)                                                     */
/* Register default value on SPRA0: 0x0100020A                                  */
/* Register default value on SPRB0: 0x0100020A                                  */
/* Register default value on SPRHBM: 0x0100020A                                 */
/* Register default value on SPRC0: 0x0100020A                                  */
/* Register default value on SPRMCC: 0x0100020A                                 */
/* Register default value on SPRUCC: 0x0100020A                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* DFX1: Registers which are only used for debug or special test modes. DFX1 registers maybe updated by BIOS at boot time. Boot BIOS may open up DFX1 to HOSTIA_POSTBOOT_SAI or HOSTIA_SMM SAI for bug workarounds or debug (MVE).
*/


#define DFX1_WAC_N0_IEH_SATELLITE_REG 0x1F0207A0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 dfx1_sai_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_1 : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} DFX1_WAC_N0_IEH_SATELLITE_STRUCT;

/* DFX1_WAC_N1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047a4)                                                      */
/*      SPRB0 (0x208047a4)                                                      */
/*      SPRHBM (0x208047a4)                                                     */
/*      SPRC0 (0x208047a4)                                                      */
/*      SPRMCC (0x208047a4)                                                     */
/*      SPRUCC (0x208047a4)                                                     */
/* Register default value on SPRA0: 0x20000400                                  */
/* Register default value on SPRB0: 0x20000400                                  */
/* Register default value on SPRHBM: 0x20000400                                 */
/* Register default value on SPRC0: 0x20000400                                  */
/* Register default value on SPRMCC: 0x20000400                                 */
/* Register default value on SPRUCC: 0x20000400                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* DFX1: Registers which are only used for debug or special test modes. DFX1 registers maybe updated by BIOS at boot time. Boot BIOS may open up DFX1 to HOSTIA_POSTBOOT_SAI or HOSTIA_SMM SAI for bug workarounds or debug (MVE).
*/


#define DFX1_WAC_N1_IEH_SATELLITE_REG 0x1F0207A4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 dfx1_sai_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} DFX1_WAC_N1_IEH_SATELLITE_STRUCT;

/* DFX1_RAC_N0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047a8)                                                      */
/*      SPRB0 (0x208047a8)                                                      */
/*      SPRHBM (0x208047a8)                                                     */
/*      SPRC0 (0x208047a8)                                                      */
/*      SPRMCC (0x208047a8)                                                     */
/*      SPRUCC (0x208047a8)                                                     */
/* Register default value on SPRA0: 0x0100020A                                  */
/* Register default value on SPRB0: 0x0100020A                                  */
/* Register default value on SPRHBM: 0x0100020A                                 */
/* Register default value on SPRC0: 0x0100020A                                  */
/* Register default value on SPRMCC: 0x0100020A                                 */
/* Register default value on SPRUCC: 0x0100020A                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* DFX1: Registers which are only used for debug or special test modes. DFX1 registers maybe updated by BIOS at boot time. Boot BIOS may open up DFX1 to HOSTIA_POSTBOOT_SAI or HOSTIA_SMM SAI for bug workarounds or debug (MVE).
*/


#define DFX1_RAC_N0_IEH_SATELLITE_REG 0x1F0207A8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 dfx1_sai_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_1 : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 dfx1_sai_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 dfx1_sai_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 dfx1_sai_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 dfx1_sai_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} DFX1_RAC_N0_IEH_SATELLITE_STRUCT;

/* DFX1_RAC_N1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047ac)                                                      */
/*      SPRB0 (0x208047ac)                                                      */
/*      SPRHBM (0x208047ac)                                                     */
/*      SPRC0 (0x208047ac)                                                      */
/*      SPRMCC (0x208047ac)                                                     */
/*      SPRUCC (0x208047ac)                                                     */
/* Register default value on SPRA0: 0x20000500                                  */
/* Register default value on SPRB0: 0x20000500                                  */
/* Register default value on SPRHBM: 0x20000500                                 */
/* Register default value on SPRC0: 0x20000500                                  */
/* Register default value on SPRMCC: 0x20000500                                 */
/* Register default value on SPRUCC: 0x20000500                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: DFX1                                             */
/* SPRB0 Security PolicyGroup: DFX1                                             */
/* SPRHBM Security PolicyGroup: DFX1                                            */
/* SPRC0 Security PolicyGroup: DFX1                                             */
/* SPRMCC Security PolicyGroup: DFX1                                            */
/* SPRUCC Security PolicyGroup: DFX1                                            */
/* DFX1: Registers which are only used for debug or special test modes. DFX1 registers maybe updated by BIOS at boot time. Boot BIOS may open up DFX1 to HOSTIA_POSTBOOT_SAI or HOSTIA_SMM SAI for bug workarounds or debug (MVE).
*/


#define DFX1_RAC_N1_IEH_SATELLITE_REG 0x1F0207AC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 dfx1_sai_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in COR_CNT
                               policy group, based on the value from each
                               agent's 6bit SAI field.
                            */
    UINT32 dfx1_sai_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 dfx1_sai_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in DFX1 policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} DFX1_RAC_N1_IEH_SATELLITE_STRUCT;

/* OS_W_CP_N0_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x208047b0)                                                      */
/*      SPRB0 (0x208047b0)                                                      */
/*      SPRHBM (0x208047b0)                                                     */
/*      SPRC0 (0x208047b0)                                                      */
/*      SPRMCC (0x208047b0)                                                     */
/*      SPRUCC (0x208047b0)                                                     */
/* Register default value on SPRA0: 0x01000218                                  */
/* Register default value on SPRB0: 0x01000218                                  */
/* Register default value on SPRHBM: 0x01000218                                 */
/* Register default value on SPRC0: 0x01000218                                  */
/* Register default value on SPRMCC: 0x01000218                                 */
/* Register default value on SPRUCC: 0x01000218                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* OS_W: Registers which are owned by the OS or a Device Driver. (E.g. PCIe Spec defined RW registers.)
*/


#define OS_W_CP_N0_IEH_SATELLITE_REG 0x1F0207B0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 os_w_ctrl_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_1 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} OS_W_CP_N0_IEH_SATELLITE_STRUCT;

/* OS_W_CP_N1_IEH_SATELLITE_REG supported on:                                   */
/*      SPRA0 (0x208047b4)                                                      */
/*      SPRB0 (0x208047b4)                                                      */
/*      SPRHBM (0x208047b4)                                                     */
/*      SPRC0 (0x208047b4)                                                      */
/*      SPRMCC (0x208047b4)                                                     */
/*      SPRUCC (0x208047b4)                                                     */
/* Register default value on SPRA0: 0x00000400                                  */
/* Register default value on SPRB0: 0x00000400                                  */
/* Register default value on SPRHBM: 0x00000400                                 */
/* Register default value on SPRC0: 0x00000400                                  */
/* Register default value on SPRMCC: 0x00000400                                 */
/* Register default value on SPRUCC: 0x00000400                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* OS_W: Registers which are owned by the OS or a Device Driver. (E.g. PCIe Spec defined RW registers.)
*/


#define OS_W_CP_N1_IEH_SATELLITE_REG 0x1F0207B4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 os_w_ctrl_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */
    UINT32 os_w_ctrl_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to OS_W WAC, RAC and CP
                               registers, based on the value from each agent's
                               6bit SAI field.
                            */

  } Bits;
  UINT32 Data;

} OS_W_CP_N1_IEH_SATELLITE_STRUCT;

/* OS_W_WAC_N0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047b8)                                                      */
/*      SPRB0 (0x208047b8)                                                      */
/*      SPRHBM (0x208047b8)                                                     */
/*      SPRC0 (0x208047b8)                                                      */
/*      SPRMCC (0x208047b8)                                                     */
/*      SPRUCC (0x208047b8)                                                     */
/* Register default value on SPRA0: 0x0300021F                                  */
/* Register default value on SPRB0: 0x0300021F                                  */
/* Register default value on SPRHBM: 0x0300021F                                 */
/* Register default value on SPRC0: 0x0300021F                                  */
/* Register default value on SPRMCC: 0x0300021F                                 */
/* Register default value on SPRUCC: 0x0300021F                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* OS_W: Registers which are owned by the OS or a Device Driver. (E.g. PCIe Spec defined RW registers.)
*/


#define OS_W_WAC_N0_IEH_SATELLITE_REG 0x1F0207B8

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 os_w_sai_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_1 : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} OS_W_WAC_N0_IEH_SATELLITE_STRUCT;

/* OS_W_WAC_N1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047bc)                                                      */
/*      SPRB0 (0x208047bc)                                                      */
/*      SPRHBM (0x208047bc)                                                     */
/*      SPRC0 (0x208047bc)                                                      */
/*      SPRMCC (0x208047bc)                                                     */
/*      SPRUCC (0x208047bc)                                                     */
/* Register default value on SPRA0: 0x20000C00                                  */
/* Register default value on SPRB0: 0x20000C00                                  */
/* Register default value on SPRHBM: 0x20000C00                                 */
/* Register default value on SPRC0: 0x20000C00                                  */
/* Register default value on SPRMCC: 0x20000C00                                 */
/* Register default value on SPRUCC: 0x20000C00                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* OS_W: Registers which are owned by the OS or a Device Driver. (E.g. PCIe Spec defined RW registers.)
*/


#define OS_W_WAC_N1_IEH_SATELLITE_REG 0x1F0207BC

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 os_w_sai_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000000*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed write access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} OS_W_WAC_N1_IEH_SATELLITE_STRUCT;

/* OS_W_RAC_N0_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047c0)                                                      */
/*      SPRB0 (0x208047c0)                                                      */
/*      SPRHBM (0x208047c0)                                                     */
/*      SPRC0 (0x208047c0)                                                      */
/*      SPRMCC (0x208047c0)                                                     */
/*      SPRUCC (0x208047c0)                                                     */
/* Register default value on SPRA0: 0xFFFFFFFF                                  */
/* Register default value on SPRB0: 0xFFFFFFFF                                  */
/* Register default value on SPRHBM: 0xFFFFFFFF                                 */
/* Register default value on SPRC0: 0xFFFFFFFF                                  */
/* Register default value on SPRMCC: 0xFFFFFFFF                                 */
/* Register default value on SPRUCC: 0xFFFFFFFF                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* OS_W: Registers which are owned by the OS or a Device Driver. (E.g. PCIe Spec defined RW registers.)
*/


#define OS_W_RAC_N0_IEH_SATELLITE_REG 0x1F0207C0

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 os_w_sai_pol_0 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_1 : 1;

                            /* Bits[1:1], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_2 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_3 : 1;

                            /* Bits[3:3], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_4 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_5 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_6 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_7 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_8 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_9 : 1;

                            /* Bits[9:9], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_10 : 1;

                            /* Bits[10:10], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_11 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_12 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_13 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_14 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_15 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_16 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_17 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_18 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_19 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_20 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_21 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_22 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_23 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_24 : 1;

                            /* Bits[24:24], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_25 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_26 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_27 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_28 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_29 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_30 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_31 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} OS_W_RAC_N0_IEH_SATELLITE_STRUCT;

/* OS_W_RAC_N1_IEH_SATELLITE_REG supported on:                                  */
/*      SPRA0 (0x208047c4)                                                      */
/*      SPRB0 (0x208047c4)                                                      */
/*      SPRHBM (0x208047c4)                                                     */
/*      SPRC0 (0x208047c4)                                                      */
/*      SPRMCC (0x208047c4)                                                     */
/*      SPRUCC (0x208047c4)                                                     */
/* Register default value on SPRA0: 0xFFFFFFFF                                  */
/* Register default value on SPRB0: 0xFFFFFFFF                                  */
/* Register default value on SPRHBM: 0xFFFFFFFF                                 */
/* Register default value on SPRC0: 0xFFFFFFFF                                  */
/* Register default value on SPRMCC: 0xFFFFFFFF                                 */
/* Register default value on SPRUCC: 0xFFFFFFFF                                 */
/* SPRA0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRB0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRHBM Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* SPRC0 Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                 */
/* SPRMCC Register File:    sprsp_top/ieh[3]/iehregs/IEH_REG_CFG                */
/* SPRUCC Register File:    sprsp_top/ieh[0]/iehregs/IEH_REG_CFG                */
/* Struct generated from SPRA0 BDF: 8_0_4                                       */
/* SPRA0 Security PolicyGroup: OS_W                                             */
/* SPRB0 Security PolicyGroup: OS_W                                             */
/* SPRHBM Security PolicyGroup: OS_W                                            */
/* SPRC0 Security PolicyGroup: OS_W                                             */
/* SPRMCC Security PolicyGroup: OS_W                                            */
/* SPRUCC Security PolicyGroup: OS_W                                            */
/* OS_W: Registers which are owned by the OS or a Device Driver. (E.g. PCIe Spec defined RW registers.)
*/


#define OS_W_RAC_N1_IEH_SATELLITE_REG 0x1F0207C4

typedef union {
  ///
  /// Individual bit fields
  ///
  struct {
    UINT32 os_w_sai_pol_32 : 1;

                            /* Bits[0:0], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_33 : 1;

                            /* Bits[1:1], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_34 : 1;

                            /* Bits[2:2], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_35 : 1;

                            /* Bits[3:3], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_36 : 1;

                            /* Bits[4:4], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_37 : 1;

                            /* Bits[5:5], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_38 : 1;

                            /* Bits[6:6], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_39 : 1;

                            /* Bits[7:7], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_40 : 1;

                            /* Bits[8:8], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_41 : 1;

                            /* Bits[9:9], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_42 : 1;

                            /* Bits[10:10], Access Type=RO, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_43 : 1;

                            /* Bits[11:11], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_44 : 1;

                            /* Bits[12:12], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_45 : 1;

                            /* Bits[13:13], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_46 : 1;

                            /* Bits[14:14], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_47 : 1;

                            /* Bits[15:15], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_48 : 1;

                            /* Bits[16:16], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_49 : 1;

                            /* Bits[17:17], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_50 : 1;

                            /* Bits[18:18], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_51 : 1;

                            /* Bits[19:19], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_52 : 1;

                            /* Bits[20:20], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_53 : 1;

                            /* Bits[21:21], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_54 : 1;

                            /* Bits[22:22], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_55 : 1;

                            /* Bits[23:23], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_56 : 1;

                            /* Bits[24:24], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_57 : 1;

                            /* Bits[25:25], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_58 : 1;

                            /* Bits[26:26], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_59 : 1;

                            /* Bits[27:27], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_60 : 1;

                            /* Bits[28:28], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_61 : 1;

                            /* Bits[29:29], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_62 : 1;

                            /* Bits[30:30], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */
    UINT32 os_w_sai_pol_63 : 1;

                            /* Bits[31:31], Access Type=RW, default=0x00000001*/

                            /*
                               Bit-vector used to determine which agents are
                               allowed read access to registers in OS_W policy
                               group, based on the value from each agent's 6bit
                               SAI field.
                            */

  } Bits;
  UINT32 Data;

} OS_W_RAC_N1_IEH_SATELLITE_STRUCT;












#endif /* _IEH_SATELLITE_h */