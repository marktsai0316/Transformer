/** @file
  Provides data structure information used by SiliconIp MK-TME

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2020 Intel Corporation. <BR>

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
// TME
//
UINT8  EnableTme;                      // TME Enable
UINT8  EnableTmeCR;                    // Exclude Crystal Ridge memory from encryption.

//
// MK-TME
//
UINT8  EnableMktme;                    // MK-TME Enable
UINT8  MktmeIntegrity;                 // MKTME - memory integrity

// DFX
UINT8  DfxEnableTmePOC;                // Enable TME with BPS dimms inserted - ICX
UINT8  DfxTmeKeyRestore;               // TME Restoring key from NV-storage
UINT64 DfxTmeExclusionBase;            // Base Address for exclusive Range
UINT64 DfxTmeExclusionLength;          // Length of memory region to be excluded from encryption