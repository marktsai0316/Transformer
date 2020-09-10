/** @file

  @copyright
  INTEL CONFIDENTIAL
  Copyright 2006 - 2020 Intel Corporation. <BR>

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

#ifndef _DDR5_RCW_REGS_H_
#define _DDR5_RCW_REGS_H_

//
// DDR5 RCD Spec Rev0.85 RCW Definitions.
//
#define DDR5_RCD_GLOBAL_FEATURES_REG 0x00
typedef union {
  struct {
    UINT8 command_address_rate : 1;
    /* Command Address Rate - Bits[0]
      0=Single Data Rate (SDR),
      1=Double Data Rate (DDR)
    */
    UINT8 sdr_modes_1 : 1;
    /* SDR Modes 1 - Bits[1]
      0=SDR1 (additional setup time),
      1=SDR2
    */
    UINT8 ca_pass_through_mode_enable : 1;
    /* CA Pass Through mode Enable - Bits[2]
      0=Normal operation,
      1=Enabled - Rank selected in OP[3]
    */
    UINT8 ca_pass_through_mode_rank_selection : 1;
    /* CA Pass Through mode Rank Selection - Bits[3]
      0=CA Pass Through Rank 0,
      1=CA Pass Through Rank 1
    */
    UINT8 bcom_pass_through_mode : 1;
    /* BCOM Pass-Through mode - Bits[4]
      0=Normal operation,
      1=Enabled Pass-Through Mode
    */
    UINT8 output_inversion : 1;
    /* Output Inversion - Bits[5]
      0=Enabled,
      1=Disabled
    */
    UINT8 power_down_mode : 1;
    /* Power Down Mode - Bits[6]
      0=Disabled,
      1=Enabled
    */
    UINT8 transparent_mode : 1;
    /* Transparent Mode - Bits[7]
      0=Disabled,
      1=Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_GLOBAL_FEATURES_STRUCT;

#define DDR5_RCD_PARITY_AND_ALERT_REG_GLOBAL_REG 0x01
typedef union {
  struct {
    UINT8 parity_checking : 1;
    /* Parity Checking - Bits[0]
      0=Parity checking disabled,
      1=Parity checking enabled
    */
    UINT8 dram_interface_forward_all_cmds : 1;
    /* DRAM Interface Forward All CMDS - Bits[1]
      0=Block,
      1=Do not block
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[2]
      0=Reserved,
      1=Reserved
    */
    UINT8 data_buffer_interface_forward_all_cmds : 1;
    /* Data Buffer Interface Forward All CMDs - Bits[3]
      0=Block,
      1=Do not block
    */
    UINT8 reserved_1 : 1;
    /* Reserved - Bits[4]
      0=Reserved,
      1=Reserved
    */
    UINT8 host_interface_training_feedback : 1;
    /* Host Interface Training Feedback - Bits[5]
      0=Both Sub channels feedback on ALERT_n,
      1=Sub CH_A feedback on QLBD; Sub CH_B feedback on QLBS
    */
    UINT8 alert_n_assertion : 1;
    /* ALERT_n Assertion - Bits[6]
      0=Static ALERT_n Assertion Mode,
      1=Pulsed ALERT_n Assertion Mode
    */
    UINT8 alert_n_re_enable : 1;
    /* ALERT_n Re-enable - Bits[7]
      0=Parity checking remains disabled after ALERT_n pulse,
      1=Parity checking is re-enabled after ALERT_n pulse
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PARITY_AND_ALERT_REG_GLOBAL_STRUCT;

#define DDR5_RCD_HOST_INTERFACE_TRAINING_MODE_GLOBAL_REG 0x02
typedef union {
  struct {
    UINT8 host_interface_training_mode_selection_ch_a : 2;
    /* Host Interface Training Mode selection CH_A - Bits[1:0]
      00=Normal operating mode,
      01=Clock-to-DCAy_A training mode,
      10=DCS0_A_n training mode,
      11=DCS1_A_n training mode
    */
    UINT8 host_interface_training_mode_selection_ch_b : 2;
    /* Host Interface Training Mode selection CH_B - Bits[3:2]
      00=Normal operating mode,
      01=Clock-to-DCAy_B training mode,
      10=DCS0_B_n training mode,
      11=DCS1_B_n training mode
    */
    UINT8 dca_training_xor_sampling_edge : 2;
    /* DCA Training XOR sampling edge - Bits[5:4]
      00=Both Rising and Falling Edges,
      01=Rising Edge,
      10=Falling Edge,
      11=Reserved
    */
    UINT8 vrefca_broadcast : 1;
    /* VrefCA Broadcast - Bits[6]
      0=Disabled,
      1=Enabled
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
      0=Reserved,
      1=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_HOST_INTERFACE_TRAINING_MODE_GLOBAL_STRUCT;

#define DDR5_RCD_DRAM_DB_INTERFACE_TRAINING_MODES_GLOBAL_REG 0x03
typedef union {
  struct {
    UINT8 qcs_training_mode_enable : 1;
    /* QCS Training Mode Enable - Bits[0]
      0=Disabled,
      1=Enabled - Rank selected in OP[1]
    */
    UINT8 qcs_training_rank_selection : 1;
    /* QCS Training Rank Selection - Bits[1]
      0=[Rank 0] QACS0 and QBCS0 Training mode,
      1=[Rank 1] QACS1 and QBCS1 Training mode
    */
    UINT8 short_mrr_command_for_data_buffer_training_in_sdr_mode : 1;
    /* Short MRR command for Data Buffer Training in SDR mode - Bits[2]
      0=Disabled,
      1=Enable
    */
    UINT8 static_control_value_for_bcom0 : 1;
    /* Static Control Value for BCOM0 - Bits[3]
      0=Output driven statically Low,
      1=Output driven statically High
    */
    UINT8 static_control_value_for_bcom1 : 1;
    /* Static Control Value for BCOM1 - Bits[4]
      0=Output driven statically Low,
      1=Output driven statically High
    */
    UINT8 static_control_value_for_bcom2 : 1;
    /* Static Control Value for BCOM2 - Bits[5]
      0=Output driven statically Low,
      1=Output driven statically High
    */
    UINT8 static_control_value_for_bcs_n : 1;
    /* Static Control Value for BCS_n - Bits[6]
      0=Output driven statically Low,
      1=Output driven statically High
    */
    UINT8 static_bcom_control_enable : 1;
    /* Static BCOM Control Enable , - Bits[7]
      0=Normal,
      1=Enabled; BCOM and BCS driven statically according to OP[6:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DRAM_DB_INTERFACE_TRAINING_MODES_GLOBAL_STRUCT;

#define DDR5_RCD_COMMAND_SPACE_REG 0x04
typedef union {
  struct {
    UINT8 command : 8;
    /*
      00000000=NOP
      00000001=Switches BRST_A_n to active which is LOW. Does NOT reset RCD.
      00000010=Switches BRST_A_n to inactive which is HIGH.
      00000011=Switches BRST_B_n to active which is LOW. Does NOT reset RCD
      00000100=Switches BRST_B_n to inactive which is HIGH
      00000101=Switches QRST_A_n & QCSx_A_n to active which is LOW
      00000110=Switches QRST_A_n to inactive which is HIGH
      00000111=Switches QRST_B_n & QCSx_B_n to active which is LOW
      00001000=Switches QRST_B_n to inactive which is HIGH
      00001001=Clear CA Parity Error Status bit and > 1 Error bit and re-enable parity checking (if not already enabled)
      00001010=Clear CA Parity Error Status bit and > 1 Error bit and re-enable parity checking (if not already enabled)
      00001011=Resets All of CH_A DFE ERROR Counters to zero
      00001100=Resets All of CH_B DFE ERROR Counters to zero
      00001101=Sends one 6 to 10-cycle LOW pulse on ALERT_n
      00001110=QCSx_A_n Released
      00001111=QCSx_B_n Released
      11110000=Reserved,
      11110001=Reserved,
      11110010=Reserved,
      11110011=Reserved,
      11110100=Reserved,
      11110101=Reserved,
      11110110=Reserved,
      11110111=Reserved,
      11111000=Reserved,
      11111001=Reserved,
      11111010=Reserved,
      11111011=Reserved,
      11111100=Reserved,
      11111101=Reserved,
      11111110=Reserved,
      11111111=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_COMMAND_SPACE_STRUCT;

#define DDR5_RCD_DIMM_OPERATING_SPEED_REG 0x05
typedef union {
  struct {
    UINT8 operating_speed : 4;
    /* Operating Speed - Bits[3:0]
      0000=DDR5-3200 (2800 MT/s < f < 3200 MT/s),
      0001=DDR5-3600 (3200 MT/s < f < 3600 MT/s),
      0010=DDR5-4000 (3600 MT/s < f < 4000 MT/s),
      0011=DDR5-4400 (4000 MT/s < f < 4400 MT/s),
      0100=DDR5-4800 (4400 MT/s < f < 4800 MT/s),
      0101=Reserved for DDR5-5200(4800 MT/s < f < 5200 MT/s),
      0110=Reserved for DDR5 5600 (5200 MT/s < f < 5600 MT/s),
      0111=Reserved for DDR5 6000 (5600 MT/s < f < 6000 MT/s),
      1000=Reserved for DDR5 6400 (6000 MT/s < f < 6400 MT/s),
      1001=Reserved,
      1010=Reserved,
      1011=Reserved,
      1100=Reserved,
      1101=Reserved,
      1110=Down-bin Data Rate (2000 MT/s < f < 2100 MT/s),
      1111=PLL bypass mode enabled
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[4]
      0=Reserved,
      1=Reserved
    */
    UINT8 register_v_dd_operating_voltage : 1;
    /* Register V DD Operating Voltage - Bits[5]
      0=1.1 V,
      1=Reserved for lower voltage
    */
    UINT8 context_for_operation_training : 1;
    /* Context for operation training - Bits[6]
      0=Default; Context 1 operation.,
      1=Context 2 operation.
    */
    UINT8 frequency_band_select : 1;
    /* Frequency Band Select - Bits[7]
      0=Operation (Frequency Band 1),
      1=Test Mode (Frequency Band 2)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DIMM_OPERATING_SPEED_STRUCT;

#define DDR5_RCD_FINE_GRANULARITY_DIMM_OPERATING_SPEED_REG 0x06
typedef union {
  struct {
    UINT8 fine_granularity_operating_speed_in_terms_of_f_bin_where_f_bin_is_the_top_speed_for_the_speed_range_selected_in_rw05_op_3_0 : 5;
    /* Fine Granularity Operating Speed in terms of f bin , where f bin is the top speed for the speed range selected in RW05 OP[3:0] - Bits[4:0]
      00000=(f bin - 20 MT/s) < f f bin,
      00001=(f bin - 40 MT/s) < f (f bin - 20 MT/s),
      00010=(f bin - 60 MT/s) < f (f bin - 40 MT/s),
      00011=(f bin - 80 MT/s) < f (f bin - 60 MT/s),
      00100=(f bin - 100 MT/s) < f (f bin - 80 MT/s),
      00101=(f bin - 120 MT/s) < f (f bin - 100 MT/s),
      00110=(f bin - 140 MT/s) < f (f bin - 120 MT/s),
      00111=(f bin - 160 MT/s) < f (f bin - 140 MT/s),
      01000=(f bin - 180 MT/s) < f (f bin - 160 MT/s),
      01001=(f bin - 200 MT/s) < f (f bin - 180 MT/s),
      01010=(f bin - 220 MT/s) < f (f bin - 200 MT/s),
      01011=(f bin - 240 MT/s) < f (f bin - 220 MT/s),
      01100=(f bin - 260 MT/s) < f (f bin - 240 MT/s),
      01101=(f bin - 280 MT/s) < f (f bin - 260 MT/s),
      01110=(f bin - 300 MT/s) < f (f bin - 280 MT/s),
      01111=(f bin - 320 MT/s) < f (f bin - 300 MT/s),
      10000=(f bin - 340 MT/s) < f (f bin - 320 MT/s),
      10001=(f bin - 360 MT/s) < f (f bin - 340 MT/s),
      10010=(f bin - 380 MT/s) < f (f bin - 360 MT/s),
      10011=(f bin - 400 MT/s) < f (f bin - 380 MT/s),
      ...,
      ...,
      ...,
      11111=Reserved
    */
    UINT8 reserved : 3;
    /* Reserved - Bits[7:5]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_FINE_GRANULARITY_DIMM_OPERATING_SPEED_STRUCT;

#define DDR5_RCD_VALIDATION_PASS 0x07
typedef union {
  struct {
    UINT8 lockout_protection_enable : 1;
    /* Lockout Protection Enable - Bits[0]
      0=No effect,
      1=Protection enabled 3,4
    */
    UINT8 reserved : 3;
    /* Reserved - Bits[3:1]
    */
    UINT8 validation_pass_through_feature_enable : 1;
    /* Validation Pass-Through Feature Enable - Bits[4]
      0=Feature disabled,
      1=Feature enabled
    */
    UINT8 validation_pass_through_mode_selection : 1;
    /* Validation Pass-Through Mode Selection - Bits[5]
      0=Process MRW,
      1=Ignore MRW
    */
    UINT8 reserved_1 : 2;
    /* Reserved - Bits[7:6]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VALIDATION_PASS_STRUCT;

#define DDR5_RCD_CLOCK_DRIVER_ENABLE_REG 0x08
typedef union {
  struct {
    UINT8 disable_qack_t_qack_c_clock : 1;
    /* Disable QACK_t/QACK_c clock - Bits[0]
      0=QACK_t/QACK_c clock enabled,
      1=QACK_t/QACK_c clock disabled
    */
    UINT8 disable_qbck_t_qbck_c_clock : 1;
    /* Disable QBCK_t/QBCK_c clock - Bits[1]
      0=QBCK_t/QBCK_c clock enabled,
      1=QBCK_t/QBCK_c clock disabled
    */
    UINT8 disable_qcck_t_qcck_c_clock : 1;
    /* Disable QCCK_t/QCCK_c clock - Bits[2]
      0=QCCK_t/QCCK_c clock enabled,
      1=QCCK_t/QDCK_c clock disabled
    */
    UINT8 disable_qdck_t_qdck_c_clock : 1;
    /* Disable QDCK_t/QDCK_c clock - Bits[3]
      0=QDCK_t/QDCK_c clock enabled,
      1=QDCK_t/QDCK_c clock disabled
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[4]
      0=Reserved,
      1=Reserved
    */
    UINT8 bck_t_bck_c : 1;
    /* BCK_t/BCK_c - Bits[5]
      0=BCK_t/BCK_c clock enabled,
      1=BCK_t/BCK_c clock disabled
    */
    UINT8 reserved_1 : 2;
    /* Reserved - Bits[7:6]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_CLOCK_DRIVER_ENABLE_STRUCT;

#define DDR5_RCD_OUTPUT_ADDRESS_AND_CONTROL_ENABLE_REG 0x09
typedef union {
  struct {
    UINT8 qaca_outputs : 1;
    /* QACA outputs - Bits[0]
      0=Enabled,
      1=Disabled
    */
    UINT8 qbca_outputs : 1;
    /* QBCA outputs - Bits[1]
      0=Enabled,
      1=Disabled
    */
    UINT8 dcs1_n_input_buffer_qxcs1_n_outputs_single_rank : 1;
    /* DCS1_n Input Buffer & QxCS1_n Outputs (single rank) - Bits[2]
      0=DCS1_n & QxCS1_n pins Enabled,
      1=DCS1_n & QxCS1_n pins Disabled
    */
    UINT8 bcs_n_bcom_2_0_brst_n_outputs : 1;
    /* BCS_n , BCOM[2:0] & BRST_n outputs - Bits[3]
      0=Enabled (LRDIMM),
      1=Disabled (RDIMM)
    */
    UINT8 q_b_a_ca13_output_driver_disable : 1;
    /* Q[B:A]CA13 output driver disable - Bits[4]
      0=Enabled,
      1=Disabled
    */
    UINT8 qacs_1_0_n_output : 1;
    /* QACS[1:0]_n output - Bits[5]
      0=Enable,
      1=Disabled
    */
    UINT8 qbcs_1_0_n_output : 1;
    /* QBCS[1:0]_n output - Bits[6]
      0=Enabled,
      1=Disabled
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
      0=Reserved,
      1=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_OUTPUT_ADDRESS_AND_CONTROL_ENABLE_STRUCT;

#define DDR5_RCD_QCK_SIGNALS_DRIVER_CHARACTERISTICS_REG 0x0A
typedef union {
  struct {
    UINT8 qack_t_qack_c : 2;
    /* QACK_t/QACK_c - Bits[1:0]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
    UINT8 qbck_t_qbck_c : 2;
    /* QBCK_t/QBCK_c - Bits[3:2]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
    UINT8 qcck_t_qcck_c : 2;
    /* QCCK_t/QCCK_c - Bits[5:4]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
    UINT8 qdck_t_qdck_c : 2;
    /* QDCK_t/QDCK_c - Bits[7:6]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QCK_SIGNALS_DRIVER_CHARACTERISTICS_STRUCT;

#define DDR5_RCD_QXCA_AND_QXCS_N_SIGNALS_DRIVER_CHARACTERISTICS_REG 0x0C
typedef union {
  struct {
    UINT8 address_command_address_for_both_a_b_copies : 2;
    /* Address/Command Address for both A&B copies - Bits[1:0]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[3:2]
    */
    UINT8 qxcs0_n_qxcs1_n_outputs : 2;
    /* QxCS0_n, QxCS1_n, Outputs - Bits[5:4]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
    UINT8 reserved_1 : 2;
    /* Reserved - Bits[7:6]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QXCA_AND_QXCS_N_SIGNALS_DRIVER_CHARACTERISTICS_STRUCT;

#define DDR5_RCD_DATA_BUFFER_INTERFACE_AND_LOOPBACK_DRIVER_CHARACTERISTICS_REG 0x0D
typedef union {
  struct {
    UINT8 bcom_2_0_bcs_n_driver_strength : 2;
    /* BCOM[2:0], BCS_n driver strength - Bits[1:0]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=Reserved,
      11=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[2]
      0=Reserved,
      1=Reserved
    */
    UINT8 bck_t_bck_c_driver_strength : 2;
    /* BCK_t/BCK_c driver strength - Bits[4:3]
      00=RZQ/12 (20 ),
      01=RZQ/17 (14 ),
      10=RZQ/24 (10 ),
      11=Reserved
    */
    UINT8 reserved_1 : 3;
    /* Reserved - Bits[7:5]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DATA_BUFFER_INTERFACE_AND_LOOPBACK_DRIVER_CHARACTERISTICS_STRUCT;

#define DDR5_RCD_IBT_GLOBAL_REG 0x10
typedef union {
  struct {
    UINT8 dca_6_0_b_a_and_dpar_b_a_input_bus_termination : 2;
    /* DCA[6:0]_[B:A] and DPAR_[B:A] Input Bus Termination - Bits[1:0]
      00=60,
      01=TBD,
      10=TBD,
      11=OFF
    */
    UINT8 dcs_1_0_b_a_n_input_bus_termination : 2;
    /* DCS[1:0]_[B:A]_n Input Bus Termination - Bits[3:2]
      00=60,
      01=TBD,
      10=TBD,
      11=OFF
    */
    UINT8 dck_input_bus_termination : 2;
    /* DCK Input Bus Termination - Bits[5:4]
      00=60,
      01=TBD,
      10=TBD,
      11=OFF
    */
    UINT8 error_in_b_a_n_input_bus_termination : 2;
    /* ERROR_IN_[B:A]_n Input Bus Termination - Bits[7:6]
      00=60,
      01=TBD,
      10=TBD,
      11=OFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_IBT_GLOBAL_STRUCT;

#define DDR5_RCD_COMMAND_LATENCY_ADDER_CONFIGURATION_REG 0x11
typedef union {
  struct {
    UINT8 latency_adder_nladd_to_all_dram_commands : 4;
    /* Latency adder nLadd to all DRAM commands - Bits[3:0]
      0000=0 nCK latency adder,
      0001=1 nCK latency adder to Qn , Bn,
      0010=2 nCK latency adder to Qn , Bn,
      0011=3 nCK latency adder to Qn , Bn,
      0100=4 nCK latency adder to Qn , Bn,
      0101=Reserved for 5 nCK latency adder to Qn , Bn,
      0110=Reserved for 6 nCK latency adder to Qn , Bn,
      0111=Reserved for 7 nCK latency adder to Qn , Bn,
      1000=Reserved for 8 nCK latency adder to Qn , Bn,
      1001=Reserved,
      .....reserved=Reserved,
      1111=Reserved
    */
    UINT8 reserved : 4;
    /* Reserved - Bits[7:4]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_COMMAND_LATENCY_ADDER_CONFIGURATION_STRUCT;

#define DDR5_RCD_QACK_OUTPUT_DELAY_REG 0x12
typedef union {
  struct {
    UINT8 output_delay_control_for_qack_t_qack_c_output_signals_1_2 : 6;
    /* Output Delay Control for QACK_t/ QACK_c Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64) * t CK,
      000010=Delay Outputs by +(2/64)* t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
      0=Reserved,
      1=Reserved
    */
    UINT8 output_delay_feature_enable_for_qack_t_qack_c : 1;
    /* Output Delay Feature Enable for QACK_t/QACK_c - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QACK_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QBCK_OUTPUT_DELAY_REG 0x13
typedef union {
  struct {
    UINT8 output_delay_control_for_qbck_t_qbck_c_output_signals_1_2 : 6;
    /* Output Delay Control for QBCK_t/ QBCK_c Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64 )* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
      0=Reserved,
      1=Reserved
    */
    UINT8 output_delay_feature_enable_for_qbck_t_qbck_c : 1;
    /* Output Delay Feature Enable for QBCK_t/QBCK_c - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QBCK_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QCCK_OUTPUT_DELAY_REG 0x14
typedef union {
  struct {
    UINT8 output_delay_control_for_qcck_t_qcck_c_output_signals_1_2 : 6;
    /* Output Delay Control for QCCK_t/ QCCK_c Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64 )* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
      0=Reserved,
      1=Reserved
    */
    UINT8 output_delay_feature_enable_for_qcck_t_qcck_c : 1;
    /* Output Delay Feature Enable for QCCK_t/QCCK_c - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QCCK_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QDCK_OUTPUT_DELAY_REG 0x15
typedef union {
  struct {
    UINT8 output_delay_control_for_qdck_t_qdck_c_output_signals_1_2 : 6;
    /* Output Delay Control for QDCK_t/ QDCK_c Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
      0=Reserved,
      1=Reserved
    */
    UINT8 output_delay_feature_enable_for_qdck_t_qdck_c : 1;
    /* Output Delay Feature Enable for QDCK_t/QDCK_c - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QDCK_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QACS0_N_OUTPUT_DELAY_REG 0x17
typedef union {
  struct {
    UINT8 output_delay_control_for_qacs0_n_1_2 : 6;
    /* Output Delay Control for QACS0_n 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_qacs0_n : 1;
    /* Output Delay Feature Enable for QACS0_n - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QACS0_N_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QACS1_N_OUTPUT_DELAY_REG 0x18
typedef union {
  struct {
    UINT8 output_delay_control_for_qacs1_n : 6;
    /* Output Delay Control for QACS1_n - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_qacs1_n : 1;
    /* Output Delay Feature Enable for QACS1_n - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QACS1_N_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QBCS0_N_OUTPUT_DELAY_REG 0x19
typedef union {
  struct {
    UINT8 output_delay_control_for_qbcs0_n_1_2 : 6;
    /* Output Delay Control for QBCS0_n 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_qbcs0_n_output_signals : 1;
    /* Output Delay Feature Enable for QBCS0_n output signals - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QBCS0_N_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QBCS1_N_OUTPUT_DELAY_REG 0x1A
typedef union {
  struct {
    UINT8 output_delay_control_for_qbcs1_n : 6;
    /* Output Delay Control for QBCS1_n - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_qbcs1_n_output_signals : 1;
    /* Output Delay Feature Enable for QBCS1_n output signals - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QBCS1_N_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QACA_OUTPUT_DELAY_REG 0x1B
typedef union {
  struct {
    UINT8 output_delay_control_for_qaca_output_signals : 6;
    /* Output Delay Control for QACA Output Signals - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_qaca : 1;
    /* Output Delay Feature Enable for QACA - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QACA_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_QBCA_OUTPUT_DELAY_REG 0x1C
typedef union {
  struct {
    UINT8 output_delay_control_for_qbca_output_signals : 6;
    /* Output Delay Control for QBCA Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_qbca : 1;
    /* Output Delay Feature Enable for QBCA - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_QBCA_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_BCS_N_AND_BCOM_2_0_OUTPUT_DELAY_REG 0x1D
typedef union {
  struct {
    UINT8 output_delay_control_for_bcs_n_and_bcom_2_0_output_signals_1_2 : 6;
    /* Output Delay Control for BCS_n and BCOM[2:0] Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64)* t CK,
      000010=Delay Outputs by +(2/64) * t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 full_cycle_delay : 1;
    /* Full cycle delay - Bits[6]
      0=Disabled,
      1=Enabled adds 1tCK additional delay to OP[5:0]
    */
    UINT8 output_delay_feature_enable_for_bcs_n_and_bcom_2_0 : 1;
    /* Output Delay Feature Enable for BCS_n and BCOM[2:0] - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_BCS_N_AND_BCOM_2_0_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_BCK_OUTPUT_DELAY_REG 0x1E
typedef union {
  struct {
    UINT8 output_delay_control_for_bck_t_bck_c_output_signals_1_2 : 6;
    /* Output Delay Control for BCK_t/BCK_c Output Signals 1,2 - Bits[5:0]
      000000=Delay Outputs by +(0/64) * t CK (Same as Default),
      000001=Delay Outputs by +(1/64) * t CK,
      000010=Delay Outputs by +(2/64)* t CK,
      ...,
      111101=Delay Outputs by +(61/64) * t CK,
      111110=Delay Outputs by +(62/64) * t CK,
      111111=Delay Outputs by +(63/64) * t CK
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
      0=Reserved,
      1=Reserved
    */
    UINT8 output_delay_feature_enable_for_bck_t_bck_c : 1;
    /* Output Delay Feature Enable for BCK_t/BCK_c - Bits[7]
      0=(Default) Feature Disabled,
      1=Feature Enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_BCK_OUTPUT_DELAY_STRUCT;

#define DDR5_RCD_SIDEBAND_BUS_REG 0x25
typedef union {
  struct {
    UINT8 sideband_bus_interface_disabled : 1;
    /* Sideband Bus Interface Disabled - Bits[0]
      0=Sideband Bus interface is enabled,
      1=Sideband Bus interface is disabled. DDR5RCD01 will not claim or acknowledge any access to its Sideband Bus address space.
    */
    UINT8 global_clear_event_status_and_in_band_interrupt_status : 1;
    /* Global Clear Event Status and In Band Interrupt Status - Bits[1]
      0=No action,
      1=Clear status registers in Table 134.
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[3:2]
    */
    UINT8 i3c_basic_error_interrupt_enable : 1;
    /* I3C Basic Error interrupt enable - Bits[4]
      0=Errors logged in RW28 do not trigger a Host interrupt,
      1=Any error logged in RW28 triggers a Host interrupt.
    */
    UINT8 sideband_bus_mode : 1;
    /* Sideband Bus Mode - Bits[5]
      0=I2C (Max speed of 1 MHz) Enabled,
      1=I3C Basic (Max speed of 12.5 MHz) Enabled
    */
    UINT8 i3c_basic_parity_checking_disable : 1;
    /* I3C Basic Parity Checking Disable - Bits[6]
      0=Parity checking enabled,
      1=Parity checking disabled.
    */
    UINT8 i3c_basic_packet_error_code_enable : 1;
    /* I3C Basic Packet Error Code Enable - Bits[7]
      0=PEC Disabled,
      1=PEC Enabled.
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_SIDEBAND_BUS_STRUCT;

#define DDR5_RCD_RX_LOOPBACK_GLOBAL_REG 0x26
typedef union {
  struct {
    UINT8 rcd_rx_loopback_port_selection : 3;
    /* RCD RX Loopback Port Selection - Bits[2:0]
      000=Loopback Disabled,
      001=Internal RCD CH_A Port,
      010=Internal RCD CH_B Port,
      011=External CH_A Port,
      100=External CH_B Port,
      101=Reserved,
      110=Reserved,
      111=Reserved
    */
    UINT8 internal_rcd_bit_selection : 3;
    /* Internal RCD bit selection - Bits[5:3]
      000=DCA0,
      001=DCA1,
      010=DCA2,
      011=DCA3,
      100=DCA4,
      101=DCA5,
      110=DCA6,
      111=DPAR
    */
    UINT8 external_loopback_data_rate_5_6 : 1;
    /* External Loopback Data Rate 5,6 - Bits[6]
      0=Incoming and outgoing signals are 1/2 rate,
      1=Incoming and outgoing signals are 1/4 rate
    */
    UINT8 internal_loopback_select_phase : 1;
    /* Internal Loopback Select Phase - Bits[7]
      0=Loopback Select Phase A,
      1=Loopback Select Phase B
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RX_LOOPBACK_GLOBAL_STRUCT;

#define DDR5_RCD_LOOPBACK_IO_REG 0x27
typedef union {
  struct {
    UINT8 rx_dlbs_termination : 2;
    /* RX DLBS Termination - Bits[1:0]
      00=60,
      01=80,
      10=40,
      11=OFF
    */
    UINT8 rx_dlbd_termination : 2;
    /* RX DLBD Termination - Bits[3:2]
      00=60,
      01=80,
      10=40,
      11=OFF
    */
    UINT8 tx_qlbs_and_qlbd_drive_strength : 2;
    /* TX QLBS and QLBD Drive Strength - Bits[5:4]
      00=RZQ/5 (48 ),
      01=RZQ/7 (34 ),
      10=Reserved,
      11=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[7:6]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_LOOPBACK_IO_STRUCT;

#define DDR5_RCD_I2C_I3C_BASIC_ERROR_STATUS_REG 0x28
typedef union {
  struct {
    UINT8 error_in_parity_check : 1;
    /* Error in Parity Check - Bits[0]
      0=No PARITY error has been detected,
      1=PARITY error has been detected
    */
    UINT8 error_in_packet_error_code_check : 1;
    /* Error in Packet Error Code Check - Bits[1]
      0=No PEC error has been detected,
      1=PEC error has been detected
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[6:2]
    */
    UINT8 device_event_in_band_interrupt_status : 1;
    /* Device Event In-Band Interrupt Status - Bits[7]
      0=No Pending IBI,
      1=Pending IBI
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_I2C_I3C_BASIC_ERROR_STATUS_STRUCT;

#define DDR5_RCD_I2C_I3C_BASIC_CLEAR_ERROR_STATUS_REG 0x29
typedef union {
  struct {
    UINT8 clear_parity_error_status : 1;
    /* Clear Parity Error Status - Bits[0]
      0=No effect,
      1=Clear RW28[0]
    */
    UINT8 clear_packet_error_status : 1;
    /* Clear Packet Error Status - Bits[1]
      0=No effect,
      1=Clear RW28[1]
    */
    UINT8 reserved : 6;
    /* Reserved - Bits[7:2]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_I2C_I3C_BASIC_CLEAR_ERROR_STATUS_STRUCT;

#define DDR5_RCD_I2C_I3C_BASIC_HID_REG 0x2A
typedef union {
  struct {
    UINT8 reserved : 1;
    /* Reserved - Bits[0]
    */
    UINT8 device_hid_code : 3;
    /* Device HID Code - Bits[3:1]
      000=HID = 000,
      001=HID = 001,
      010=HID = 010,
      011=HID = 011,
      100=HID = 100,
      101=HID = 101,
      110=HID = 110,
      111=HID = 111 (Defualt),
    */
    UINT8 reserved_1 : 4;
    /* Reserved - Bits[7:4]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_I2C_I3C_BASIC_HID_STRUCT;

#define DDR5_RCD_DFE_VREF_RANGE_LIMIT_GLOBAL_STATUS_WORD_REG 0x30
typedef union {
  struct {
    UINT8 dfe_vref_configuration_limit : 8;
    /* DFE_Vref Configuration Limit - Bits[7:0]
      00000000=Applies to 8 LSB portion of DFE Vref control in PG[2]RW[62,66,6A,6E,72,76,7A,7E] (Maximum Setting Supported by Device),
      0000000=1,
      0000001=0,
      ...,
      1111110=1,
      1111111=0,
      1111111=1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFE_VREF_RANGE_LIMIT_GLOBAL_STATUS_WORD_STRUCT;

#define DDR5_RCD_DFE_CONFIGURATION_REG 0x31
typedef union {
  struct {
    UINT8 dfe_feature_enable_control : 1;
    /* DFE Feature Enable Control - Bits[0]
      0=(Default) DFE and gain features disabled,
      1=DFE and gain features enabled
    */
    UINT8 dfe_vref_enable : 1;
    /* DFE_Vref Enable - Bits[1]
      0=DFE_Vref Circuitry Disabled,
      1=DFE_Vref Circuitry Enabled
    */
    UINT8 error_counter_enable : 1;
    /* ERROR Counter Enable - Bits[2]
      0=All Error Counters Disabled,
      1=All Error Counters Enabled
    */
    UINT8 rw_control_word_writes_broadcast : 1;
    /* RW Control Word Writes Broadcast - Bits[3]
      0=RW Write to selected DCAn or DPAR,
      1=RW Writes Broadcast to DCA[6:0] and DPAR
    */
    UINT8 tap_1_enable : 1;
    /* Tap 1 Enable - Bits[4]
      0=(Default) Tap 1 disabled,
      1=Tap 1 enabled
    */
    UINT8 tap_2_enable : 1;
    /* Tap 2 Enable - Bits[5]
      0=(Default) Tap 2 disabled,
      1=Tap 2 enabled
    */
    UINT8 tap_3_enable : 1;
    /* Tap 3 Enable - Bits[6]
      0=(Default) Tap 3 disabled,
      1=Tap 3 enabled
    */
    UINT8 tap_4_enable : 1;
    /* Tap 4 Enable - Bits[7]
      0=(Default) Tap 4 disabled,
      1=Tap 4 enabled
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFE_CONFIGURATION_STRUCT;

#define DDR5_RCD_DPAR_AND_DCA_6_0_DFE_TRAINING_MODE_REG 0x32
typedef union {
  struct {
    UINT8 global_dfe_training_mode_enable : 1;
    /* Global DFE Training Mode Enable - Bits[0]
      0=DFE Training Mode disabled,
      1=DFE Training Mode enabled
    */
    UINT8 training_source : 2;
    /* Training Source - Bits[2:1]
      00=Monitor,
      01=Monitor XOR Slicer Output,
      10=LFSR XOR,
      11=Reserved
    */
    UINT8 dcn_dfe_pin_selection : 3;
    /* DCn DFE pin selection - Bits[5:3]
      000=DCA0,
      001=DCA1,
      010=DCA2,
      011=DCA3,
      100=DCA4,
      101=DCA5,
      110=DCA6,
      111=DPAR
    */
    UINT8 rw_in_band_update_feature_enable : 1;
    /* RW In-Band Update Feature Enable - Bits[6]
      0=(Default) Feature disabled.,
      1=Feature enabled.
    */
    UINT8 exit_from_rw_in_band_updated_mode : 1;
    /* Exit From RW In-Band Updated Mode - Bits[7]
      0=No action.,
      1=(Default) Take the RCD out from RWUPD state.
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DPAR_AND_DCA_6_0_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_ADDITIONAL_FILTERING_FOR_DFE_TRAINING_MODE_REG 0x33
typedef union {
  struct {
    UINT8 ui_filtering_enable : 2;
    /* UI Filtering Enable - Bits[1:0]
      00=UI Filter Disabled,
      01=Enable Per UI Filtering according to OP[4:2],
      10=Enable Even UI Filtering,
      11=Enable Odd UI Filtering
    */
    UINT8 per_ui_filtering : 3;
    /* Per-UI filtering - Bits[4:2]
      000=UI 0,
      001=UI 1,
      010=UI 2,
      011=UI 3,
      100=UI 4,
      101=UI 5,
      110=UI 6,
      111=UI 7
    */
    UINT8 reserved : 3;
    /* Reserved - Bits[7:5]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_ADDITIONAL_FILTERING_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_LFSR_DFE_TRAINING_MODE_REG 0x34
typedef union {
  struct {
    UINT8 dfe_training_accelerator : 1;
    /* DFE Training Accelerator - Bits[0]
      0=Stop DFE Training Accelerator,
      1=Start DFE Training Accelerator
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[1]
      0=Reserved,
      1=Reserved
    */
    UINT8 select_inner_loop_parameter : 2;
    /* Select Inner Loop Parameter - Bits[3:2]
      00=Select Inner Loop Parameter - NULL,
      01=Select Inner Loop Parameter - DFE_Vref,
      10=Select Inner Loop Parameter - VrefCA,
      11=Reserved
    */
    UINT8 select_outer_loop_parameter : 3;
    /* Select Outer Loop Parameter - Bits[6:4]
      000=Select Outer Loop Parameter - NULL,
      001=Select Outer Loop Parameter - Tap 1,
      010=Select Outer Loop Parameter - Tap 2,
      011=Select Outer Loop Parameter - Tap 3,
      100=Select Outer Loop Parameter - Tap 4,
      101=Select Outer Loop Parameter - UI,
      110=Reserved,
      111=Reserved
    */
    UINT8 reserved_1 : 1;
    /* Reserved - Bits[7]
      0=Reserved,
      1=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_LFSR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_LFSR_STATE_FOR_DFE_TRAINING_MODE_REG 0x35
typedef union {
  struct {
    UINT8 lfsr_state_read_only : 8;
    /* LFSR State (Read Only) - Bits[7:0]
      00000000=LFSR State = 0x00*,
      00000001=LFSR State = 0x01,
      00000010=LFSR State = 0x02,
      ...,
      11111100=LFSR State = 0xFC,
      11111101=LFSR State = 0xFD,
      11111110=LFSR State= 0xFE,
      11111111=LFSR State = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_LFSR_STATE_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_DFETM_INNER_LOOP_START_VALUE_REG 0x36
typedef union {
  struct {
    UINT8 inner_loop_start_value : 8;
    /* Inner Loop Start Value - Bits[7:0]
      00000000=Inner Loop Start Value = 0x00,
      00000001=Inner Loop Start Value = 0x01,
      00000010=Inner Loop Start Value = 0x02,
      ...,
      11111100=Inner Loop Start Value = 0xFC,
      11111101=Inner Loop Start Value = 0xFD,
      11111110=Inner Loop Start Value = 0xFE,
      11111111=Inner Loop Start Value = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_INNER_LOOP_START_VALUE_STRUCT;

#define DDR5_RCD_DFETM_OUTER_LOOP_START_VALUE_REG 0x37
typedef union {
  struct {
    UINT8 outer_loop_start_value_1_2 : 7;
    /* Outer Loop Start Value 1,2 - Bits[6:0]
      0000000=Outer Loop Start Value = 0x00,
      0000001=Outer Loop Start Value = 0x01,
      0000010=Outer Loop Start Value = 0x02,
      ...,
      1111100=Outer Loop Start Value = 0x7C,
      1111101=Outer Loop Start Value = 0x7D,
      1111110=Outer Loop Start Value = 0x7E,
      1111111=Outer Loop Start Value = 0x7F
    */
    UINT8 rw_36_inner_loop_start_value : 1;
    /* RW[36] Inner Loop Start Value - Bits[7]
      0=Inner Loop Start Value[8] = 0,
      1=Inner Loop Start Value[8] = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_OUTER_LOOP_START_VALUE_STRUCT;

#define DDR5_RCD_DFETM_INNER_LOOP_CURRENT_VALUE_REG 0x38
typedef union {
  struct {
    UINT8 inner_loop_current_value_read_only : 8;
    /* Inner Loop Current Value (Read Only) - Bits[7:0]
      00000000=Inner Loop Current Value = 0x00,
      00000001=Inner Loop Current Value = 0x01,
      00000010=Inner Loop Current Value = 0x02,
      ...,
      11111100=Inner Loop Current Value = 0xFC,
      11111101=Inner Loop Current Value = 0xFD,
      11111110=Inner Loop Current Value = 0xFE,
      11111111=Inner Loop Current Value = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_INNER_LOOP_CURRENT_VALUE_STRUCT;

#define DDR5_RCD_DFETM_OUTER_LOOP_CURRENT_VALUE_REG 0x39
typedef union {
  struct {
    UINT8 outer_loop_current_value_read_only : 7;
    /* Outer Loop Current Value (Read Only) - Bits[6:0]
      0000000=Outer Loop Current Value = 0x00,
      0000001=Outer Loop Current Value = 0x01,
      0000010=Outer Loop Current Value = 0x02,
      ...,
      1111100=Outer Loop Current Value = 0x7C,
      1111101=Outer Loop Current Value = 0x7D,
      1111110=Outer Loop Current Value = 0x7E,
      1111111=Outer Loop Current Value = 0x7F
    */
    UINT8 rw38_8_inner_loop_current_value_read_only : 1;
    /* RW38[8] Inner Loop Current Value (Read Only) - Bits[7]
      0=Inner Loop Current Value[8] = 0,
      1=Inner Loop Current Value[8] = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_OUTER_LOOP_CURRENT_VALUE_STRUCT;

#define DDR5_RCD_DFETM_INNER_AND_OUTER_LOOP_STEP_SIZE_REG 0x3A
typedef union {
  struct {
    UINT8 inner_loop_step_size : 4;
    /* Inner Loop Step Size - Bits[3:0]
      0000=Inner Loop Step Size - 1,
      0001=Inner Loop Step Size - 2,
      0010=Inner Loop Step Size - 3,
      0011=Inner Loop Step Size - 4,
      0100=Inner Loop Step Size - 5,
      0101=Inner Loop Step Size - 6,
      0110=Inner Loop Step Size - 7,
      0111=Inner Loop Step Size - 8,
      1000=Inner Loop Step Size - 9,
      1001=Inner Loop Step Size - 10,
      1010=Inner Loop Step Size - 11,
      1011=Inner Loop Step Size - 12,
      1100=Inner Loop Step Size - 13,
      1101=Inner Loop Step Size - 14,
      1110=Inner Loop Step Size - 15,
      1111=Inner Loop Step Size - 16
    */
    UINT8 outer_loop_step_size : 4;
    /* Outer Loop Step Size - Bits[7:4]
      0000=Outer Loop Step Size - 1,
      0001=Outer Loop Step Size - 2,
      0010=Outer Loop Step Size - 3,
      0011=Outer Loop Step Size - 4,
      0100=Outer Loop Step Size - 5,
      0101=Outer Loop Step Size - 6,
      0110=Outer Loop Step Size - 7,
      0111=Outer Loop Step Size - 8,
      1000=Outer Loop Step Size - 9,
      1001=Outer Loop Step Size - 10,
      1010=Outer Loop Step Size - 11,
      1011=Outer Loop Step Size - 12,
      1100=Outer Loop Step Size - 13,
      1101=Outer Loop Step Size - 14,
      1110=Outer Loop Step Size - 15,
      1111=Outer Loop Step Size - 16
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_INNER_AND_OUTER_LOOP_STEP_SIZE_STRUCT;

#define DDR5_RCD_DFETM_INNER_LOOP_NUMBER_OF_INCREMENTS_REG 0x3B
typedef union {
  struct {
    UINT8 inner_loop_number_of_increments : 8;
    /* Inner Loop Number of Increments - Bits[7:0]
      00000000=Inner Loop Number of Increments = 0x00,
      00000001=Inner Loop Number of Increments = 0x01,
      00000010=Inner Loop Number of Increments = 0x02,
      ...,
      11111100=Inner Loop Number of Increments = 0xFC,
      11111101=Inner Loop Number of Increments = 0xFD,
      11111110=Inner Loop Number of Increments = 0xFE,
      11111111=Inner Loop Number of Increments = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_INNER_LOOP_NUMBER_OF_INCREMENTS_STRUCT;

#define DDR5_RCD_DFETM_OUTER_LOOP_NUMBER_OF_INCREMENTS_REG 0x3C
typedef union {
  struct {
    UINT8 outer_loop_number_of_increments : 7;
    /* Outer Loop Number of Increments - Bits[6:0]
      0000000=Outer Loop Number of Increments = 0x00,
      0000001=Outer Loop Number of Increments = 0x01,
      0000010=Outer Loop Number of Increments = 0x02,
      ...,
      1111100=Outer Loop Number of Increments = 0x7C,
      1111101=Outer Loop Number of Increments = 0x7D,
      1111110=Outer Loop Number of Increments = 0x7E,
      1111111=Outer Loop Number of Increments = 0x7F
    */
    UINT8 rw3b_8_inner_loop_number_of_increments : 1;
    /* RW3B[8] Inner Loop Number of Increments - Bits[7]
      0=Inner Loop Number of Increments = 0,
      1=Inner Loop Number of Increments = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_OUTER_LOOP_NUMBER_OF_INCREMENTS_STRUCT;

#define DDR5_RCD_DFETM_INNER_LOOP_CURRENT_INCREMENT_REG 0x3D
typedef union {
  struct {
    UINT8 inner_loop_current_increment_read_only : 8;
    /* Inner Loop Current Increment (Read Only) - Bits[7:0]
      00000000=Inner Loop Current Increment = 0x00,
      00000001=Inner Loop Current Increment = 0x01,
      00000010=Inner Loop Current Increment = 0x02,
      ...,
      11111100=Inner Loop Current Increment = 0xFC,
      11111101=Inner Loop Current Increment = 0xFD,
      11111110=Inner Loop Current Increment = 0xFE,
      11111111=Inner Loop Current Increment = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_INNER_LOOP_CURRENT_INCREMENT_STRUCT;

#define DDR5_RCD_DFETM_OUTER_LOOP_CURRENT_INCREMENT_REG 0x3E
typedef union {
  struct {
    UINT8 outer_loop_current_increment_read_only : 7;
    /* Outer Loop Current Increment (Read Only) - Bits[6:0]
      0000000=Outer Loop Current Increment = 0x00,
      0000001=Outer Loop Current Increment = 0x01,
      0000010=Outer Loop Current Increment = 0x02,
      ...,
      1111100=Outer Loop Current Increment = 0x7C,
      1111101=Outer Loop Current Increment = 0x7D,
      1111110=Outer Loop Current Increment = 0x7E,
      1111111=Outer Loop Current Increment = 0x7F
    */
    UINT8 rw3e_8_inner_loop_current_increment_read_only : 1;
    /* RW3E[8] Inner Loop Current Increment (Read Only) - Bits[7]
      0=Inner Loop Current Increment = 0,
      1=Inner Loop Current Increment = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFETM_OUTER_LOOP_CURRENT_INCREMENT_STRUCT;

#define DDR5_RCD_DFE_VREF_RANGE_SELECTION_REG 0x3F
typedef union {
  struct {
    UINT8 dca0 : 1;
    /* DCA0 - Bits[0]
      0=Positive,
      1=Negative
    */
    UINT8 dca1 : 1;
    /* DCA1 - Bits[1]
      0=Positive,
      1=Negative
    */
    UINT8 dca2 : 1;
    /* DCA2 - Bits[2]
      0=Positive,
      1=Negative
    */
    UINT8 dca3 : 1;
    /* DCA3 - Bits[3]
      0=Positive,
      1=Negative
    */
    UINT8 dca4 : 1;
    /* DCA4 - Bits[4]
      0=Positive,
      1=Negative
    */
    UINT8 dca5 : 1;
    /* DCA5 - Bits[5]
      0=Positive,
      1=Negative
    */
    UINT8 dca6 : 1;
    /* DCA6 - Bits[6]
      0=Positive,
      1=Negative
    */
    UINT8 dpar : 1;
    /* DPAR - Bits[7]
      0=Positive,
      1=Negative
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DFE_VREF_RANGE_SELECTION_STRUCT;

#define DDR5_RCD_RW40_INTERNAL_VREFCA_REG 0x40
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW40_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW41_INTERNAL_VREFCA_REG 0x41
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW41_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW42_INTERNAL_VREFCA_REG 0x42
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW42_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW43_INTERNAL_VREFCA_REG 0x43
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW43_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW44_INTERNAL_VREFCA_REG 0x44
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW44_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW45_INTERNAL_VREFCA_REG 0x45
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW45_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW46_INTERNAL_VREFCA_REG 0x46
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW46_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW47_INTERNAL_VREFCA_REG 0x47
typedef union {
  struct {
    UINT8 vrefca_as_percentage_of_vdd : 7;
    /* VrefCA as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW47_INTERNAL_VREFCA_STRUCT;

#define DDR5_RCD_RW48_INTERNAL_VREFCS_REG 0x48
typedef union {
  struct {
    UINT8 vrefcs_as_percentage_of_vdd : 7;
    /* VrefCS as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW48_INTERNAL_VREFCS_STRUCT;

#define DDR5_RCD_RW49_INTERNAL_VREFCS_REG 0x49
typedef union {
  struct {
    UINT8 vrefcs_as_percentage_of_vdd : 7;
    /* VrefCS as% of VDD - Bits[6:0]
      0000000 = 97.5%,
      0000001 = 97.0%,
      0000010 = 96.5%,
      0000011 = 96.0%,
      0000100 = 95.5%,
      0000101 = 95.0%,
      0000110 = 94.5%,
      0000111 = 94.0%,
      ...,
      0101101 = 75% (Default),
      ...,
      1100001 = 49.0%,
      1100010 = 48.5%
      1100011 = 48.0%,
      1100100 = 47.5%,
      1100101 = 47.0%,
      1100110 = 46.5%,
      1100111 = 46.0%,
      1101000 = 45.5%,
      1101001 = 45.0%,
      1101010 - 1111111 = Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[7]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_RW49_INTERNAL_VREFCS_STRUCT;

#define DDR5_RCD_ERROR_IN_VREF_REG 0x4A
typedef union {
  struct {
    UINT8 error_in_n_vref_control : 3;
    /* ERROR_IN_n Vref Control - Bits[2:0]
      000=0.80 x V DD (Default),
      001=0.75 x V DD,
      010=0.70 x V DD,
      011=0.60 x V DD,
      100=Reserved,
      101=Reserved,
      110=Reserved,
      111=Reserved
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_ERROR_IN_VREF_STRUCT;

#define DDR5_RCD_LOOP_BACK_VREF_REG 0x4B
typedef union {
  struct {
    UINT8 dlbs_vref_control : 3;
    /* DLBS Vref Control - Bits[2:0]
      000=0.80 x V DD (Default),
      001=0.75 x V DD,
      010=0.70 x V DD,
      011=0.60 x V DD,
      100=Reserved,
      101=Reserved,
      110=Reserved,
      111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[3]
      0=Reserved,
      1=Reserved
    */
    UINT8 dlbd_vref_control : 3;
    /* DLBD Vref Control - Bits[6:4]
      000=0.80 x V DD (Default),
      001=0.75 x V DD,
      010=0.70 x V DD,
      011=0.60 x V DD,
      100=Reserved,
      101=Reserved,
      110=Reserved,
      111=Reserved
    */
    UINT8 reserved_1 : 1;
    /* Reserved - Bits[7]
      0=Reserved,
      1=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_LOOP_BACK_VREF_STRUCT;

#define DDR5_RCD_CW_PAGE_REG 0x5F

#define DDR5_RCD_PG0_RW61_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x61
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW61_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW69_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x69
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW69_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW71_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x71
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW71_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW79_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x79
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW79_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW61_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x61
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW61_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW69_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x69
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW69_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW71_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x71
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW71_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW79_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_REG 0x79
typedef union {
  struct {
    UINT8 tap_1_dfe_coefficient : 6;
    /* Tap 1 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 1 DFE bias = 0 mV,
      000001=Tap 1 DFE bias +1 Tap Step,
      000010=Tap 1 DFE bias +2 Tap Steps,
      000011=Tap 1 DFE bias +3 Tap Step,
      000100=Tap 1 DFE bias +4 Tap Steps,
      000101=Tap 1 DFE bias +5 Tap Steps,
      000110=Tap 1 DFE bias +6 Tap Steps,
      000111=Tap 1 DFE bias +7 Tap Steps,
      001000=Tap 1 DFE bias +8 Tap Steps,
      001001=Tap 1 DFE bias +9 Tap Steps,
      001010=Tap 1 DFE bias +10 Tap Steps,
      001011=Tap 1 DFE bias +11 Tap Steps,
      001100=Tap 1 DFE bias +12 Tap Steps,
      001101=Tap 1 DFE bias +13 Tap Steps,
      001110=Tap 1 DFE bias +14 Tap Steps,
      001111=Tap 1 DFE bias +15 Tap Steps,
      010000=Tap 1 DFE bias +16 Tap Steps,
      010001=Tap 1 DFE bias +17 Tap Steps,
      010010=Tap 1 DFE bias +18 Tap Steps,
      010011=Tap 1 DFE bias +19 Tap Steps,
      010100=Tap 1 DFE bias +20 Tap Steps,
      010101=Tap 1 DFE bias +21 Tap Steps,
      010110=Tap 1 DFE bias +22 Tap Steps,
      010111=Tap 1 DFE bias +23 Tap Steps,
      011000=Tap 1 DFE bias +24 Tap Steps,
      011001=Tap 1 DFE bias +25 Tap Steps,
      011010=Tap 1 DFE bias +26 Tap Steps,
      011011=Tap 1 DFE bias +27 Tap Steps,
      011100=Tap 1 DFE bias +28 Tap Steps,
      011101=Tap 1 DFE bias +29 Tap Steps,
      011110=Tap 1 DFE bias +30 Tap Steps,
      011111=Tap 1 DFE bias +31 Tap Steps,
      100000=Tap 1 DFE bias +32 Tap Steps,
      100001=Tap 1 DFE bias +33 Tap Steps,
      100010=Tap 1 DFE bias +34 Tap Steps,
      100011=Tap 1 DFE bias +35 Tap Steps,
      100100=Tap 1 DFE bias +36 Tap Steps,
      100101=Tap 1 DFE bias +37 Tap Steps,
      100110=Tap 1 DFE bias +38 Tap Steps,
      100111=Tap 1 DFE bias +39 Tap Steps,
      101000=Tap 1 DFE bias +40 Tap Steps,
      101001=Tap 1 DFE bias +41 Tap Steps,
      101010=Tap 1 DFE bias +42 Tap Steps,
      101011=Tap 1 DFE bias +43 Tap Steps,
      101100=Tap 1 DFE bias +44 Tap Steps,
      101101=Tap 1 DFE bias +45 Tap Steps,
      101110=Tap 1 DFE bias +46 Tap Steps,
      101111=Tap 1 DFE bias +47 Tap Steps,
      110000=Tap 1 DFE bias +48 Tap Steps,
      110001=Tap 1 DFE bias +49 Tap Steps,
      110010=Tap 1 DFE bias +50 Tap Steps,
      110011 - 111111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_1_coefficient_sign_bit : 1;
    /* Tap 1 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 1 DFE bias when Tap 1 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW79_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_1_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW62_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x62
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW62_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW6A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x6A
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW6A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW72_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x72
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW72_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW7A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x7A
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW7A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW62_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x62
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW62_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW6A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x6A
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW6A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW72_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x72
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW72_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW7A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_REG 0x7A
typedef union {
  struct {
    UINT8 tap_2_dfe_coefficient : 6;
    /* Tap 2 DFE Coefficient - Bits[5:0]
      000000=(Default) Tap 2 DFE bias = 0 mV,
      000001=Tap 2 DFE bias+1 Tap Step,
      000010=Tap 2 DFE bias +2 Tap Steps,
      000011=Tap 2 DFE bias +3 Tap Steps,
      000100=Tap 2 DFE bias +4 Tap Steps,
      000101=Tap 2 DFE bias +5 Tap Steps,
      000110=Tap 2 DFE bias +6 Tap Steps,
      000111=Tap 2 DFE bias +7 Tap Steps,
      001000=Tap 2 DFE bias +8 Tap Steps,
      001001=Tap 2 DFE bias +9 Tap Steps,
      001010=Tap 2 DFE bias +10 Tap Steps,
      001011=Tap 2 DFE bias +11 Tap Steps,
      001100=Tap 2 DFE bias +12 Tap Steps,
      001101=Tap 2 DFE bias +13 Tap Steps,
      001110=Tap 2 DFE bias +14 Tap Steps,
      001111=Tap 2 DFE bias +15 Tap Steps,
      010000=Tap 2 DFE bias +16 Tap Steps,
      010001=Tap 2 DFE bias +17 Tap Steps,
      010010=Tap 2 DFE bias +18 Tap Steps,
      010011=Tap 2 DFE bias +19 Tap Steps,
      010100=Tap 2 DFE bias +20 Tap Steps,
      010101 - 101000=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[6]
    */
    UINT8 tap_2_coefficient_sign_bit : 1;
    /* Tap 2 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 2 DFE bias when Tap 2 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW7A_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_2_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW63_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x63
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW63_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW6B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x6B
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW6B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW73_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x73
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW73_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW7B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x7B
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW7B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW63_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x63
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW63_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW6B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x6B
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW6B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW73_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x73
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW73_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW7B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_REG 0x7B
typedef union {
  struct {
    UINT8 tap_3_dfe_coefficient : 5;
    /* Tap 3 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 3 DFE bias = 0 mV,
      00001=Tap 3 DFE bias +1 Tap Step,
      00010=Tap 3 DFE bias +2 Tap Steps,
      00011=Tap 3 DFE bias +3 Tap Steps,
      00100=Tap 3DFE bias +4 Tap Steps,
      00101=Tap 3 DFE bias +5 Tap Steps,
      00110=Tap 3 DFE bias +6 Tap Steps,
      00111=Tap 3 DFE bias +7 Tap Steps,
      01000=Tap 3 DFE bias +8 Tap Steps,
      01001=Tap 3 DFE bias +9 Tap Steps,
      01010=Tap 3 DFE bias +10 Tap Steps,
      01011=Tap 3 DFE bias +11 Tap Steps,
      01100=Tap 3 DFE bias +12 Tap Steps,
      01101=Tap 3 DFE bias +13 Tap Steps,
      01110=Tap 3 DFE bias +14 Tap Steps,
      01111=Tap 3 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_3_coefficient_sign_bit : 1;
    /* Tap 3 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 3 DFE bias when Tap 3 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW7B_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_3_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW64_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x64
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW64_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW6C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x6C
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW6C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW74_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x74
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW74_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW7C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x7C
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW7C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW64_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x64
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW64_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW6C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x6C
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW6C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW74_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x74
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW74_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG1_RW7C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_REG 0x7C
typedef union {
  struct {
    UINT8 tap_4_dfe_coefficient : 5;
    /* Tap 4 DFE Coefficient - Bits[4:0]
      00000=(Default) Tap 4 DFE bias = 0 mV,
      00001=Tap 4 DFE bias +1 Tap Steps,
      00010=Tap 4 DFE bias +2 Tap Steps,
      00011=Tap 4 DFE bias +3 Tap Steps,
      00100=Tap 4 DFE bias +4 Tap Steps,
      00101=Tap 4 DFE bias +5 Tap Steps,
      00110=Tap 4 DFE bias +6 Tap Steps,
      00111=Tap 4 DFE bias +7 Tap Steps,
      01000=Tap 4 DFE bias +8 Tap Steps,
      01001=Tap 4 DFE bias +9 Tap Steps,
      01010=Tap 4 DFE bias +10 Tap Steps,
      01011=Tap 4 DFE bias +11 Tap Steps,
      01100=Tap 4 DFE bias +12 Tap Steps,
      01101=Tap 4 DFE bias +13 Tap Steps,
      01110=Tap 4 DFE bias +14 Tap Steps,
      01111=Tap 4 DFE bias +15 Tap Steps,
      10000 - 11111=Reserved
    */
    UINT8 reserved : 2;
    /* Reserved - Bits[6:5]
    */
    UINT8 tap_4_coefficient_sign_bit : 1;
    /* Tap 4 Coefficient Sign Bit - Bits[7]
      0=(Default) Positive Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Negative bias for Logic 0 Tap 1 post-cursor),
      1=Negative Tap 4 DFE bias when Tap 4 post-cursor is Logic 1 (Positive bias for Logic 0 Tap 1 post-cursor)
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW7C_DPAR_AND_DCA_6_0_RECEIVER_DFE_TAP_4_COEFFICIENTS_STRUCT;

#define DDR5_RCD_PG0_RW60_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x60
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW60_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG0_RW68_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x68
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW68_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG0_RW70_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x70
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW70_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG0_RW78_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x78
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG0_RW78_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG1_RW60_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x60
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW60_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG1_RW68_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x68
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW68_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG1_RW70_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x70
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW70_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG1_RW78_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_REG 0x78
typedef union {
  struct {
    UINT8 flat_band_dc_gain_adjustment : 3;
    /* Flat-band (DC) gain adjustment - Bits[2:0]
      000=Gain Adjustment = 0 dB (default),
      001=Gain Adjustment = +6 dB,
      010=Gain Adjustment = +4 dB,
      011=Gain Adjustment = +2 dB,
      100=Gain Adjustment = 0 dB (same as default),
      101=Gain Adjustment = -2 dB,
      110=Gain Adjustment = -4 dB,
      111=Gain Adjustment = -6 dB
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG1_RW78_DPAR_AND_DCA_6_0_RECEIVER_DFE_GAIN_OFFSET_STRUCT;

#define DDR5_RCD_PG2_RW63_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x63
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW63_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW67_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x67
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW67_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW6B_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x6B
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW6B_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW6F_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x6F
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW6F_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW73_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x73
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW73_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW77_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x77
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW77_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW7B_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x7B
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW7B_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_PG2_RW7F_LFSR_SEED_FOR_DFE_TRAINING_MODE_REG 0x7F
typedef union {
  struct {
    UINT8 lfsr_seed : 8;
    /* LFSR Seed - Bits[7:0]
      00000000=LFSR Seed = 0x00*,
      00000001=LFSR Seed = 0x01,
      00000010=LFSR Seed = 0x02,
      ...,
      11111100=LFSR Seed = 0xFC,
      11111101=LFSR Seed = 0xFD,
      11111110=LFSR Seed = 0xFE,
      11111111=LFSR Seed = 0xFF
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG2_RW7F_LFSR_SEED_FOR_DFE_TRAINING_MODE_STRUCT;

#define DDR5_RCD_DATE_CODE_BYTE_0_REG 0x60
typedef union {
  struct {
    UINT8 date_code_digit_0_1_2_year_information : 4;
    /* Date Code Digit 0 1,2 Year Information - Bits[3:0]
      0000=Digit = 0,
      0001=Digit = 1,
      0010=Digit = 2,
      ...,
      0111=Digit = 7,
      1000=Digit = 8,
      1001=Digit = 9,
      1010=Codes 10 to 15 Reserved,
      ...,
      1111=Codes 10 to 15 Reserved
    */
    UINT8 date_code_digit_1_1_2_year_information : 4;
    /* Date Code Digit 1 1, 2 Year Information - Bits[7:4]
      0000=Digit = 0,
      0001=Digit = 1,
      0010=Digit = 2,
      ...,
      0111=Digit = 7,
      1000=Digit = 8,
      1001=Digit = 9,
      1010=Codes 10 to 15 Reserved,
      ...,
      1111=Codes 10 to 15 Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DATE_CODE_BYTE_0_STRUCT;

#define DDR5_RCD_DATE_CODE_BYTE_1_REG 0x61
typedef union {
  struct {
    UINT8 date_code_digit_2_1_2_work_week_information : 4;
    /* Date Code Digit 2 1,2 Work Week Information - Bits[3:0]
      0000=Digit = 0,
      0001=Digit = 1,
      0010=Digit = 2,
      ...,
      0111=Digit = 7,
      1000=Digit = 8,
      1001=Digit = 9,
      1010=Codes 10 to 15 Reserved,
      ...,
      1111=Codes 10 to 15 Reserved
    */
    UINT8 date_code_digit_3_work_week_information : 4;
    /* Date Code Digit 3 Work Week Information - Bits[7:4]
      0000=Digit = 0,
      0001=Digit = 1,
      0010=Digit = 2,
      ...,
      0111=Digit = 7,
      1000=Digit = 8,
      1001=Digit = 9,
      1010=Codes 10 to 15 Reserved,
      ...,
      1111=Codes 10 to 15 Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DATE_CODE_BYTE_1_STRUCT;

#define DDR5_RCD_DATE_CODE_BYTE_2_REG 0x62
typedef union {
  struct {
    UINT8 date_code_digit_4_reserved : 4;
    /* Date Code Digit 4 Reserved - Bits[3:0]
      0000=Digit = 0,
      0001=Digit = 1,
      0010=Digit = 2,
      ...,
      0111=Digit = 7,
      1000=Digit = 8,
      1001=Digit = 9,
      1010=Codes 10 to 15 Reserved,
      ...,
      1111=Codes 10 to 15 Reserved
    */
    UINT8 date_code_digit_5_reserved : 4;
    /* Date Code Digit 5 Reserved - Bits[7:4]
      0000=Digit = 0,
      0001=Digit = 1,
      0010=Digit = 2,
      ...,
      0111=Digit = 7,
      1000=Digit = 8,
      1001=Digit = 9,
      1010=Codes 10 to 15 Reserved,
      ...,
      1111=Codes 10 to 15 Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DATE_CODE_BYTE_2_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_0_REG 0x63
typedef union {
  struct {
    UINT8 byte_0_of_unique_unit_code : 8;
    /* Byte 0 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_0_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_1_REG 0x64
typedef union {
  struct {
    UINT8 byte_1_of_unique_unit_code : 8;
    /* Byte 1 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_1_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_2_REG 0x65
typedef union {
  struct {
    UINT8 byte_2_of_unique_unit_code : 8;
    /* Byte 2 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_2_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_3_REG 0x66
typedef union {
  struct {
    UINT8 byte_3_of_unique_unit_code : 8;
    /* Byte 3 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_3_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_4_REG 0x67
typedef union {
  struct {
    UINT8 byte_4_of_unique_unit_code : 8;
    /* Byte 4 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_4_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_5_REG 0x68
typedef union {
  struct {
    UINT8 byte_5_of_unique_unit_code : 8;
    /* Byte 5 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_5_STRUCT;

#define DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_6_REG 0x69
typedef union {
  struct {
    UINT8 byte_6_of_unique_unit_code : 8;
    /* Byte 6 of Unique Unit Code - Bits[7:0]
      00000000=Code 0,
      00000001=Code 1,
      00000010=Code 2,
      ...,
      11111101=Code 253,
      11111110=Code 254,
      11111111=Code 255
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_SPECIFIC_UNIQUE_UNIT_CODE_BYTE_6_STRUCT;

#define DDR5_RCD_VENDOR_ID_BYTE_0_REG 0x6A
typedef union {
  struct {
    UINT8 byte_0_of_vendor_id : 8;
    /* Byte 0 of Vendor ID - Bits[7:0]
      00000000=VID[7:0] = 0x00h,
      00000001=VID[7:0] = 0x01h,
      00000010=VID[7:0] = 0x02h,
      ...,
      11111101=VID[7:0] = 0xFDh,
      11111110=VID[7:0] = 0xFEh,
      11111111=VID[7:0] = 0xFFh
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_ID_BYTE_0_STRUCT;

#define DDR5_RCD_VENDOR_ID_BYTE_1_REG 0x6B
typedef union {
  struct {
    UINT8 byte_1_of_vendor_id : 8;
    /* Byte 1 of Vendor ID - Bits[7:0]
      00000000=VID[15:8] = 0x00h,
      00000001=VID[15:8] = 0x01h,
      00000010=VID[15:8] = 0x02h,
      ...,
      11111101=VID[15:8] = 0xFDh,
      11111110=VID[15:8] = 0xFEh,
      11111111=VID[15:8] = 0xFFh
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VENDOR_ID_BYTE_1_STRUCT;

#define DDR5_RCD_DEVICE_ID_BYTE_0_REG 0x6C
typedef union {
  struct {
    UINT8 byte_0_of_device_id : 8;
    /* Byte 0 of Device ID - Bits[7:0]
      00000000=DID[7:0] = 0x00h,
      00000001=DID[7:0] = 0x01h,
      00000010=DID[7:0] = 0x02h,
      ...,
      11111101=DID[7:0] = 0xFDh,
      11111110=DID[7:0] = 0xFEh,
      11111111=DID[7:0] = 0xFFh
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DEVICE_ID_BYTE_0_STRUCT;

#define DDR5_RCD_DEVICE_ID_BYTE_1_REG 0x6D
typedef union {
  struct {
    UINT8 byte_1_of_device_id : 8;
    /* Byte 1 of Device ID - Bits[7:0]
      00000000=DID[15:8] = 0x00h,
      00000001=DID[15:8] = 0x01h,
      00000010=DID[15:8] = 0x02h,
      ...,
      11111101=DID[15:8] = 0xFDh,
      11111110=DID[15:8] = 0xFEh,
      11111111=DID[15:8] = 0xFFh
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_DEVICE_ID_BYTE_1_STRUCT;

#define DDR5_RCD_REVISION_ID_REG 0x6E
typedef union {
  struct {
    UINT8 revision_id : 8;
    /* Revision ID - Bits[7:0]
      00000000=RID[7:0] = 0x00h,
      00000001=RID[7:0] = 0x01h,
      00000010=RID[7:0] = 0x02h,
      ...,
      11111101=RID[7:0] = 0xFDh,
      11111110=RID[7:0] = 0xFEh,
      11111111=RID[7:0] = 0xFFh
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_REVISION_ID_STRUCT;

#define DDR5_RCD_PG4_RW6E_VHOST_CMD_3_0_CA_7_0_REG 0x6E
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW6E_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW6C_VHOST_CMD_3_0_CA_7_0_REG 0x6C
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW6C_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW6A_VHOST_CMD_3_0_CA_7_0_REG 0x6A
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW6A_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW68_VHOST_CMD_3_0_CA_7_0_REG 0x68
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW68_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW66_VHOST_CMD_3_0_CA_7_0_REG 0x66
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW66_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW64_VHOST_CMD_3_0_CA_7_0_REG 0x64
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW64_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW62_VHOST_CMD_3_0_CA_7_0_REG 0x62
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW62_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW60_VHOST_CMD_3_0_CA_7_0_REG 0x60
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca0 : 1;
    /* Cmd[3:0] 1st/2nd UI CA0 - Bits[0]
      0=QCA0 = 0,
      1=QCA0 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca1 : 1;
    /* Cmd[3:0] 1st/2nd UI CA1 - Bits[1]
      0=QCA1 = 0,
      1=QCA1 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca2 : 1;
    /* Cmd[3:0] 1st/2nd UI CA2 - Bits[2]
      0=QCA2 = 0,
      1=QCA2 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca3 : 1;
    /* Cmd[3:0] 1st/2nd UI CA3 - Bits[3]
      0=QCA3 = 0,
      1=QCA3 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca4 : 1;
    /* Cmd[3:0] 1st/2nd UI CA4 - Bits[4]
      0=QCA4 = 0,
      1=QCA4 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca5 : 1;
    /* Cmd[3:0] 1st/2nd UI CA5 - Bits[5]
      0=QCA5 = 0,
      1=QCA5 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca6 : 1;
    /* Cmd[3:0] 1st/2nd UI CA6 - Bits[6]
      0=QCA6 = 0,
      1=QCA6 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca7 : 1;
    /* Cmd[3:0] 1st/2nd UI CA7 - Bits[7]
      0=QCA7 = 0,
      1=QCA7 = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW60_VHOST_CMD_3_0_CA_7_0_STRUCT;

#define DDR5_RCD_PG4_RW6F_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x6F
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW6F_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW6D_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x6D
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW6D_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW6B_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x6B
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW6B_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW69_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x69
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW69_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW67_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x67
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW67_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW65_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x65
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW65_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW63_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x63
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW63_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_PG4_RW61_VHOST_CMD_3_0_CS_1_0_CA_13_8_REG 0x61
typedef union {
  struct {
    UINT8 cmd_3_0_1st_2nd_ui_ca8 : 1;
    /* Cmd[3:0] 1st/2nd UI CA8 - Bits[0]
      0=QCA8 = 0,
      1=QCA8 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca9 : 1;
    /* Cmd[3:0] 1st/2nd UI CA9 - Bits[1]
      0=QCA9 = 0,
      1=QCA9 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca10 : 1;
    /* Cmd[3:0] 1st/2nd UI CA10 - Bits[2]
      0=QCA10 = 0,
      1=QCA10 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca11 : 1;
    /* Cmd[3:0] 1st/2nd UI CA11 - Bits[3]
      0=QCA11 = 0,
      1=QCA11 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca12 : 1;
    /* Cmd[3:0] 1st/2nd UI CA12 - Bits[4]
      0=QCA12 = 0,
      1=QCA12 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_ca13 : 1;
    /* Cmd[3:0] 1st/2nd UI CA13 - Bits[5]
      0=QCA13 = 0,
      1=QCA13 = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs0_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS0_n - Bits[6]
      0=QCS0_n = 0,
      1=QCS0_n = 1
    */
    UINT8 cmd_3_0_1st_2nd_ui_cs1_n : 1;
    /* Cmd[3:0] 1st/2nd UI CS1_n - Bits[7]
      0=QCS1_n = 0,
      1=QCS1_n = 1
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_PG4_RW61_VHOST_CMD_3_0_CS_1_0_CA_13_8_STRUCT;

#define DDR5_RCD_VHOST_1_0_CMD_TO_CMD_DELAY_REG 0x70
typedef union {
  struct {
    UINT8 cmd0_to_cmd1_delay : 3;
    /* cmd0 to cmd1 Delay - Bits[2:0]
      000=2 nCK,
      001=4 nCK,
      010=8 nCK,
      011=16 nCK,
      100=64 nCK,
      101=256 nCK,
      110=1024 nCK,
      111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[3]
      0=Reserved,
      1=Reserved
    */
    UINT8 cmd1_to_cmd2_delay : 3;
    /* cmd1 to cmd2 Delay - Bits[6:4]
      000=2 nCK,
      001=4 nCK,
      010=8 nCK,
      011=16 nCK,
      100=64 nCK,
      101=256 nCK,
      110=1024 nCK,
      111=Reserved
    */
    UINT8 reserved_1 : 1;
    /* Reserved - Bits[7]
      0=Reserved,
      1=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VHOST_1_0_CMD_TO_CMD_DELAY_STRUCT;

#define DDR5_RCD_VHOST_3_2_CMD_TO_CMD_DELAY_REG 0x71
typedef union {
  struct {
    UINT8 cmd2_to_cmd3_delay : 3;
    /* cmd2 to cmd3 Delay - Bits[2:0]
      000=2 nCK,
      001=4 nCK,
      010=8 nCK,
      011=16 nCK,
      100=64 nCK,
      101=256 nCK,
      110=1024 nCK,
      111=Reserved
    */
    UINT8 reserved : 1;
    /* Reserved - Bits[3]
      0=Reserved,
      1=Reserved
    */
    UINT8 cmd3_to_cmdn_delay : 3;
    /* cmd3 to cmdn Delay - Bits[6:4]
      000=2 nCK,
      001=4 nCK,
      010=8 nCK,
      011=16 nCK,
      100=64 nCK,
      101=256 nCK,
      110=1024 nCK,
      111=Reserved
    */
    UINT8 reserved_1 : 1;
    /* Reserved - Bits[7]
      0=Reserved,
      1=Reserved
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VHOST_3_2_CMD_TO_CMD_DELAY_STRUCT;

#define DDR5_RCD_VHOST_REPEAT_MODE_REG 0x72
typedef union {
  struct {
    UINT8 repeat_control : 2;
    /* Repeat Control - Bits[1:0]
      00=Repeat to cmd0 (repeat all 4),
      01=Repeat to cmd1 (repeat last 3),
      10=Repeat to cmd2 (repeat last 2),
      11=Repeat to cmd3 (repeat last 1)
    */
    UINT8 repeat_enable : 1;
    /* Repeat Enable - Bits[2]
      0=Do not repeat,
      1=Repeat as defined in RW72[1:0]
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VHOST_REPEAT_MODE_STRUCT;

#define DDR5_RCD_VHOST_START_AND_STOP_GLOBAL_REG 0x73
typedef union {
  struct {
    UINT8 vhost_selection : 2;
    /* VHost Selection - Bits[1:0]
      00=CH_A only,
      01=CH_B only,
      10=CH_A and CH_B Start and Stop at the same time,
      11=Reserved
    */
    UINT8 vhost_start_stop : 1;
    /* VHost Start/Stop - Bits[2]
      0=Stop VHost,
      1=Start VHost
    */
    UINT8 reserved : 5;
    /* Reserved - Bits[7:3]
    */
  } Bits;
  UINT8 Data;
} DDR5_RCD_VHOST_START_AND_STOP_GLOBAL_STRUCT;

#endif  // _DDR5_RCW_REGS_H_

