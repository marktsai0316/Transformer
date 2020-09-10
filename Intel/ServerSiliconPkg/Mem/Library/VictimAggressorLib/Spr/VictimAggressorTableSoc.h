/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2017-2018 Intel Corporation. <BR>

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

#ifndef _victimaggressortablesoc_h
#define _victimaggressortablesoc_h

#include <Library/VictimAggresorTableLib.h>

#define CAPACITIVE 0
#define INDUCTIVE  1

//  Victim aggressor table (two aggressors listed per victim bit location in array)
PXC_VIC_AGGR VicAggrTable = {
    {
      { //channel0
        {DQ1, DQ4},
        {DQ0, DQ5},
        {DQ6, DQ3},
        {DQ2, DQ7},
        {DQ0, DQ5},
        {DQ4, DQ1},
        {DQ2, DQ7},
        {DQ3, DQ6},
        {DQ9, DQ12},
        {DQ8, DQ13},
        {DQ11, DQ14},
        {DQ10, DQ15},
        {DQ8, DQ13},
        {DQ9, DQ12},
        {DQ10, DQ15},
        {DQ11, DQ14},
        {DQ20, DQ21},
        {DQ21, DQ21},
        {DQ19, DQ23},
        {DQ18, DQ23},
        {DQ16, DQ21},
        {DQ20, DQ16},
        {DQ18, DQ18},
        {DQ19, DQ18},
        {DQ25, DQ28},
        {DQ24, DQ30},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ29, DQ24},
        {DQ28, DQ31},
        {DQ26, DQ25},
        {DQ27, DQ29},
        {DQ33, DQ36},
        {DQ32, DQ38},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ37, DQ32},
        {DQ36, DQ39},
        {DQ34, DQ33},
        {DQ35, DQ37},
        {DQ41, DQ44},
        {DQ40, DQ46},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ45, DQ40},
        {DQ44, DQ47},
        {DQ42, DQ41},
        {DQ43, DQ45},
        {DQ49, DQ52},
        {DQ48, DQ54},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ53, DQ48},
        {DQ52, DQ55},
        {DQ50, DQ49},
        {DQ51, DQ53},
        {DQ60, DQ63},
        {DQ61, DQ58},
        {DQ59, DQ57},
        {DQ58, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ63, DQ63},
        {DQ62, DQ56},
        {DQ65, DQ68},
        {DQ64, DQ70},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ69, DQ64},
        {DQ68, DQ71},
        {DQ66, DQ65},
        {DQ67, DQ69}
      },
#if (MAX_CH > 1)
      { //channel1
        {DQ4, DQ5},
        {DQ5, DQ5},
        {DQ3, DQ7},
        {DQ2, DQ7},
        {DQ0, DQ5},
        {DQ4, DQ0},
        {DQ2, DQ2},
        {DQ3, DQ2},
        {DQ12, DQ13},
        {DQ13, DQ13},
        {DQ11, DQ15},
        {DQ10, DQ15},
        {DQ8, DQ13},
        {DQ12, DQ8},
        {DQ10, DQ10},
        {DQ11, DQ10},
        {DQ20, DQ22},
        {DQ21, DQ23},
        {DQ22, DQ19},
        {DQ23, DQ18},
        {DQ16, DQ21},
        {DQ17, DQ20},
        {DQ18, DQ16},
        {DQ19, DQ17},
        {DQ28, DQ30},
        {DQ29, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ24, DQ29},
        {DQ25, DQ28},
        {DQ26, DQ24},
        {DQ27, DQ25},
        {DQ33, DQ38},
        {DQ32, DQ32},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ37, DQ39},
        {DQ36, DQ36},
        {DQ34, DQ32},
        {DQ35, DQ36},
        {DQ44, DQ46},
        {DQ45, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ40, DQ45},
        {DQ41, DQ44},
        {DQ42, DQ40},
        {DQ43, DQ41},
        {DQ52, DQ54},
        {DQ53, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ48, DQ53},
        {DQ49, DQ52},
        {DQ50, DQ48},
        {DQ51, DQ49},
        {DQ60, DQ62},
        {DQ61, DQ63},
        {DQ62, DQ59},
        {DQ63, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ58, DQ56},
        {DQ59, DQ57},
        {DQ68, DQ70},
        {DQ69, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ64, DQ69},
        {DQ65, DQ68},
        {DQ66, DQ64},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 1)
