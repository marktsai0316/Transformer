/** @file
  Cmd Clk Ctl Delay values from KIT team

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

#include <Library/MemoryCoreLib.h>
#include <Library/PkgDelayLib.h>
#include <RcRegs.h>
#include <Library/UsraAccessApi.h>
#include <UncoreCommonIncludes.h>
#include <Cpu/CpuIds.h>
#include <Library/KtiApi.h>
#include <Library/MemoryServicesLib.h>
#include <Memory/MemCmdCtlClkCommon.h>

/* ICX mapping
----------------------------------------------------------------------------------------------------------------------------------
ERR1#   ODT[3]        0A    ddrcmdctlckech#_0   {DDRCRCMDPICODING.CmdPiLogicDelay0,   DDRCRCMDPICODING.CmdPiCode0}
GNT1#   CS_N[5]       1A                        {DDRCRCMDPICODING.CmdPiLogicDelay1,   DDRCRCMDPICODING.CmdPiCode1}
        C2            2A                        {DDRCRCMDPICODING.CmdPiLogicDelay2,   DDRCRCMDPICODING.CmdPiCode2}
        MA[17]        3A                        {DDRCRCMDPICODING2.CmdPiLogicDelay3,  DDRCRCMDPICODING2.CmdPiCode3}
        CS_N[6]       4A                        {DDRCRCMDPICODING2.CmdPiLogicDelay4,  DDRCRCMDPICODING2.CmdPiCode4}
        CS_N[7]       5A                        {DDRCRCMDPICODING2.CmdPiLogicDelay5,  DDRCRCMDPICODING2.CmdPiCode5}
        ODT[0]        6A                        {DDRCRCMDPICODING3.CmdPiLogicDelay6,  DDRCRCMDPICODING3.CmdPiCode6}
        CS_N[0]       7A                        {DDRCRCMDPICODING3.CmdPiLogicDelay7,  DDRCRCMDPICODING3.CmdPiCode7}
ERR0#   ODT[1]        8A                        {DDRCRCMDPICODING3.CmdPiLogicDelay8,  DDRCRCMDPICODING3.CmdPiCode8}
GNT0#   CS_N[1]       9A                        {DDRCRCMDPICODING4.CmdPiLogicDelay9,  DDRCRCMDPICODING4.CmdPiCode9}
        CS_N[3]       10A                       {DDRCRCMDPICODING4.CmdPiLogicDelay10, DDRCRCMDPICODING4.CmdPiCode10}
        CS_N[2]       11A                       {DDRCRCMDPICODING4.CmdPiLogicDelay11, DDRCRCMDPICODING4.CmdPiCode11}
        BA[0]         0B    ddrcmdctlckech#_3   {DDRCRCMDPICODING.CmdPiLogicDelay0,   DDRCRCMDPICODING.CmdPiCode0}
        MA[0]         1B                        {DDRCRCMDPICODING.CmdPiLogicDelay1,   DDRCRCMDPICODING.CmdPiCode1}
        BA[1]         2B                        {DDRCRCMDPICODING.CmdPiLogicDelay2,   DDRCRCMDPICODING.CmdPiCode2}
        MA[10]        3B                        {DDRCRCMDPICODING2.CmdPiLogicDelay3,  DDRCRCMDPICODING2.CmdPiCode3}
        MA[14]/WE_N   4B                        {DDRCRCMDPICODING2.CmdPiLogicDelay4,  DDRCRCMDPICODING2.CmdPiCode4}
        MA[16]/RAS_N  5B                        {DDRCRCMDPICODING2.CmdPiLogicDelay5,  DDRCRCMDPICODING2.CmdPiCode5}
        MA[13]        6B                        {DDRCRCMDPICODING3.CmdPiLogicDelay6,  DDRCRCMDPICODING3.CmdPiCode6}
        MA[15]/CAS_N  7B                        {DDRCRCMDPICODING3.CmdPiLogicDelay7,  DDRCRCMDPICODING3.CmdPiCode7}
        ODT[2]        8B                        {DDRCRCMDPICODING3.CmdPiLogicDelay8,  DDRCRCMDPICODING3.CmdPiCode8}
        CS_N[4]       9B                        {DDRCRCMDPICODING4.CmdPiLogicDelay9,  DDRCRCMDPICODING4.CmdPiCode9}

SOUTH
DDR-T   DDR4      Pi,Side   FUB Address         Delay Control CRs
----------------------------------------------------------------------------------------------------------------------------------
Note: Add 12 to these Pi group numbers:

        MA[12]         0A'   ddrcmdctlckech#_1  {DDRCRCMDPICODING.CmdPiLogicDelay0,   DDRCRCMDPICODING.CmdPiCode0}
        MA[9]          1A'                      {DDRCRCMDPICODING.CmdPiLogicDelay1,   DDRCRCMDPICODING.CmdPiCode1}
        MA[11]         2A'                      {DDRCRCMDPICODING.CmdPiLogicDelay2,   DDRCRCMDPICODING.CmdPiCode2}
        BG[1]          3A'                      {DDRCRCMDPICODING2.CmdPiLogicDelay3,  DDRCRCMDPICODING2.CmdPiCode3}
        BG[0]          4A'                      {DDRCRCMDPICODING2.CmdPiLogicDelay4,  DDRCRCMDPICODING2.CmdPiCode4}
        ACT_N          5A'                      {DDRCRCMDPICODING2.CmdPiLogicDelay5,  DDRCRCMDPICODING2.CmdPiCode5}
        ALERT_N        6A'                      {DDRCRCMDPICODING3.CmdPiLogicDelay6,  DDRCRCMDPICODING3.CmdPiCode6}
Req1#   CKE[3]         7A'                      {DDRCRCMDPICODING3.CmdPiLogicDelay7,  DDRCRCMDPICODING3.CmdPiCode7}
        SPARE          8A'                      {DDRCRCMDPICODING3.CmdPiLogicDelay8,  DDRCRCMDPICODING3.CmdPiCode8}
        CKE[2]         9A'                      {DDRCRCMDPICODING4.CmdPiLogicDelay9,  DDRCRCMDPICODING4.CmdPiCode9}
        CKE[0]         10A'                     {DDRCRCMDPICODING4.CmdPiLogicDelay10, DDRCRCMDPICODING4.CmdPiCode10}
Req0#   CKE[1]         11A'                     {DDRCRCMDPICODING4.CmdPiLogicDelay11, DDRCRCMDPICODING4.CmdPiCode11}
        SPARE          0B'    ddrcmdctlckech#_2 {DDRCRCMDPICODING.CmdPiLogicDelay0,   DDRCRCMDPICODING.CmdPiCode0}
        PAR            1B'                      {DDRCRCMDPICODING.CmdPiLogicDelay1,   DDRCRCMDPICODING.CmdPiCode1}
        MA[3]          2B'                      {DDRCRCMDPICODING.CmdPiLogicDelay2,   DDRCRCMDPICODING.CmdPiCode2}
        MA[1]          3B'                      {DDRCRCMDPICODING2.CmdPiLogicDelay3,  DDRCRCMDPICODING2.CmdPiCode3}
        MA[4]          4B'                      {DDRCRCMDPICODING2.CmdPiLogicDelay4,  DDRCRCMDPICODING2.CmdPiCode4}
        MA[2]          5B'                      {DDRCRCMDPICODING2.CmdPiLogicDelay5,  DDRCRCMDPICODING2.CmdPiCode5}
        MA[6]          6B'                      {DDRCRCMDPICODING3.CmdPiLogicDelay6,  DDRCRCMDPICODING3.CmdPiCode6}
        MA[5]          7B'                      {DDRCRCMDPICODING3.CmdPiLogicDelay7,  DDRCRCMDPICODING3.CmdPiCode7}
        MA[7]          8B'                      {DDRCRCMDPICODING3.CmdPiLogicDelay8,  DDRCRCMDPICODING3.CmdPiCode8}
        MA[8]          9B'                      {DDRCRCMDPICODING4.CmdPiLogicDelay9,  DDRCRCMDPICODING4.CmdPiCode9}
*/

