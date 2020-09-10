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

    .code

;------------------------------------------------------------------------------
; VOID
; EFIAPI
; InternalLongJump (
;   IN      BASE_LIBRARY_JUMP_BUFFER  *JumpBuffer,
;   IN      UINTN                     Value
;   );
;------------------------------------------------------------------------------
InternalLongJump    PROC
    mov     rbx, [rcx]
    mov     rsp, [rcx + 8]
    mov     rbp, [rcx + 10h]
    mov     rdi, [rcx + 18h]
    mov     rsi, [rcx + 20h]
    mov     r12, [rcx + 28h]
    mov     r13, [rcx + 30h]
    mov     r14, [rcx + 38h]
    mov     r15, [rcx + 40h]
    ; load non-volatile fp registers
    ldmxcsr [rcx + 50h]
    movdqu  xmm6,  [rcx + 58h]
    movdqu  xmm7,  [rcx + 68h]
    movdqu  xmm8,  [rcx + 78h]
    movdqu  xmm9,  [rcx + 88h]
    movdqu  xmm10, [rcx + 98h]
    movdqu  xmm11, [rcx + 0A8h]
    movdqu  xmm12, [rcx + 0B8h]
    movdqu  xmm13, [rcx + 0C8h]
    movdqu  xmm14, [rcx + 0D8h]
    movdqu  xmm15, [rcx + 0E8h]
    mov     rax, rdx               ; set return value
    jmp     qword ptr [rcx + 48h]
InternalLongJump    ENDP

    END