#if (MAX_CH > 2)
      { //channel2
        {DQ4, DQ5},
        {DQ5, DQ5},
        {DQ3, DQ7},
        {DQ2, DQ7},
        {DQ0, DQ5},
        {DQ4, DQ0},
        {DQ2, DQ2},
        {DQ3, DQ2},
        {DQ12, DQ13},
        {DQ13, DQ13},
        {DQ11, DQ15},
        {DQ10, DQ15},
        {DQ8, DQ13},
        {DQ12, DQ8},
        {DQ10, DQ10},
        {DQ11, DQ10},
        {DQ20, DQ20},
        {DQ21, DQ20},
        {DQ19, DQ22},
        {DQ18, DQ22},
        {DQ21, DQ17},
        {DQ17, DQ20},
        {DQ18, DQ19},
        {DQ19, DQ19},
        {DQ28, DQ30},
        {DQ29, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ24, DQ29},
        {DQ25, DQ28},
        {DQ26, DQ24},
        {DQ27, DQ25},
        {DQ36, DQ38},
        {DQ37, DQ39},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ32, DQ37},
        {DQ33, DQ36},
        {DQ34, DQ32},
        {DQ35, DQ33},
        {DQ44, DQ46},
        {DQ45, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ40, DQ45},
        {DQ41, DQ44},
        {DQ42, DQ40},
        {DQ43, DQ41},
        {DQ52, DQ54},
        {DQ53, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ48, DQ53},
        {DQ49, DQ52},
        {DQ50, DQ48},
        {DQ51, DQ49},
        {DQ60, DQ62},
        {DQ61, DQ63},
        {DQ62, DQ59},
        {DQ63, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ58, DQ56},
        {DQ59, DQ57},
        {DQ68, DQ70},
        {DQ69, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ64, DQ69},
        {DQ65, DQ68},
        {DQ66, DQ64},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 2)
#if (MAX_CH > 3)
      { //channel3
        {DQ1, DQ4},
        {DQ0, DQ5},
        {DQ3, DQ6},
        {DQ2, DQ7},
        {DQ0, DQ5},
        {DQ1, DQ4},
        {DQ2, DQ7},
        {DQ3, DQ6},
        {DQ9, DQ13},
        {DQ8, DQ8},
        {DQ11, DQ15},
        {DQ10, DQ10},
        {DQ13, DQ13},
        {DQ12, DQ8},
        {DQ19, DQ19},
        {DQ10, DQ10},
        {DQ20, DQ20},
        {DQ21, DQ20},
        {DQ19, DQ22},
        {DQ18, DQ22},
        {DQ21, DQ17},
        {DQ17, DQ20},
        {DQ18, DQ19},
        {DQ19, DQ19},
        {DQ25, DQ29},
        {DQ24, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ29, DQ30},
        {DQ28, DQ24},
        {DQ26, DQ28},
        {DQ27, DQ25},
        {DQ33, DQ37},
        {DQ32, DQ39},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ37, DQ38},
        {DQ36, DQ32},
        {DQ34, DQ36},
        {DQ35, DQ33},
        {DQ41, DQ45},
        {DQ40, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ45, DQ46},
        {DQ44, DQ40},
        {DQ42, DQ44},
        {DQ43, DQ41},
        {DQ49, DQ53},
        {DQ48, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ53, DQ54},
        {DQ52, DQ48},
        {DQ50, DQ52},
        {DQ51, DQ49},
        {DQ60, DQ60},
        {DQ61, DQ61},
        {DQ63, DQ59},
        {DQ62, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ59, DQ59},
        {DQ58, DQ58},
        {DQ65, DQ69},
        {DQ64, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ69, DQ70},
        {DQ68, DQ64},
        {DQ66, DQ68},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 3)