/* ICX definitions */
IoGroupStruct CtlTableStruct[] = {
  { 0, 6, SIDE_A },
  { 1, 6, SIDE_A },
  { 2, 6, SIDE_A },
  { 3, 6, SIDE_A },
  { 4, 6, SIDE_A },
  { 5, 6, SIDE_A },
  { 0, 10 + CC_SOUTH, SIDE_A },
  { 1, 10 + CC_SOUTH, SIDE_A },
  { 2, 10 + CC_SOUTH, SIDE_A },
  { 3, 10 + CC_SOUTH, SIDE_A },
  { 4, 10 + CC_SOUTH, SIDE_A },
  { 5, 10 + CC_SOUTH, SIDE_A },
  { 0, 7, SIDE_A },
  { 1, 7, SIDE_A },
  { 2, 7, SIDE_A },
  { 3, 7, SIDE_A },
  { 4, 7, SIDE_A },
  { 5, 7, SIDE_A },
  { 0, 11, SIDE_A },
  { 1, 11, SIDE_A },
  { 2, 11, SIDE_A },
  { 3, 11, SIDE_A },
  { 4, 11, SIDE_A },
  { 5, 11, SIDE_A },
  { 0, 10, SIDE_A },
  { 1, 10, SIDE_A },
  { 2, 10, SIDE_A },
  { 3, 10, SIDE_A },
  { 4, 10, SIDE_A },
  { 5, 10, SIDE_A },
  { 0, 8, SIDE_A },
  { 1, 8, SIDE_A },
  { 2, 8, SIDE_A },
  { 3, 8, SIDE_A },
  { 4, 8, SIDE_A },
  { 5, 8, SIDE_A },
  { 0, 11 + CC_SOUTH, SIDE_A },
  { 1, 11 + CC_SOUTH, SIDE_A },
  { 2, 11 + CC_SOUTH, SIDE_A },
  { 3, 11 + CC_SOUTH, SIDE_A },
  { 4, 11 + CC_SOUTH, SIDE_A },
  { 5, 11 + CC_SOUTH, SIDE_A },
  { 0, 9, SIDE_A },
  { 1, 9, SIDE_A },
  { 2, 9, SIDE_A },
  { 3, 9, SIDE_A },
  { 4, 9, SIDE_A },
  { 5, 9, SIDE_A },
  { 0, 8, SIDE_B },
  { 1, 8, SIDE_B },
  { 2, 8, SIDE_B },
  { 3, 8, SIDE_B },
  { 4, 8, SIDE_B },
  { 5, 8, SIDE_B },
  { 0, 9 + CC_SOUTH, SIDE_A },
  { 1, 9 + CC_SOUTH, SIDE_A },
  { 2, 9 + CC_SOUTH, SIDE_A },
  { 3, 9 + CC_SOUTH, SIDE_A },
  { 4, 9 + CC_SOUTH, SIDE_A },
  { 5, 9 + CC_SOUTH, SIDE_A },
  { 0, 9, SIDE_B },
  { 1, 9, SIDE_B },
  { 2, 9, SIDE_B },
  { 3, 9, SIDE_B },
  { 4, 9, SIDE_B },
  { 5, 9, SIDE_B },
  { 0, 4, SIDE_A },
  { 1, 4, SIDE_A },
  { 2, 4, SIDE_A },
  { 3, 4, SIDE_A },
  { 4, 4, SIDE_A },
  { 5, 4, SIDE_A },
  { 0, 5, SIDE_A },
  { 1, 5, SIDE_A },
  { 2, 5, SIDE_A },
  { 3, 5, SIDE_A },
  { 4, 5, SIDE_A },
  { 5, 5, SIDE_A },
  { 0, 0, SIDE_A },
  { 1, 0, SIDE_A },
  { 2, 0, SIDE_A },
  { 3, 0, SIDE_A },
  { 4, 0, SIDE_A },
  { 5, 0, SIDE_A },
  { 0, 7 + CC_SOUTH, SIDE_A },
  { 1, 7 + CC_SOUTH, SIDE_A },
  { 2, 7 + CC_SOUTH, SIDE_A },
  { 3, 7 + CC_SOUTH, SIDE_A },
  { 4, 7 + CC_SOUTH, SIDE_A },
  { 5, 7 + CC_SOUTH, SIDE_A },
  { 0, 1, SIDE_A },
  { 1, 1, SIDE_A },
  { 2, 1, SIDE_A },
  { 3, 1, SIDE_A },
  { 4, 1, SIDE_A },
  { 5, 1, SIDE_A }
};

