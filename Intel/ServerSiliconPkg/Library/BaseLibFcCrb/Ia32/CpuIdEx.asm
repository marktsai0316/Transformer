; @file
;
; @copyright
; INTEL CONFIDENTIAL
; Copyright 2006 - 2013 Intel Corporation. <BR>
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

    .686
    .model  flat,C
    .code

;------------------------------------------------------------------------------
;  UINT32
;  EFIAPI
;  AsmCpuidEx (
;    IN   UINT32  RegisterInEax,
;    IN   UINT32  RegisterInEcx,
;    OUT  UINT32  *RegisterOutEax  OPTIONAL,
;    OUT  UINT32  *RegisterOutEbx  OPTIONAL,
;    OUT  UINT32  *RegisterOutEcx  OPTIONAL,
;    OUT  UINT32  *RegisterOutEdx  OPTIONAL
;    )
;------------------------------------------------------------------------------
AsmCpuidEx  PROC    USES    ebx
    push    ebp
    mov     ebp, esp
    mov     eax, [ebp + 12]
    mov     ecx, [ebp + 16]
    cpuid
    push    ecx
    mov     ecx, [ebp + 20]
    jecxz   @F
    mov     [ecx], eax
@@:
    mov     ecx, [ebp + 24]
    jecxz   @F
    mov     [ecx], ebx
@@:
    mov     ecx, [ebp + 32]
    jecxz   @F
    mov     [ecx], edx
@@:
    mov     ecx, [ebp + 28]
    jecxz   @F
    pop     DWORD [ecx]
@@:
    mov     eax, [ebp + 12]
    leave
    ret
AsmCpuidEx  ENDP

    END