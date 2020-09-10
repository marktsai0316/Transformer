/** @file
  File inclues functions to determine clustering mode

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2019 - 2020 Intel Corporation. <BR>

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

#include <Library/OemProcMemInitLib.h>
#include <Uefi.h>
#include <Library/PeiServicesLib.h>
#include <Library/RcDebugLib.h>
#include <KtiMisc.h>
#include <KtiSetupDefinitions.h>
#include <Upi/KtiSi.h>
#include <Library/BaseMemoryLib.h>
#include <Library/EmulationConfigurationLib.h>
#include <Library/MemRcLib.h>
#include <Library/SystemInfoLib.h>
#include <Library/CpuAndRevisionLib.h>
#include <Library/UpiHostDataLib.h>
#include <Library/KtiApi.h>
#include <Library/IoAccessLib.h>
#include <ScratchpadList.h>
#include <Library/ReferenceCodePolicyLib.h>
#include <Library/ProcMemInitChipLib.h>
#include <Library/MemoryServicesLib.h>
#include <Library/KtiSimLib.h>
#include <Library/IoLib.h>
#include <Library/CsrAccessLib.h>
#include <Library/MemTypeLib.h>
#include <Guid/SocketCommonRcVariable.h>
#include <Library/SiliconWorkaroundLib.h>
#include <Library/Ms2IdiLib.h>
#include <Library/SncPrefetchLib.h>
#include "SncPrefetchLibInternal.h"


/**
  Get SAD Entries Information.

  This routine is to scan SAD entries information and update into MemInfo Base & Limit

  @param  KtiInternalGlobal   -  KTIRC Internal Global data
  @param  MemInfo             -  Memory Information structure.
  @param  Socket              -  Socket

  @retval None

**/
VOID
GetSadEntryInfo (
  KTI_HOST_INTERNAL_GLOBAL   *KtiInternalGlobal,
  MEM_INFO                   *MemInfo,
  UINT8                      Socket
  )
{
  UINT8                        Mc;
  UINT8                        NumOfCluster;
  UINT32                       SadEntryBase;
  SAD_TABLE                    *SADEntry;
  MEM_VAR_STRUCT               *MemVar;
  UINT8                        Index;
  UINT8                        SadCluster;
  UINT8                        i;
  UINT8                        j;
  UINT8                        MaxImc;
  UINT8                        UmaClustering   = 0;
  UINT8                        LowerRangeIdx;
  UINT8                        UpperRangeIdx;
  UINT8                        IntlvWays[MAX_CLUSTERS][MAX_PREFETCH_RNG_TYPE];
  UINT8                        MiniSadModeSelect[MAX_PREFETCH_RNG_TYPE];
  UINT8                        XorDefeature[MAX_PREFETCH_RNG_TYPE];
  UINT8                        PrefetchType = 0;
  BOOLEAN                      MixedVolWithNonMatchIntlv;
  PREFETCH_RNG_TYPE            CurMemType;
  PREFETCH_RNG_TYPE            OppositeMemType;
  PREFETCH_RANGE_INFO_INTERNAL PrefetchRange[MAX_CLUSTERS][MAX_PREFETCH_RNG_TYPE];

  MemVar = GetMemVarPointer ();
  Mc     = 0;
  MaxImc = GetMaxImc ();

  if (Socket >= MAX_SOCKET) {
    KtiDebugPrintFatal ((KTI_DEBUG_ERROR, "\nERR_SW_CHECK: 0x%X!!!!   \"UINT8 Socket\" with value: 0x%X, will cause overflow on \"Snc/McInfo[Socket]\"\n",
                         MINOR_ERR_SW_CHECK_53, Socket));
    KTI_ASSERT (FALSE, ERR_SW_CHECK, MINOR_ERR_SW_CHECK_53);
  }

  KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\nSocket %d Tolm %x", Socket, KTI_HOST_OUT_PTR->tolmLimit));

  //
  // Initialize InterleaveEn & Mc to 0, PrefetchEnabled boolean to TRUE
  //
  MemInfo->SncInfo[Socket].InterleaveEn = 0;

  LowerRangeIdx = 0;
  UpperRangeIdx = 0;
  MixedVolWithNonMatchIntlv = FALSE;
  ZeroMem ((UINT8 *) IntlvWays, sizeof (IntlvWays));
  ZeroMem ((UINT8 *) PrefetchRange, sizeof (PrefetchRange));
  ZeroMem ((UINT8 *) MiniSadModeSelect, sizeof (MiniSadModeSelect));
  ZeroMem ((UINT8 *) XorDefeature, sizeof (XorDefeature));
  //
  // Scan SAD entries
  //
  KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n SADEntry Local Base      Limit      Cluster Ways NmChWays ImcIntBitmap NmImcIntBitmap Mc0ChIntMap Mc1ChIntMap Mc2ChIntMap Mc3ChIntMap Type"));
  NumOfCluster = 0;
  for (i = 0; i < MAX_SAD_RULES; i++) {
    j = i;
    SADEntry = &MemVar->socket[Socket].SAD[j];
    if (SADEntry->Enable == 0) {
      break; // end of SAD table
    }
    //
    // Display SADEntry information
    //
    SadEntryBase = SADEntry->Base;
    if (MaxImc >= 2) {
#if (MAX_IMC >= 4)
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n %-8d %-5d 0x%07x 0x%07x  %-7d %-4d %-8d 0x%-10x 0x%-12x 0x%-9x 0x%-9x 0x%-9x 0x%-9x ",
        i, SADEntry->local, SadEntryBase, SADEntry->Limit, SADEntry->Cluster, SADEntry->ways, SADEntry->NmChWays,
        SADEntry->imcInterBitmap, SADEntry->NmImcInterBitmap, SADEntry->channelInterBitmap[0], SADEntry->channelInterBitmap[1], SADEntry->channelInterBitmap[2], SADEntry->channelInterBitmap[3]
        ));
#elif (MAX_IMC >= 2)
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n %-8d %-5d 0x%07x 0x%07x  %-7d %-4d %-8d 0x%-10x 0x%-12x 0x%-9x 0x%-9x                         ",
        i, SADEntry->local, SadEntryBase, SADEntry->Limit, SADEntry->Cluster, SADEntry->ways, SADEntry->NmChWays,
        SADEntry->imcInterBitmap, SADEntry->NmImcInterBitmap, SADEntry->channelInterBitmap[0], SADEntry->channelInterBitmap[1]));