UINT8  CtlDelaySize = (UINT8) (sizeof (CtlTableStruct) / sizeof (IoGroupStruct));

IoGroupClkStruct ClkTableStruct[] = {
   {0,  0 },
   {1,  0 },
   {2,  0 },
   {3,  0 },
   {4,  0 },
   {5,  0 },
   {0,  1 },
   {1,  1 },
   {2,  1 },
   {3,  1 },
   {4,  1 },
   {5,  1 },
   {0,  2 },
   {1,  2 },
   {2,  2 },
   {3,  2 },
   {4,  2 },
   {5,  2 },
   {0,  3 },
   {1,  3 },
   {2,  3 },
   {3,  3 },
   {4,  3 },
   {5,  3 }
};

UINT8  ClkDelaySize = (UINT8) (sizeof (ClkTableStruct) / sizeof (IoGroupClkStruct));

/* ICX definitions */
IoGroupStruct CmdTableStruct[] = {
  { 0, 5, SIDE_B },
  { 1, 5, SIDE_B },
  { 2, 5, SIDE_B },
  { 3, 5, SIDE_B },
  { 4, 5, SIDE_B },
  { 5, 5, SIDE_B },
  { 0, 7, SIDE_B },
  { 1, 7, SIDE_B },
  { 2, 7, SIDE_B },
  { 3, 7, SIDE_B },
  { 4, 7, SIDE_B },
  { 5, 7, SIDE_B },
  { 0, 4, SIDE_B },
  { 1, 4, SIDE_B },
  { 2, 4, SIDE_B },
  { 3, 4, SIDE_B },
  { 4, 4, SIDE_B },
  { 5, 4, SIDE_B },
  { 0, 0, SIDE_B },
  { 1, 0, SIDE_B },
  { 2, 0, SIDE_B },
  { 3, 0, SIDE_B },
  { 4, 0, SIDE_B },
  { 5, 0, SIDE_B },
  { 0, 2, SIDE_B },
  { 1, 2, SIDE_B },
  { 2, 2, SIDE_B },
  { 3, 2, SIDE_B },
  { 4, 2, SIDE_B },
  { 5, 2, SIDE_B },
  { 0, 1, SIDE_B },
  { 1, 1, SIDE_B },
  { 2, 1, SIDE_B },
  { 3, 1, SIDE_B },
  { 4, 1, SIDE_B },
  { 5, 1, SIDE_B },
  { 0, 3 + CC_SOUTH, SIDE_B },
  { 1, 3 + CC_SOUTH, SIDE_B },
  { 2, 3 + CC_SOUTH, SIDE_B },
  { 3, 3 + CC_SOUTH, SIDE_B },
  { 4, 3 + CC_SOUTH, SIDE_B },
  { 5, 3 + CC_SOUTH, SIDE_B },
  { 0, 5 + CC_SOUTH, SIDE_B },
  { 1, 5 + CC_SOUTH, SIDE_B },
  { 2, 5 + CC_SOUTH, SIDE_B },
  { 3, 5 + CC_SOUTH, SIDE_B },
  { 4, 5 + CC_SOUTH, SIDE_B },
  { 5, 5 + CC_SOUTH, SIDE_B },
  { 0, 2 + CC_SOUTH, SIDE_B },
  { 1, 2 + CC_SOUTH, SIDE_B },
  { 2, 2 + CC_SOUTH, SIDE_B },
  { 3, 2 + CC_SOUTH, SIDE_B },
  { 4, 2 + CC_SOUTH, SIDE_B },
  { 5, 2 + CC_SOUTH, SIDE_B },
  { 0, 4 + CC_SOUTH, SIDE_B },
  { 1, 4 + CC_SOUTH, SIDE_B },
  { 2, 4 + CC_SOUTH, SIDE_B },
  { 3, 4 + CC_SOUTH, SIDE_B },
  { 4, 4 + CC_SOUTH, SIDE_B },
  { 5, 4 + CC_SOUTH, SIDE_B },
  { 0, 7 + CC_SOUTH, SIDE_B },
  { 1, 7 + CC_SOUTH, SIDE_B },
  { 2, 7 + CC_SOUTH, SIDE_B },
  { 3, 7 + CC_SOUTH, SIDE_B },
  { 4, 7 + CC_SOUTH, SIDE_B },
  { 5, 7 + CC_SOUTH, SIDE_B },
  { 0, 6 + CC_SOUTH, SIDE_B },
  { 1, 6 + CC_SOUTH, SIDE_B },
  { 2, 6 + CC_SOUTH, SIDE_B },
  { 3, 6 + CC_SOUTH, SIDE_B },
  { 4, 6 + CC_SOUTH, SIDE_B },
  { 5, 6 + CC_SOUTH, SIDE_B },
  { 0, 8 + CC_SOUTH, SIDE_B },
  { 1, 8 + CC_SOUTH, SIDE_B },
  { 2, 8 + CC_SOUTH, SIDE_B },
  { 3, 8 + CC_SOUTH, SIDE_B },
  { 4, 8 + CC_SOUTH, SIDE_B },
  { 5, 8 + CC_SOUTH, SIDE_B },
  { 0, 9 + CC_SOUTH, SIDE_B },
  { 1, 9 + CC_SOUTH, SIDE_B },
  { 2, 9 + CC_SOUTH, SIDE_B },
  { 3, 9 + CC_SOUTH, SIDE_B },
  { 4, 9 + CC_SOUTH, SIDE_B },
  { 5, 9 + CC_SOUTH, SIDE_B },
  { 0, 1 + CC_SOUTH, SIDE_A },
  { 1, 1 + CC_SOUTH, SIDE_A },
  { 2, 1 + CC_SOUTH, SIDE_A },
  { 3, 1 + CC_SOUTH, SIDE_A },
  { 4, 1 + CC_SOUTH, SIDE_A },
  { 5, 1 + CC_SOUTH, SIDE_A },
  { 0, 3, SIDE_B },
  { 1, 3, SIDE_B },
  { 2, 3, SIDE_B },
  { 3, 3, SIDE_B },
  { 4, 3, SIDE_B },
  { 5, 3, SIDE_B },
  { 0, 2 + CC_SOUTH, SIDE_A },
  { 1, 2 + CC_SOUTH, SIDE_A },
  { 2, 2 + CC_SOUTH, SIDE_A },
  { 3, 2 + CC_SOUTH, SIDE_A },
  { 4, 2 + CC_SOUTH, SIDE_A },
  { 5, 2 + CC_SOUTH, SIDE_A },
  { 0, 0 + CC_SOUTH, SIDE_A },
  { 1, 0 + CC_SOUTH, SIDE_A },
  { 2, 0 + CC_SOUTH, SIDE_A },
  { 3, 0 + CC_SOUTH, SIDE_A },
  { 4, 0 + CC_SOUTH, SIDE_A },
  { 5, 0 + CC_SOUTH, SIDE_A },
  { 0, 6, SIDE_B },
  { 1, 6, SIDE_B },
  { 2, 6, SIDE_B },
  { 3, 6, SIDE_B },
  { 4, 6, SIDE_B },
  { 5, 6, SIDE_B },
  { 0, 4, SIDE_B },
  { 1, 4, SIDE_B },
  { 2, 4, SIDE_B },
  { 3, 4, SIDE_B },
  { 4, 4, SIDE_B },
  { 5, 4, SIDE_B },
  { 0, 7, SIDE_B },
  { 1, 7, SIDE_B },
  { 2, 7, SIDE_B },
  { 3, 7, SIDE_B },
  { 4, 7, SIDE_B },
  { 5, 7, SIDE_B },
  { 0, 5, SIDE_B },
  { 1, 5, SIDE_B },
  { 2, 5, SIDE_B },
  { 3, 5, SIDE_B },
  { 4, 5, SIDE_B },
  { 5, 5, SIDE_B },
  { 0, 3, SIDE_A },
  { 1, 3, SIDE_A },
  { 2, 3, SIDE_A },
  { 3, 3, SIDE_A },
  { 4, 3, SIDE_A },
  { 5, 3, SIDE_A },
  { 0, 1 + CC_SOUTH, SIDE_B },
  { 1, 1 + CC_SOUTH, SIDE_B },
  { 2, 1 + CC_SOUTH, SIDE_B },
  { 3, 1 + CC_SOUTH, SIDE_B },
  { 4, 1 + CC_SOUTH, SIDE_B },
  { 5, 1 + CC_SOUTH, SIDE_B },
  { 0, 4 + CC_SOUTH, SIDE_A },
  { 1, 4 + CC_SOUTH, SIDE_A },
  { 2, 4 + CC_SOUTH, SIDE_A },
  { 3, 4 + CC_SOUTH, SIDE_A },
  { 4, 4 + CC_SOUTH, SIDE_A },
  { 5, 4 + CC_SOUTH, SIDE_A },
  { 0, 3 + CC_SOUTH, SIDE_A },
  { 1, 3 + CC_SOUTH, SIDE_A },
  { 2, 3 + CC_SOUTH, SIDE_A },
  { 3, 3 + CC_SOUTH, SIDE_A },
  { 4, 3 + CC_SOUTH, SIDE_A },
  { 5, 3 + CC_SOUTH, SIDE_A },
  { 0, 5 + CC_SOUTH, SIDE_A },
  { 1, 5 + CC_SOUTH, SIDE_A },
  { 2, 5 + CC_SOUTH, SIDE_A },
  { 3, 5 + CC_SOUTH, SIDE_A },
  { 4, 5 + CC_SOUTH, SIDE_A },
  { 5, 5 + CC_SOUTH, SIDE_A },
  { 0, 2, SIDE_A },
  { 1, 2, SIDE_A },
  { 2, 2, SIDE_A },
  { 3, 2, SIDE_A },
  { 4, 2, SIDE_A },
  { 5, 2, SIDE_A }
};

