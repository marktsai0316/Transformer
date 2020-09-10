## @file
#
# @copyright
# INTEL CONFIDENTIAL
# Copyright 2006 - 2008 Intel Corporation. <BR>
#
# The source code contained or described herein and all documents related to the
# source code ("Material") are owned by Intel Corporation or its suppliers or
# licensors. Title to the Material remains with Intel Corporation or its suppliers
# and licensors. The Material may contain trade secrets and proprietary    and
# confidential information of Intel Corporation and its suppliers and licensors,
# and is protected by worldwide copyright and trade secret laws and treaty
# provisions. No part of the Material may be used, copied, reproduced, modified,
# published, uploaded, posted, transmitted, distributed, or disclosed in any way
# without Intel's prior express written permission.
#
# No license under any patent, copyright, trade secret or other intellectual
# property right is granted to or conferred upon you by disclosure or delivery
# of the Materials, either expressly, by implication, inducement, estoppel or
# otherwise. Any license under such intellectual property rights must be
# express and approved by Intel in writing.
#
# Unless otherwise agreed by Intel in writing, you may not remove or alter
# this notice or any other notice embedded in Materials by Intel or
# Intel's suppliers or licensors in any way.
##

.auto
.text

.proc   InternalLongJump
.type   InternalLongJump, @function
.regstk 2, 0, 0, 0
InternalLongJump::
        add                 r10 = 0x10*20 + 8*14, in0
        movl                r2  = ~((((1 << 14) - 1) << 16) | 3)

        ld8.nt1             r14 = [r10], -8*2       // BSP, skip PFS
        mov                 r15 = ar.bspstore       // BSPSTORE

        ld8.nt1             r17 = [r10], -8         // UNAT after spill
        mov                 r16 = ar.rsc            // RSC
        cmp.leu             p6  = r14, r15

        ld8.nt1             r18 = [r10], -8         // UNAT
        ld8.nt1             r25 = [r10], -8         // b5
        and                 r2  = r16, r2

        ldf.fill.nt1        f2  = [in0], 0x10
        ld8.nt1             r24 = [r10], -8         // b4
        mov                 b5  = r25

        mov                 ar.rsc = r2
        ld8.nt1             r23 = [r10], -8         // b3
        mov                 b4  = r24

        ldf.fill.nt1        f3  = [in0], 0x10
        mov                 ar.unat = r17
(p6)    br.spnt.many        _skip_flushrs

        flushrs
        mov                 r15 = ar.bsp            // New BSPSTORE

_skip_flushrs:
        mov                 r31 = ar.rnat           // RNAT
        loadrs

        ldf.fill.nt1        f4  = [in0], 0x10
        ld8.nt1             r22 = [r10], -8
        dep                 r2  = -1, r14, 3, 6

        ldf.fill.nt1        f5  = [in0], 0x10
        ld8.nt1             r21 = [r10], -8
        cmp.ltu             p6  = r2, r15

        ld8.nt1             r20 = [r10], -0x10      // skip sp
(p6)    ld8.nta             r31 = [r2]
        mov                 b3  = r23

        ldf.fill.nt1        f16 = [in0], 0x10
        ld8.fill.nt1        r7  = [r10], -8
        mov                 b2  = r22

        ldf.fill.nt1        f17 = [in0], 0x10
        ld8.fill.nt1        r6  = [r10], -8
        mov                 b1  = r21

        ldf.fill.nt1        f18 = [in0], 0x10
        ld8.fill.nt1        r5  = [r10], -8
        mov                 b0  = r20

        ldf.fill.nt1        f19 = [in0], 0x10
        ld8.fill.nt1        r4  = [r10], 8*13

        ldf.fill.nt1        f20 = [in0], 0x10
        ld8.nt1             r19 = [r10], 0x10       // PFS

        ldf.fill.nt1        f21 = [in0], 0x10
        ld8.nt1             r26 = [r10], 8          // Predicate
        mov                 ar.pfs = r19

        ldf.fill.nt1        f22 = [in0], 0x10
        ld8.nt1             r27 = [r10], 8          // LC
        mov                 pr  = r26, -1

        ldf.fill.nt1        f23 = [in0], 0x10
        ld8.nt1             r28 = [r10], -17*8 - 0x10
        mov                 ar.lc = r27

        ldf.fill.nt1        f24 = [in0], 0x10
        ldf.fill.nt1        f25 = [in0], 0x10
        mov                 r8  = in1

        ldf.fill.nt1        f26 = [in0], 0x10
        ldf.fill.nt1        f31 = [r10], -0x10

        ldf.fill.nt1        f27 = [in0], 0x10
        ldf.fill.nt1        f30 = [r10], -0x10

        ldf.fill.nt1        f28 = [in0]
        ldf.fill.nt1        f29 = [r10], 0x10*3 + 8*4

        ld8.fill.nt1        sp  = [r10]
        mov                 ar.unat = r18

        mov                 ar.bspstore = r14
        mov                 ar.rnat = r31

        invala
        mov                 ar.rsc = r16
        br.ret.sptk         b0
.endp
