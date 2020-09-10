/** @file
  A Base Timer Library implementation which uses the Time Stamp Counter in the processor.
  This instance will use ACPI timer to calculate TSC frequency.

 @copyright
  INTEL CONFIDENTIAL
  Copyright 2015 - 2018 Intel Corporation.

  The source code contained or described herein and all documents related to the
  source code ("Material") are owned by Intel Corporation or its suppliers or
  licensors. Title to the Material remains with Intel Corporation or its suppliers
  and licensors. The Material may contain trade secrets and proprietary and
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

  This file contains an 'Intel Peripheral Driver' and is uniquely identified as
  "Intel Reference Module" and is licensed for Intel CPUs and chipsets under
  the terms of your license agreement with Intel or your vendor. This file may
  be modified by the user, subject to additional terms of the license agreement.

@par Specification Reference:
**/

#include "TscTimerLibInternal.h"
#include <Library/DebugLib.h>
#include <Register/Cpuid.h>

/**
  Calculate TSC frequency.

  The TSC counting frequency is determined by using CPUID leaf 0x15 that is the preferred
  method for Skylake and beyond.  Frequency in MHz = Core XTAL frequency * EBX/EAX.
  In newer flavors of the CPU, core xtal frequency is returned in ECX (or 0 if not
  supported).  If ECX is 0, 24MHz is assumed.
  @return The number of TSC counts per second.

**/
UINT64
InternalCalculateTscFrequency (
  VOID
  )
{
  UINT64      TscFrequency;
  UINT64      CoreXtalFrequency;
  UINT32      RegEax;
  UINT32      RegEbx;
  UINT32      RegEcx;

  //
  // Use CPUID leaf 0x15.
  // TSC frequency = (Core Xtal Frequency) * EBX/EAX.  EBX returns 0 if not
  // supported. ECX, if non zero, provides Core Xtal Frequency in hertz
  // (SDM Dec 2016).
  //
  AsmCpuid (CPUID_TIME_STAMP_COUNTER, &RegEax, &RegEbx, &RegEcx, NULL);
  ASSERT (RegEbx != 0);

  //
  // If core xtal frequency (ECX) returns 0, it is safe to use 24MHz for post
  // Skylake client CPU's.
  //
  if (RegEcx == 0) {
    CoreXtalFrequency = 24000000ul;
  } else {
    CoreXtalFrequency = (UINT64)RegEcx;
  }

  //
  // Calculate frequency.  For integer division, round up/down result
  // correctly by adding denominator/2 to the numerator prior to division.
  //
  TscFrequency = DivU64x32 (MultU64x32 (CoreXtalFrequency, RegEbx) + (UINT64)(RegEax >> 1), RegEax);

  return TscFrequency;
}

/**  Stalls the CPU for at least the given number of ticks.

  Stalls the CPU for at least the given number of ticks. It's invoked by
  MicroSecondDelay() and NanoSecondDelay().

  @param[in]  Delay     A period of time to delay in ticks.

**/
VOID
InternalX86Delay (
  IN      UINT64                    Delay
  )
{
  UINT64                             Ticks;

  //
  // The target timer count is calculated here
  //
  Ticks = AsmReadTsc() + Delay;

  //
  // Wait until time out
  // Timer wrap-arounds are NOT handled correctly by this function.
  // Thus, this function must be called within 10 years of reset since
  // Intel guarantees a minimum of 10 years before the TSC wraps.
  //
  while (AsmReadTsc() <= Ticks) CpuPause();
}

/**  Stalls the CPU for at least the specified number of MicroSeconds.

  @param[in]  MicroSeconds  The minimum number of microseconds to delay.

  @return The value of MicroSeconds input.

**/
UINTN
EFIAPI
MicroSecondDelay (
  IN      UINTN                     MicroSeconds
  )
{
  InternalX86Delay (
    DivU64x32 (
      MultU64x64 (
        InternalGetTscFrequency (),
        MicroSeconds
      ),
      1000000u
    )
  );
  return MicroSeconds;
}