#endif // (MAX_IMC >= 4)
    } else {
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n %-8d %-5d 0x%07x 0x%07x  %-7d %-4d %-8d 0x%-10x 0x%-12x 0x%-9x                                     ",
        i, SADEntry->local, SadEntryBase, SADEntry->Limit, SADEntry->Cluster, SADEntry->ways, SADEntry->NmChWays,
        SADEntry->imcInterBitmap, SADEntry->NmImcInterBitmap, SADEntry->channelInterBitmap[0]));
    }

    switch (SADEntry->type) {
    case MemType1lmDdr:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "1LM"));
      break;
    case MemType2lmDdrCacheMemoryMode:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "2LM"));
      break;
    case MemType1lmAppDirect:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "PMEM"));
      break;
    case MemType2lmDdrWbCacheAppDirect:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "WBcached PMEM"));
      break;
    case MemTypeNxm:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "NXM"));
      break;
    default:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "Unknown"));
      break;
    }

    KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "  Granularity="));
    switch (SADEntry->granularity) {
    case INTERLEAVE_GRANULARITY_256B:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "256B"));
      break;
    case INTERLEAVE_GRANULARITY_4KB:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "4KB"));
      break;
    default:
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "Unknown"));
      break;
    }

    if (SADEntry->local) {
      //
      // check this SAD entry is 1LM, 2LM or PMEM Cache
      //
      if ((SADEntry->type == MemType1lmDdr) || (SADEntry->type == MemType2lmDdrCacheMemoryMode)) {
        MemInfo->MiniSadInfo.Xptminisadmodeselect = 0;
        MemInfo->MiniSadInfo.XorDefeature = 0;
        if (SADEntry->type == MemType1lmDdr) {
          //
          // 1LM use 256B interleave
          //
          MemInfo->MiniSadInfo.IntGranularity = 2;
        } else {
          //
          // 2LM 4K interleave case
          //
          MemInfo->MiniSadInfo.IntGranularity = 6;
          MemInfo->MiniSadInfo.XorDefeature = 1;
        }

        KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "  IntGranularity=%u", MemInfo->MiniSadInfo.IntGranularity));

        // 256B interleave, XOR disabled, using mod3, so set minisadmode to 1
        if ((GetSocketXorMode (Socket) & CHANNEL_XOR) == 0) {
            MemInfo->MiniSadInfo.Xptminisadmodeselect = 1;
        }

        MemInfo->imcBitmap[Socket][MC_TECH_DDR] |= (UINT32) SADEntry->imcInterBitmap;
        KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n  MemInfo->imcBitmap[%d][MC_TECH_DDR]=0x%x", Socket, MemInfo->imcBitmap[Socket][MC_TECH_DDR]));
        if (SADEntry->mirrored) {
          MemInfo->McMirrorBitmap[Socket][MC_TECH_DDR] |= (UINT32) SADEntry->imcInterBitmap;
          KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "  MemInfo->McMirrorBitmap[%d][MC_TECH_DDR]=0x%x", Socket, MemInfo->McMirrorBitmap[Socket][MC_TECH_DDR]));
        }

        SadCluster = SADEntry->Cluster;
        if (MemInfo->McInfo[Socket][SadCluster].Enabled == 0) {      //this is 1st time
          MemInfo->McInfo[Socket][SadCluster].MemBase = SadEntryBase;
          MemInfo->McInfo[Socket][SadCluster].Enabled = 1;
          if (MemInfo->SncInfo[Socket].NumOfMcPerCluster[SadCluster] == 0) {
            for (Index = 0; Index < MaxImc; Index++) {
              if (((SADEntry->imcInterBitmap >> Index) & 1) != 0) {
                MemInfo->SncInfo[Socket].NumOfMcPerCluster[SadCluster]++;
              }
            }

            MemInfo->SncInfo[Socket].McBitmapPerCluster[SadCluster] = SADEntry->imcInterBitmap;
            KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "  McBitmapPerCluster[%x]=0x%x", SadCluster, MemInfo->SncInfo[Socket].McBitmapPerCluster[SadCluster]));
          }

          for (Index = 0; Index < MaxImc; Index++) {
            if (((SADEntry->imcInterBitmap >> Index) & 1) != 0) {
              MemInfo->McInfo[Socket][SadCluster].ChannelInterBitmap[Index] = SADEntry->channelInterBitmap[Index];
            }
          }
          //
          // Set Prefetch default setting in MemInfo structure to enable
          //
          MemInfo->SncInfo[Socket].PrefetchEn = 1;

          NumOfCluster++;
          // check if finds dimm 1st time, if yes, then update socket info
          if (MemInfo->SocketIdWithFirst4G == 0) {
            MemInfo->SocketIdWithFirst4G = (UINT8)((1 << 7) | Socket);   //bit 7 is to indicate the valid bit
          }
        } else {
          //
          // Verify SAD entries within the cluster are having the same channel interleave bitmap
          // If channel interleave bitmap is different, set prefetch flag to disable
          //
          for (Index = 0; Index < MaxImc; Index++) {
            if (((SADEntry->imcInterBitmap >> Index) & 1) == 0) {
              continue;
            }
            if (MemInfo->McInfo[Socket][SadCluster].ChannelInterBitmap[Index] != SADEntry->channelInterBitmap[Index]) {
              MemInfo->SncInfo[Socket].PrefetchEn = 0;
              break;
            }
          }
        }
        if (SADEntry->type == MemType1lmDdr || SADEntry->type == MemType2lmDdrCacheMemoryMode) {
          if (SADEntry->type == MemType1lmDdr) {
            CurMemType = PREFETCH_1LM;
            OppositeMemType = PREFETCH_2LM;
          } else {
            CurMemType = PREFETCH_2LM;
            OppositeMemType = PREFETCH_1LM;
          }
          PrefetchRange[SadCluster][CurMemType].IntlvGranularity = MemInfo->MiniSadInfo.IntGranularity;
          if (PrefetchRange[SadCluster][OppositeMemType].Enabled &&
             (PrefetchRange[SadCluster][CurMemType].IntlvGranularity != PrefetchRange[SadCluster][OppositeMemType].IntlvGranularity)) {
            KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "  1LM and 2LM has different granularity"));
            MixedVolWithNonMatchIntlv = TRUE;
          }
          if (!PrefetchRange[SadCluster][CurMemType].Enabled) {
            PrefetchRange[SadCluster][CurMemType].Enabled = TRUE;
            PrefetchRange[SadCluster][CurMemType].Base = SadEntryBase;
          }
          PrefetchRange[SadCluster][CurMemType].Limit = SADEntry->Limit;
          MiniSadModeSelect[CurMemType] = MemInfo->MiniSadInfo.Xptminisadmodeselect;
          XorDefeature[CurMemType] = MemInfo->MiniSadInfo.XorDefeature;
        }
        //
        // Currently for XPT prefetchable range, there are separate base registers defining the base
        // of each SNC cluster (separate from SNC registers), but no range limit defined
        // If 1LM and 2LM have different interleave granularities,
        // Then XPT support for upper most region within cluster
        //   | SNC3  2LM |
        //   | SNC3  1LM | Cluster3
        //   | SNC2  2LM |
        //   | SNC2  1LM | Cluster2
        //   | SNC1  2LM |
        //   | SNC1  1LM | Cluster1
        //   | SNC0  2LM |
        //   | SNC0  1LM | Cluster0
        //
        if (MixedVolWithNonMatchIntlv) {
          if (PrefetchRange[SadCluster][PREFETCH_2LM].Base > PrefetchRange[SadCluster][PREFETCH_1LM].Base) {
            PrefetchRange[SadCluster][PREFETCH_1LM].Enabled = FALSE;
          } else {
            PrefetchRange[SadCluster][PREFETCH_2LM].Enabled = FALSE;
          }
        }
        MemInfo->McInfo[Socket][SadCluster].MemLimit = SADEntry->Limit;
        UmaClustering = KTIVAR->OutUmaClustering;

        if (IsSiliconWorkaroundEnabled ("S2203452293")) {
          if (SADEntry->type == MemType1lmDdr) {
            MemInfo->Ways[Socket][SadCluster] = SADEntry->ways * SADEntry->NmChWays;
            if (UmaClustering != UMABASEDCLUSTERING_DISABLED) {
              MemInfo->Ways[Socket][SadCluster] = MemInfo->Ways[Socket][SadCluster] / UmaClustering;
            }
            IntlvWays [SadCluster][PREFETCH_1LM] = MemInfo->Ways[Socket][SadCluster];
            PrefetchType = PREFETCH_1LM;
          } else if (SADEntry->type == MemType2lmDdrCacheMemoryMode) {
            MemInfo->Ways[Socket][SadCluster] = SADEntry->NmChWays;
            IntlvWays [SadCluster][PREFETCH_2LM] = MemInfo->Ways[Socket][SadCluster];
            PrefetchType = PREFETCH_2LM;
          }
          if (UmaClustering != UMABASEDCLUSTERING_DISABLED) {
            //
            // UMA based clustering, from memory perspective, only 1 real cluster, that's cluster0.
            // Need to duplicate for other clusters
            //
            for (Index = 1; Index < UmaClustering; Index++) {
              MemInfo->Ways[Socket][Index] = MemInfo->Ways[Socket][0];
              IntlvWays [Index][PrefetchType] = MemInfo->Ways[Socket][0];
            }
          }
        }
        KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "  Ways[%d][%d]=%x\n", Socket, SadCluster, MemInfo->Ways[Socket][SadCluster]));
      }
    }   //SAD entry local
  }  // SAD entry loop

  //
  // display each mc & hbm base & limit
  //
  MemInfo->SncInfo[Socket].NumOfMcEnabled = 0;
  KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n MC-Cluster InterleaveEn PrefetchEn Membase   MemLimit \n"));
  for (Mc = 0; Mc < MAX_CLUSTERS; Mc++) {
    if (MemInfo->McInfo[Socket][Mc].Enabled == 1) {
      if (PrefetchRange[Mc][PREFETCH_1LM].Enabled &&
          PrefetchRange[Mc][PREFETCH_2LM].Enabled) {
        //1LM+2LM, and both range valid
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Enabled = 1;
        MemInfo->McInfo[Socket][Mc].PrefetchRange[1].Enabled = 1;
        if (PrefetchRange[Mc][PREFETCH_1LM].Base < PrefetchRange[Mc][PREFETCH_2LM].Base) {
          LowerRangeIdx = PREFETCH_1LM;
          UpperRangeIdx = PREFETCH_2LM;
        } else {
          LowerRangeIdx = PREFETCH_2LM;
          UpperRangeIdx = PREFETCH_1LM;
        }
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Base  = PrefetchRange[Mc][LowerRangeIdx].Base;
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Limit = PrefetchRange[Mc][LowerRangeIdx].Limit;
        MemInfo->McInfo[Socket][Mc].PrefetchRange[1].Base  = PrefetchRange[Mc][UpperRangeIdx].Base;
        MemInfo->McInfo[Socket][Mc].PrefetchRange[1].Limit = PrefetchRange[Mc][UpperRangeIdx].Limit;
      } else {
        if (PrefetchRange[Mc][PREFETCH_1LM].Enabled) {
          UpperRangeIdx = PREFETCH_1LM;
        } else if (PrefetchRange[Mc][PREFETCH_2LM].Enabled) {
          UpperRangeIdx = PREFETCH_2LM;
        }
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Enabled = 1;
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Base    = PrefetchRange[Mc][UpperRangeIdx].Base;
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Limit   = PrefetchRange[Mc][UpperRangeIdx].Limit;
        if (MixedVolWithNonMatchIntlv) {
          MemInfo->Ways[Socket][Mc] = IntlvWays[Mc][UpperRangeIdx];
          MemInfo->MiniSadInfo.Xptminisadmodeselect = MiniSadModeSelect[UpperRangeIdx];
          MemInfo->MiniSadInfo.IntGranularity = PrefetchRange[Mc][UpperRangeIdx].IntlvGranularity;
          MemInfo->MiniSadInfo.XorDefeature = XorDefeature[UpperRangeIdx];
        }
      }
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, " %-10d %-12d %-10d 0x%07x 0x%07x \n",
        Mc, MemInfo->SncInfo[Socket].InterleaveEn, MemInfo->SncInfo[Socket].PrefetchEn,
        MemInfo->McInfo[Socket][Mc].MemBase, MemInfo->McInfo[Socket][Mc].MemLimit
        ));
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "Cluster %d Prefetch Range[0]: Enabled: %d, Base=0x%x, Limit=0x%x \n",
        Mc, MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Enabled, MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Base,
        MemInfo->McInfo[Socket][Mc].PrefetchRange[0].Limit
        ));
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "Cluster %d Prefetch Range[1]: Enabled: %d, Base=0x%x, Limit=0x%x \n",
        Mc, MemInfo->McInfo[Socket][Mc].PrefetchRange[1].Enabled, MemInfo->McInfo[Socket][Mc].PrefetchRange[1].Base,
        MemInfo->McInfo[Socket][Mc].PrefetchRange[1].Limit
        ));
      MemInfo->SncInfo[Socket].NumOfMcEnabled += MemInfo->SncInfo[Socket].NumOfMcPerCluster[Mc];
      KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n NumOfMcEnabled=%x, NumOfMcPerCluster=%x\n", MemInfo->SncInfo[Socket].NumOfMcEnabled, MemInfo->SncInfo[Socket].NumOfMcPerCluster[Mc]));
    }
  }

  if (MemInfo->SncInfo[Socket].NumOfMcEnabled > 1) {
    MemInfo->SncInfo[Socket].InterleaveEn = 1;
  }

  if (NumOfCluster != 0) {
    UmaClustering = KTIVAR->OutUmaClustering;
    //
    // SADEntry->Cluster has no meaning when UMA based clustering enabled
    // So, need to recalculate cluster number
    //
    if (UmaClustering == UMABASEDCLUSTERING_HEMISPHERE ||
        UmaClustering == UMABASEDCLUSTERING_QUADRANT) {
      NumOfCluster = UmaClustering;
    }
    MemInfo->SncInfo[Socket].NumOfCluster = NumOfCluster;
    MemInfo->SncInfo[Socket].NumOfChaPerCluster = (KTIVAR->CpuInfo[Socket].TotCha) / NumOfCluster;
  }

  KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n Number of clusters = %d\n", MemInfo->SncInfo[Socket].NumOfCluster));
}