UINT8  CmdDelaySize = (UINT8) (sizeof (CmdTableStruct) / sizeof (IoGroupStruct));

UINT8 CtlDelayXcc [] = {
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153
  };

UINT8 CmdDelayXcc [] = {
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145
};

UINT16 ClkDelayXcc [] = {
  166,
  170,
  146,
  170,
  179,
  163,
  188,
  187,
  155,
  187,
  186,
  173,
  170,
  195,
  118,
  166,
  179,
  133,
  164,
  168,
  103,
  170,
  159,
  117
};

UINT8 CtlDelayHcc [] = {
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153
  };

UINT8 CmdDelayHcc [] = {
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145
};


UINT16 ClkDelayHcc [] = {
  166,
  170,
  146,
  170,
  179,
  163,
  188,
  187,
  155,
  187,
  186,
  173,
  170,
  195,
  118,
  166,
  179,
  133,
  164,
  168,
  103,
  170,
  159,
  117
};

//LCC
UINT8 CtlDelayLcc [] = {
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153,
  153
  };

UINT8 CmdDelayLcc [] = {
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145,
  145
};

UINT16 ClkDelayLcc [] = {
  166,
  170,
  146,
  170,
  179,
  163,
  188,
  187,
  155,
  187,
  186,
  173,
  170,
  195,
  118,
  166,
  179,
  133,
  164,
  168,
  103,
  170,
  159,
  117
};

