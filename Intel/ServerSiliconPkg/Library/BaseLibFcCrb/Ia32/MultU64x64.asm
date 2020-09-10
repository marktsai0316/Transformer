; @file
;
; @copyright
; INTEL CONFIDENTIAL
; Copyright 2006 Intel Corporation. <BR>
;
; The source code contained or described herein and all documents related to the
; source code ("Material") are owned by Intel Corporation or its suppliers or
; licensors. Title to the Material remains with Intel Corporation or its suppliers
; and licensors. The Material may contain trade secrets and proprietary    and
; confidential information of Intel Corporation and its suppliers and licensors,
; and is protected by worldwide copyright and trade secret laws and treaty
; provisions. No part of the Material may be used, copied, reproduced, modified,
; published, uploaded, posted, transmitted, distributed, or disclosed in any way
; without Intel's prior express written permission.
;
; No license under any patent, copyright, trade secret or other intellectual
; property right is granted to or conferred upon you by disclosure or delivery
; of the Materials, either expressly, by implication, inducement, estoppel or
; otherwise. Any license under such intellectual property rights must be
; express and approved by Intel in writing.
;
; Unless otherwise agreed by Intel in writing, you may not remove or alter
; this notice or any other notice embedded in Materials by Intel or
; Intel's suppliers or licensors in any way.
;

    .386
    .model  flat,C
    .code

;------------------------------------------------------------------------------
; UINT64
; EFIAPI
; InternalMathMultU64x64 (
;   IN      UINT64                    Multiplicand,
;   IN      UINT64                    Multiplier
;   );
;------------------------------------------------------------------------------
InternalMathMultU64x64  PROC    USES    ebx
    mov     ebx, [esp + 8]              ; ebx <- M1[0..31]
    mov     edx, [esp + 16]             ; edx <- M2[0..31]
    mov     ecx, ebx
    mov     eax, edx
    imul    ebx, [esp + 20]             ; ebx <- M1[0..31] * M2[32..63]
    imul    edx, [esp + 12]             ; edx <- M1[32..63] * M2[0..31]
    add     ebx, edx                    ; carries are abandoned
    mul     ecx                         ; edx:eax <- M1[0..31] * M2[0..31]
    add     edx, ebx                    ; carries are abandoned
    ret
InternalMathMultU64x64  ENDP

    END