/**
  Check DDR Memory Population.

  This routine calculates number of channels populated on each memory controller, channel
  memory size and indicate if all channels are of same size.

  @param  KtiInternalGlobal -  KTIRC Internal Global data
  @param  MemInfo           -    Memory Information structure.

  @retval None

**/
KTI_STATUS
CheckMemoryPopulation (
  KTI_HOST_INTERNAL_GLOBAL   *KtiInternalGlobal,
  MEM_INFO                   *MemInfo
  )
{
  UINT8               Socket, Mc, Ch, ChannelNumber, AepDimmPresent, NvDimmPresent;
  MEM_NVRAM_STRUCT    *nvramMem;
  CHANNEL_NVRAM_STRUCT (*channelNvList)[MAX_CH];
  UINT16              ChannelMemSize;
  KTI_STATUS          Status;
  UINT8               MaxIMC;

  MaxIMC   = GetMaxImc ();
  nvramMem = GetMemNvramPointer ();

  //
  // get memory infomation from nvram dimm for each socket
  //
  if (CheckCurrentReset (POST_RESET_POWERGOOD) && (GetSysResetRequired () != 0)) {
    //
    // Powergood path with reset pending
    //
    for (Socket = 0; Socket < MAX_SOCKET; Socket++) {
      if (!SocketPresent (Socket)) {
        continue;
      }

      channelNvList = &nvramMem->socket[Socket].channelList;
      AepDimmPresent = 0;
      NvDimmPresent = 0;

      for (Mc = 0; Mc < MaxIMC; Mc++) {
        for (Ch = 0; Ch < MAX_MC_CH; Ch++) {
          // Detects which channel have memory and update MemInfo for future use
          ChannelMemSize = 0;
          ChannelNumber = Ch + Mc *MAX_MC_CH;
          KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\nSocket %d channel %d enabled %d", Socket, ChannelNumber, nvramMem->socket[Socket].channelList[ChannelNumber].enabled ));
          if ((*channelNvList)[ChannelNumber].enabled == 0) {
            continue;
          }

          ReadChannelDimmInfo (Socket, Mc, Ch, &ChannelMemSize, &AepDimmPresent, &NvDimmPresent);
          if (PcdGetBool (PcdNvDimmEn)) {
            if (NvDimmPresent != 0) {
              KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n  NVMDIMM-N exist, disable SNC\n"));
              return KTI_FAILURE;
            }
          }
          MemInfo->McInfo[Socket][Mc].ChannelMemSize[Ch] = ChannelMemSize >> 4;
          KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\n  Memory Size = 0x%x", ChannelMemSize));

          MemInfo->McInfo[Socket][Mc].Enabled = 1;
          if (MemInfo->SocketIdWithFirst4G == 0) {
            MemInfo->SocketIdWithFirst4G = (UINT8)((1 << 7) | Socket);   //bit 7 is to indicate the valid bit
            KtiDebugPrintInfo0 ((KTI_DEBUG_INFO0, "\nSocket %d has 1st 4G memory on Channel %d", Socket, ChannelNumber));
          }
        } // Ch
      } // Mc

      //
      // 4MC support
      //
      MemInfo->SncInfo[Socket].NumOfMcEnabled = 0;
      for (Mc = 0; Mc < MaxIMC; Mc++) {
        if (MemInfo->McInfo[Socket][Mc].Enabled == 1) {
          MemInfo->SncInfo[Socket].NumOfMcEnabled++;
        }
      }
    } // Socket

    Status = DetermineSncSetting (KtiInternalGlobal, MemInfo);
  } else {
    //
    // warm reset path, or powergood reset with warm-reset elimination flow
    //
    for (Socket = 0; Socket < MAX_SOCKET; Socket++) {
      if (SocketPresent (Socket)) {
        GetSadEntryInfo (KtiInternalGlobal, MemInfo, Socket);
      }
    }

    Status = KTI_SUCCESS;
  }  // warm reset path

  return Status;
}