/**  Stalls the CPU for at least the specified number of NanoSeconds.

  @param[in]  NanoSeconds The minimum number of nanoseconds to delay.

  @return The value of NanoSeconds input.

**/
UINTN
EFIAPI
NanoSecondDelay (
  IN      UINTN                     NanoSeconds
  )
{
  InternalX86Delay (
    DivU64x32 (
      MultU64x32 (
        InternalGetTscFrequency (),
        (UINT32)NanoSeconds
      ),
    1000000000u
    )
  );
  return NanoSeconds;
}

/**  Retrieves the current value of the 64-bit free running Time-Stamp counter.

  The time-stamp counter (as implemented in the P6 family, Pentium, Pentium M,
  Pentium 4, Intel Xeon, Intel Core Solo and Intel Core Duo processors and
  later processors) is a 64-bit counter that is set to 0 following a RESET of
  the processor.  Following a RESET, the counter increments even when the
  processor is halted by the HLT instruction or the external STPCLK# pin. Note
  that the assertion of the external DPSLP# pin may cause the time-stamp
  counter to stop.

  The properties of the counter can be retrieved by the
  GetPerformanceCounterProperties() function.

  @return The current value of the free running performance counter.

**/
UINT64
EFIAPI
GetPerformanceCounter (
  VOID
  )
{
  return AsmReadTsc();
}

/**  Retrieves the 64-bit frequency in Hz and the range of performance counter
  values.

  If StartValue is not NULL, then the value that the performance counter starts
  with, 0x0, is returned in StartValue. If EndValue is not NULL, then the value
  that the performance counter end with, 0xFFFFFFFFFFFFFFFF, is returned in
  EndValue.

  The 64-bit frequency of the performance counter, in Hz, is always returned.
  To determine average processor clock frequency, Intel recommends the use of
  EMON logic to count processor core clocks over the period of time for which
  the average is required.


  @param[out]   StartValue  Pointer to where the performance counter's starting value is saved, or NULL.
  @param[out]   EndValue    Pointer to where the performance counter's ending value is saved, or NULL.

  @return The frequency in Hz.

**/
UINT64
EFIAPI
GetPerformanceCounterProperties (
  OUT      UINT64                    *StartValue,  OPTIONAL
  OUT      UINT64                    *EndValue     OPTIONAL
  )
{
  if (StartValue != NULL) {
    *StartValue = 0;
  }
  if (EndValue != NULL) {
    *EndValue = 0xFFFFFFFFFFFFFFFFull;
  }

  return InternalGetTscFrequency ();
}

/**
  Converts elapsed ticks of performance counter to time in nanoseconds.

  This function converts the elapsed ticks of running performance counter to
  time value in unit of nanoseconds.

  @param[in]  Ticks     The number of elapsed ticks of running performance counter.

  @return     The elapsed time in nanoseconds.

**/
UINT64
EFIAPI
GetTimeInNanoSecond (
  IN      UINT64                     Ticks
  )
{
  UINT64  Frequency;
  UINT64  NanoSeconds;
  UINT64  Remainder;
  INTN    Shift;

  Frequency = GetPerformanceCounterProperties (NULL, NULL);

  //
  //          Ticks
  // Time = --------- x 1,000,000,000
  //        Frequency
  //
  NanoSeconds = MultU64x32 (DivU64x64Remainder (Ticks, Frequency, &Remainder), 1000000000u);

  //
  // Ensure (Remainder * 1,000,000,000) will not overflow 64-bit.
  // Since 2^29 < 1,000,000,000 = 0x3B9ACA00 < 2^30, Remainder should < 2^(64-30) = 2^34,
  // i.e. highest bit set in Remainder should <= 33.
  //
  Shift = MAX (0, HighBitSet64 (Remainder) - 33);
  Remainder = RShiftU64 (Remainder, (UINTN) Shift);
  Frequency = RShiftU64 (Frequency, (UINTN) Shift);
  NanoSeconds += DivU64x64Remainder (MultU64x32 (Remainder, 1000000000u), Frequency, NULL);

  return NanoSeconds;
}
