/** @file
  PMC Set_Strap Message library.

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2018 Intel Corporation. <BR>

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

//
// Statements that include other files
//
#include <Library/PmcSetStrapMessageLib.h>

/**
  Clear PMC Set_Strap lock bit to 0, to unlock all SSMC and SSMD registers.

**/
STATIC
VOID
UnlockPmcSetStrapMessageReg (
  VOID
  )
{
}

/**
  Set PMC Set_Strap lock bit to 1, to unlock all SSMC and SSMD registers.

**/
STATIC
VOID
LockPmcSetStrapMessageReg (
  VOID
  )
{
}

/**
  Return the content of PMC Set_Strap Message Data register (SSMD_DW).

  This function does a MMIO read to PMC Set_Strap Message Data register and
  return its content to the caller.

  @param[in] RegAddress           PMC Set_Strap Message Data Register address offset.

  @retval UINT32                  Return the value of PMC Set_Strap Message Data
                                  register (SSMD_DW).

**/
STATIC
UINT32
GetPmcSetStrapMessageDataReg (
  IN  UINT32    RegAddress
  )
{
  return 0;
}

/**
  Update PMC Set_Strap Message Data register (SSMD_DW*) via MMIO.

  This function does a MMIO write to PMC Set_Strap Message Data register. It unlocks
  the set_strap message data registers (SSMC and SSMD), updates SSMD register, sets
  the MUX Select to 1 and relocks the set_strap message data registers.

  @param[in] RegAddress           PMC Set_Strap Message Data Register (SSMD_DW*) address offset.
  @param[in] Data32               Value to be written into PMC SSMD_DW* register.

  @retval EFI_SUCCESS             Value was written into PMC SSMD_DW* register.

**/
STATIC
EFI_STATUS
EFIAPI
SetPmcSetStrapMessageDataReg (
  IN  UINT32      RegAddress,
  IN  UINT32      Data32
  )
{
  return EFI_SUCCESS;
}

/**
  Get value of Iio Stack Disable from SoftStrap

  @param[in]  VOID

  @retval UINT32  Value of Iio Stack Disable in the CPU soft strap

**/
UINT32
EFIAPI
GetPmcSetStrapMsgIioStackDis (
  VOID
  )
{
  return 0;
}

/**
  Update IIO STACK DIS bitfield in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  Value               IIO Stack disable/enable BIOS setup option value.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap IIO STACK DIS bitfield was populated with the requested value.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgIioStackDis (
  IN  UINT32                IioStackDis,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update HQM DIS bitfield in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  Value               HQM disable/enable BIOS setup option value.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap IIO STACK DIS bitfield was populated with the requested value.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgHqmDis (
  IN  UINT8                HqmDis,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}



/**
  Update SNC_IND_EN bitfield in PMC set_strap message data register
  based on BIOS Prefetch setup value.

  @param[in]  SncIndEn            Value to be written into SncIndEn set_strap.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap SncIndEn bitfield was populated
                                  with the requested values.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgPrefetchEn (
  IN  UINT8                SncIndEn,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update FULL_SNC_EN, SNC_IND_EN and SNC_CLUSTER bitfields in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  FullSncEn           Value to be written into FullSncEn set_strap.
  @param[in]  SncIndEn            Value to be written into SncIndEn set_strap.
  @param[in]  NumClusters         The input value is based on MS2IDI SNC_CONFIG.NumClusters
                                  field encoding.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap FullSncEn, SncIndEn and NumClusters bitfields
                                  were populated with the requested values.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgSncEn (
  IN  UINT8                FullSncEn,
  IN  UINT8                SncIndEn,
  IN  UINT8                NumClusters,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update 2LM_EN bitfield in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  Value               VolMem BIOS setup option value. See definitions in
                                  MemDefaults.h.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap 2LM_EN bitfield was populated with the requested value.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgTwoLmEn (
  IN  UINT8                Value,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update UMA_EN bitfield in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  Value               UMA based clustering BIOS setup value. See definitions in
                                  in SocketCommonRcVariable.h.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap UMA_EN bitfield was populated with
                                  the requested value.
  @retval EFI_UNSUPPORTED         PMC set_strap message data register DW1 doesn't
                                  support UMA Quadrant mode.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgUmaEn (
  IN  UINT8                Value,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update FLEX_RATIO bitfield in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  Value               Flex ratio BIOS setup option value.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap Flex Ratio bitfield was populated with the requested value.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgFlexRatio (
  IN  UINT8                Value,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update SMT_DISABLE bitfield in PMC set_strap message data register
  based on BIOS setup value.

  @param[in]  Value               SMT disable/enable BIOS setup option value.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap SMT_DISABLE bitfield was populated with the requested value.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgSmtDisable (
  IN  UINT8                Value,
  IN OUT UINT8             *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Update CORE_OFF_MASK in PMC set_strap message data registers
  based on BIOS setup value.

  @param[in] CoreOffMaskLow       Value of CORE_OFF_MASK low to be written into SSMD_DW2 register.
  @param[in] CoreOffMaskHigh      Value of CORE_OFF_MASK high to be written into SSMD_DW3 register.
  @param[in out]  ResetRequired   If ResetRequired is not NULL at input then the update function will return
                                  the reset type required if there is difference with the current value of the strap.
                                  Caller needs to decide how to request for the reset type.
                                  If ResetRequired is NULL then the update function will request for appropiate reset internally.

  @retval EFI_SUCCESS             PMC set_Strap CORE_OFF_MASK bitfields was populated with
                                  the requested values.
  @retval EFI_INVALID_PARAMETER   Invalid function parameter. The routine requires at least one
                                  bitfield (CoreOffMaskLow or CoreOffMaskHigh) to update.

**/
EFI_STATUS
EFIAPI
UpdatePmcSetStrapMsgCoreOffMask (
  IN  UINT32             CoreOffMaskLow,
  IN  UINT32             CoreOffMaskHigh,
  IN OUT UINT8           *ResetRequired
  )
{
  return EFI_SUCCESS;
}