/**
  Get Command Delay Value table and number of table entries

  @param[out]  *Size       Pointer to number of entries in the Table
  @param[out]  **CmdDelay  Pointer to Command Delay Table
  @param[out]  **CmdTable  Pointer to Command table signal

  @retval EFI_SUCCESS   Table Present
  @retval !EFI_SUCCESS  Table not Present

**/
EFI_STATUS
EFIAPI
GetCmdDelay (
  OUT  UINT8          *Size,
  OUT  UINT8          **CmdDelay,
  OUT  IoGroupStruct  **CmdTable
  )
{
  EFI_STATUS Status = EFI_SUCCESS;

  *CmdTable = CmdTableStruct;
  *Size = CmdDelaySize;

  switch (GetChopType (GetCurrentSocketId ())) {
    case TypeLcc:
      *CmdDelay = CmdDelayLcc;
      break;

    case TypeHcc:
      *CmdDelay = CmdDelayHcc;
      break;

    case TypeXcc:
      *CmdDelay = CmdDelayXcc;
      break;

    default:
      Status = EFI_UNSUPPORTED;
  }
  return Status;
}

/**
  Get Control Delay Value table and number of table entries

  @param[out]  *Size       Pointer to number of entries in the Table
  @param[out]  **CtlDelay  Pointer to Control Delay Table
  @param[out]  **CtlTable  Pointer to Control Table Signal

  @retval EFI_SUCCESS   Table Present
  @retval !EFI_SUCCESS  Table not Present

**/
EFI_STATUS
EFIAPI
GetCtlDelay (
  OUT  UINT8          *Size,
  OUT  UINT8          **CtlDelay,
  OUT  IoGroupStruct  **CtlTable
  )
{
  EFI_STATUS Status = EFI_SUCCESS;
  *CtlTable = CtlTableStruct;
  *Size = CtlDelaySize;

  switch (GetChopType (GetCurrentSocketId ())) {

    case TypeLcc:
      *CtlDelay = CtlDelayLcc;
      break;

    case TypeHcc:
      *CtlDelay = CtlDelayHcc;
      break;

    case TypeXcc:
      *CtlDelay = CtlDelayXcc;
      break;

    default:
      Status = EFI_UNSUPPORTED;
  }
  return Status;
}

/**
  Get Clock Delay Value table and number of table entries

  @param[out]  *Size        Pointer to number of entries in the Table
  @param[out]  **ClkDelay   Pointer to Clock Delay Value Table
  @param[out]  **ClkTable   Pointer to Clock Table Signal

  @retval EFI_SUCCESS   Table Present
  @retval !EFI_SUCCESS  Table not Present

**/
EFI_STATUS
EFIAPI
GetClkDelay (
  OUT  UINT8              *Size,
  OUT  UINT16             **ClkDelay,
  OUT  IoGroupClkStruct   **ClkTable
  )
{
  EFI_STATUS Status = EFI_SUCCESS;
  *ClkTable = ClkTableStruct;
  *Size = ClkDelaySize;

  switch (GetChopType (GetCurrentSocketId ())) {

    case TypeLcc:
      *ClkDelay = ClkDelayLcc;
      break;

    case TypeHcc:
      *ClkDelay = ClkDelayHcc;
      break;

    case TypeXcc:
      *ClkDelay = ClkDelayXcc;
      break;

    default:
      Status = EFI_UNSUPPORTED;
  }
  return Status;
}