/**
  SNC Misc and Recovery if failure

  @param SocketData        - pointer to the socket data structure
  @param KtiInternalGlobal - pointer to the KTI RC internal global structure

  @retval KTI_SUCCESS - on successful completion

**/
KTI_STATUS
SncMisc (
  KTI_SOCKET_DATA            *SocketData,
  KTI_HOST_INTERNAL_GLOBAL   *KtiInternalGlobal
  )
{
  UINT8 Soc;
  UINT8 FullSncEnable;
  UINT8 SncIndEnable;
  UINT8 NumClusters;

  if (KTIVAR->OutSncPrefetchEn) {
    for (Soc = 0; Soc < MAX_SOCKET; Soc++) {
      //
      //Update SNC cluster information for MRC usage during warm reset flow
      //
      if ((SocketData->Cpu[Soc].Valid == TRUE) && (SocketData->Cpu[Soc].SocType == SOCKET_TYPE_CPU)) {

        Ms2IdiGetFieldsSncCfg (Soc, &FullSncEnable, &SncIndEnable, &NumClusters);
        //
        // num_clusters definition in Core/CBPMA: 2'b00 2 Cluster, 2'b01 3 Clusters, 2'b10 4 Clusters, 2'b11 RSVD
        // num_clusters definition in MS2IDI/IIO/UPI/CHA: 2'b00 1 Cluster, 2'b01 2 Clusters, 2'b10 RSVD, 2'b11 4 Clusters
        //
        if (SncIndEnable == 1) {
          if (NumClusters == 1) {
            KTIVAR->OutNumOfCluster[Soc] = 2;
          } else if (NumClusters == 3) {
            KTIVAR->OutNumOfCluster[Soc] = 4;
          } else if (NumClusters == 0) {
            KTIVAR->OutNumOfCluster[Soc] = 1;
          }
        }
        KTIVAR->OutSncGbAlignRequired = 1;
        //
        // update into  OutNumOfClusterPerSystem for IioUds usage
        //
        if (KTIVAR->OutNumOfCluster[Soc] != 0) {
          KTIVAR->OutNumOfClusterPerSystem = KTIVAR->OutNumOfCluster[Soc];
        }
        KtiDebugPrintInfo1 ((KTI_DEBUG_INFO1, "\n OutNumOfCluster = %x, FullSncEnable=%x, SncIndEnable=%x, NumClusters=%x \n",
                            KTIVAR->OutNumOfCluster[Soc], FullSncEnable, SncIndEnable, NumClusters));
      } // socket valid
    } // socket loop
  } else {
    //
    // GB Alignment only required if SNC or Prefetch is enabled
    //
    KTIVAR->OutSncGbAlignRequired = 0;
  }

  //
  // s5370269: Disable XPT Prefetch even SNC is disabled
  //
  if (KTIVAR->OutXptPrefetch == KTI_DISABLE) {

    for (Soc = 0; Soc < MAX_SOCKET; Soc++) {
      //
      // check if socket is valid
      //
      if  (SocketPresent (Soc)) {
        DisableXptPrefetch (KtiInternalGlobal, Soc);
      }
    }
  }

  return KTI_SUCCESS;
}