#if (MAX_CH > 4)
      { //channel4
        {DQ4, DQ4},
        {DQ5, DQ4},
        {DQ3, DQ6},
        {DQ2, DQ6},
        {DQ5, DQ1},
        {DQ1, DQ4},
        {DQ2, DQ3},
        {DQ3, DQ3},
        {DQ12, DQ12},
        {DQ13, DQ12},
        {DQ11, DQ15},
        {DQ10, DQ15},
        {DQ13, DQ9},
        {DQ9, DQ12},
        {DQ15, DQ15},
        {DQ11, DQ10},
        {DQ20, DQ22},
        {DQ21, DQ23},
        {DQ22, DQ19},
        {DQ23, DQ18},
        {DQ16, DQ21},
        {DQ17, DQ20},
        {DQ18, DQ16},
        {DQ19, DQ17},
        {DQ28, DQ30},
        {DQ29, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ24, DQ29},
        {DQ25, DQ28},
        {DQ26, DQ24},
        {DQ27, DQ25},
        {DQ33, DQ39},
        {DQ32, DQ32},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ37, DQ37},
        {DQ36, DQ38},
        {DQ34, DQ37},
        {DQ35, DQ32},
        {DQ44, DQ46},
        {DQ45, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ40, DQ45},
        {DQ41, DQ44},
        {DQ42, DQ40},
        {DQ43, DQ41},
        {DQ52, DQ54},
        {DQ53, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ48, DQ53},
        {DQ49, DQ52},
        {DQ50, DQ48},
        {DQ51, DQ49},
        {DQ60, DQ62},
        {DQ61, DQ63},
        {DQ62, DQ62},
        {DQ63, DQ63},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ58, DQ56},
        {DQ59, DQ57},
        {DQ68, DQ70},
        {DQ69, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ64, DQ69},
        {DQ65, DQ68},
        {DQ66, DQ64},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 4)
#if (MAX_CH > 5)
      { //channel5
        {DQ4, DQ4},
        {DQ5, DQ4},
        {DQ3, DQ6},
        {DQ2, DQ6},
        {DQ5, DQ1},
        {DQ1, DQ4},
        {DQ2, DQ3},
        {DQ3, DQ3},
        {DQ12, DQ12},
        {DQ13, DQ12},
        {DQ11, DQ15},
        {DQ10, DQ15},
        {DQ13, DQ9},
        {DQ9, DQ12},
        {DQ15, DQ15},
        {DQ11, DQ10},
        {DQ20, DQ21},
        {DQ21, DQ21},
        {DQ19, DQ23},
        {DQ18, DQ23},
        {DQ16, DQ21},
        {DQ20, DQ16},
        {DQ18, DQ18},
        {DQ19, DQ18},
        {DQ28, DQ30},
        {DQ29, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ24, DQ29},
        {DQ25, DQ28},
        {DQ26, DQ24},
        {DQ27, DQ25},
        {DQ36, DQ38},
        {DQ32, DQ32},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ32, DQ37},
        {DQ36, DQ36},
        {DQ34, DQ32},
        {DQ35, DQ35},
        {DQ44, DQ46},
        {DQ45, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ40, DQ45},
        {DQ41, DQ44},
        {DQ42, DQ40},
        {DQ43, DQ41},
        {DQ52, DQ54},
        {DQ53, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ48, DQ53},
        {DQ49, DQ52},
        {DQ50, DQ48},
        {DQ51, DQ49},
        {DQ60, DQ62},
        {DQ61, DQ63},
        {DQ62, DQ59},
        {DQ63, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ58, DQ56},
        {DQ59, DQ57},
        {DQ68, DQ70},
        {DQ69, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ64, DQ69},
        {DQ65, DQ68},
        {DQ66, DQ64},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 5)