/**
  Convert SncPrefetchEn and UmaClustering BIOS option to MS2IDI SNC_CONFIG register bitfields values.

  @param[in]  SncPrefetchEn       SNC and/or Prefetch enabling bit (KTI_ENABLE or KTI_DISABLE).
  @param[in]  SncEn               SncEn BIOS setup options. See definitions in KtiSetupDefinitions.h.
  @param[in]  UmaClustering       UMA Based Clustering Enable option. See definitions
                                  in SocketCommonRcVariable.h.
  @param[out] FullSncEnable       Contains the returned value for full_snc_enable bitfield.
  @param[out] SncIndEnable        Contains the returned value for snc_ind_enable bitfield.
  @param[out] NumClusters         Contains the returned value for num_clusters bitfield.

  @retval EFI_SUCCESS             Expected bitfields values were populated and returned
                                  to the caller.

**/
EFI_STATUS
EFIAPI
ConvertSncSetupValueToSncConfigRegField (
  IN  UINT8    SncPrefetchEn,
  IN  UINT8    SncEn,
  IN  UINT8    UmaClustering,
  OUT UINT8    *FullSncEnable,
  OUT UINT8    *SncIndEnable,
  OUT UINT8    *NumClusters
  )
{
  if (FullSncEnable != NULL) {
    *FullSncEnable = 0;
  }

  if (SncIndEnable != NULL) {
    *SncIndEnable = 0;
  }

  if (NumClusters != NULL) {
    *NumClusters = 0;
  }

  return EFI_SUCCESS;
}

/**
  Convert VolMem (a.k.a. TwoLM) BIOS option to MS2IDI SNC_BASE_1 and SNC_BASE_2 registers
  bitfields values.

  @param[in]  VolMem              VolMem BIOS setup options. See definitions in MemDefaults.h.
  @param[out] TwoLmMask1          Contains the returned value for SNC_BASE_1 twolm_mask bitfield.
  @param[out] TwoLmMask1H         Contains the returned value for SNC_BASE_1 hi_twolm_mask bitfield.
  @param[out] TwoLmMask2          Contains the returned value for SNC_BASE_2 twolm_mask bitfield.

  @retval EFI_SUCCESS             Expected bitfields values were populated and returned
                                  to the caller.

**/
EFI_STATUS
EFIAPI
ConvertTwoLmSetupValueToSncBaseRegField (
  IN  UINT8     VolMem,
  OUT UINT32    *TwoLmMask1,
  OUT UINT32    *TwoLmMask1H,
  OUT UINT32    *TwoLmMask2
  )
{
  if (TwoLmMask1 != NULL) {
    *TwoLmMask1 = 0;
  }

  if (TwoLmMask1H != NULL) {
    *TwoLmMask1H = 0;
  }

  if (TwoLmMask2 != NULL) {
    *TwoLmMask2 = 0;
  }

  return EFI_SUCCESS;
}

/**
  Convert UMA Based Clustering Enable option to MS2IDI UMA_CLUSTER_CFG register
  bitfield value.

  @param[in]  UmaBasedClustering  UMA Based Clustering Enable option. See definitions
                                  in SocketCommonRcVariable.h.
  @param[out] UmaEn               Contains the returned value for UMA_CLUSTER_CFG
                                  uma_cluster_enable bitfield.

  @retval EFI_SUCCESS             Expected bitfield value was populated and returned
                                  to the caller.

**/
EFI_STATUS
EFIAPI
ConvertUmaClusterSetupValueToUmaClusterRegField (
  IN  UINT8              UmaBasedClustering,
  OUT UINT8              *UmaEn
  )
{
  if (UmaEn != NULL) {
    *UmaEn = 0;
  }

  return EFI_SUCCESS;
}