#if (MAX_CH > 6)
      { //channel6
        {DQ4, DQ4},
        {DQ5, DQ4},
        {DQ3, DQ6},
        {DQ2, DQ6},
        {DQ5, DQ1},
        {DQ1, DQ4},
        {DQ2, DQ3},
        {DQ3, DQ3},
        {DQ12, DQ12},
        {DQ13, DQ12},
        {DQ11, DQ15},
        {DQ10, DQ15},
        {DQ13, DQ9},
        {DQ9, DQ12},
        {DQ15, DQ15},
        {DQ11, DQ10},
        {DQ20, DQ21},
        {DQ21, DQ21},
        {DQ19, DQ23},
        {DQ18, DQ23},
        {DQ16, DQ21},
        {DQ20, DQ16},
        {DQ18, DQ18},
        {DQ19, DQ18},
        {DQ28, DQ30},
        {DQ29, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ24, DQ29},
        {DQ25, DQ28},
        {DQ26, DQ24},
        {DQ27, DQ25},
        {DQ36, DQ38},
        {DQ32, DQ32},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ32, DQ37},
        {DQ36, DQ36},
        {DQ34, DQ32},
        {DQ35, DQ35},
        {DQ44, DQ46},
        {DQ45, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ40, DQ45},
        {DQ41, DQ44},
        {DQ42, DQ40},
        {DQ43, DQ41},
        {DQ52, DQ54},
        {DQ53, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ48, DQ53},
        {DQ49, DQ52},
        {DQ50, DQ48},
        {DQ51, DQ49},
        {DQ60, DQ62},
        {DQ61, DQ63},
        {DQ62, DQ59},
        {DQ63, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ58, DQ56},
        {DQ59, DQ57},
        {DQ68, DQ70},
        {DQ69, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ64, DQ69},
        {DQ65, DQ68},
        {DQ66, DQ64},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 6)
#if (MAX_CH > 7)
      { //channel7
        {DQ4, DQ4},
        {DQ5, DQ4},
        {DQ3, DQ6},
        {DQ2, DQ6},
        {DQ5, DQ1},
        {DQ1, DQ4},
        {DQ2, DQ3},
        {DQ3, DQ3},
        {DQ12, DQ12},
        {DQ13, DQ12},
        {DQ11, DQ15},
        {DQ10, DQ15},
        {DQ13, DQ9},
        {DQ9, DQ12},
        {DQ15, DQ15},
        {DQ11, DQ10},
        {DQ20, DQ21},
        {DQ21, DQ21},
        {DQ19, DQ23},
        {DQ18, DQ23},
        {DQ16, DQ21},
        {DQ20, DQ16},
        {DQ18, DQ18},
        {DQ19, DQ18},
        {DQ28, DQ30},
        {DQ29, DQ31},
        {DQ30, DQ27},
        {DQ31, DQ26},
        {DQ24, DQ29},
        {DQ25, DQ28},
        {DQ26, DQ24},
        {DQ27, DQ25},
        {DQ36, DQ38},
        {DQ32, DQ32},
        {DQ38, DQ35},
        {DQ39, DQ34},
        {DQ32, DQ37},
        {DQ36, DQ36},
        {DQ34, DQ32},
        {DQ35, DQ35},
        {DQ44, DQ46},
        {DQ45, DQ47},
        {DQ46, DQ43},
        {DQ47, DQ42},
        {DQ40, DQ45},
        {DQ41, DQ44},
        {DQ42, DQ40},
        {DQ43, DQ41},
        {DQ52, DQ54},
        {DQ53, DQ55},
        {DQ54, DQ51},
        {DQ55, DQ50},
        {DQ48, DQ53},
        {DQ49, DQ52},
        {DQ50, DQ48},
        {DQ51, DQ49},
        {DQ60, DQ62},
        {DQ61, DQ63},
        {DQ62, DQ59},
        {DQ63, DQ58},
        {DQ56, DQ61},
        {DQ57, DQ60},
        {DQ58, DQ56},
        {DQ59, DQ57},
        {DQ68, DQ70},
        {DQ69, DQ71},
        {DQ70, DQ67},
        {DQ71, DQ66},
        {DQ64, DQ69},
        {DQ65, DQ68},
        {DQ66, DQ64},
        {DQ67, DQ65}
      },
#endif //(MAX_CH > 7)
    },
  };

// Capacitive/inductive settings (per nibble per channel)
PXC_CAP_IND_SETTING CapIndTable = {
  {
    { //channel0
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE }
    },
#if (MAX_CH > 1)
    { //channel1
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 1)
#if (MAX_CH > 2)
    { //channel2
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 2)
#if (MAX_CH > 3)
    { //channel3
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 3)
#if (MAX_CH > 4)
    { //channel4
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 4)
#if (MAX_CH > 5)
    { //channel5
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 5)
#if (MAX_CH > 6)
    { //channel6
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 6)
#if (MAX_CH > 7)
    { //channel7
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE },
      { INDUCTIVE },
      { CAPACITIVE }
    },
#endif //(MAX_CH > 7)
  }
};


#endif //_victimaggressortablesoc_h
