/*************************************************************************/ /*!
@Title          Test Chip Framework system control register definitions
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Autogenerated C -- do not edit
                Generated from: tcf_clk_ctrl.def
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

#if !defined(_TCF_CLK_CTRL_H_)
#define _TCF_CLK_CTRL_H_

/*
 * The following register definitions are valid if register 0x28 has value 0.
 */

/*
	Register FPGA_ID_REG
*/
#define TCF_CLK_CTRL_FPGA_ID_REG            0x0000
#define FPGA_ID_REG_CORE_CFG_MASK           0x0000FFFFU
#define FPGA_ID_REG_CORE_CFG_SHIFT          0
#define FPGA_ID_REG_CORE_CFG_SIGNED         0

#define FPGA_ID_REG_CORE_ID_MASK            0xFFFF0000U
#define FPGA_ID_REG_CORE_ID_SHIFT           16
#define FPGA_ID_REG_CORE_ID_SIGNED          0

/*
	Register FPGA_REV_REG
*/
#define TCF_CLK_CTRL_FPGA_REV_REG           0x0008
#define FPGA_REV_REG_MAINT_MASK             0x000000FFU
#define FPGA_REV_REG_MAINT_SHIFT            0
#define FPGA_REV_REG_MAINT_SIGNED           0

#define FPGA_REV_REG_MINOR_MASK             0x0000FF00U
#define FPGA_REV_REG_MINOR_SHIFT            8
#define FPGA_REV_REG_MINOR_SIGNED           0

#define FPGA_REV_REG_MAJOR_MASK             0x00FF0000U
#define FPGA_REV_REG_MAJOR_SHIFT            16
#define FPGA_REV_REG_MAJOR_SIGNED           0

#define FPGA_REV_REG_DESIGNER_MASK          0xFF000000U
#define FPGA_REV_REG_DESIGNER_SHIFT         24
#define FPGA_REV_REG_DESIGNER_SIGNED        0

/*
	Register FPGA_DES_REV_1
*/
#define TCF_CLK_CTRL_FPGA_DES_REV_1         0x0010
#define FPGA_DES_REV_1_MASK                 0xFFFFFFFFU
#define FPGA_DES_REV_1_SHIFT                0
#define FPGA_DES_REV_1_SIGNED               0

/*
	Register FPGA_DES_REV_2
*/
#define TCF_CLK_CTRL_FPGA_DES_REV_2         0x0018
#define FPGA_DES_REV_2_MASK                 0xFFFFFFFFU
#define FPGA_DES_REV_2_SHIFT                0
#define FPGA_DES_REV_2_SIGNED               0

/*
	Register TCF_CORE_ID_REG
*/
#define TCF_CLK_CTRL_TCF_CORE_ID_REG        0x0020
#define TCF_CORE_ID_REG_CORE_CFG_MASK       0x0000FFFFU
#define TCF_CORE_ID_REG_CORE_CFG_SHIFT      0
#define TCF_CORE_ID_REG_CORE_CFG_SIGNED     0

#define TCF_CORE_ID_REG_CORE_ID_MASK        0xFFFF0000U
#define TCF_CORE_ID_REG_CORE_ID_SHIFT       16
#define TCF_CORE_ID_REG_CORE_ID_SIGNED      0

/*
	Register TCF_CORE_REV_REG
*/
#define TCF_CLK_CTRL_TCF_CORE_REV_REG       0x0028
#define TCF_CORE_REV_REG_MAINT_MASK         0x000000FFU
#define TCF_CORE_REV_REG_MAINT_SHIFT        0
#define TCF_CORE_REV_REG_MAINT_SIGNED       0

#define TCF_CORE_REV_REG_MINOR_MASK         0x0000FF00U
#define TCF_CORE_REV_REG_MINOR_SHIFT        8
#define TCF_CORE_REV_REG_MINOR_SIGNED       0

#define TCF_CORE_REV_REG_MAJOR_MASK         0x00FF0000U
#define TCF_CORE_REV_REG_MAJOR_SHIFT        16
#define TCF_CORE_REV_REG_MAJOR_SIGNED       0

#define TCF_CORE_REV_REG_DESIGNER_MASK      0xFF000000U
#define TCF_CORE_REV_REG_DESIGNER_SHIFT     24
#define TCF_CORE_REV_REG_DESIGNER_SIGNED    0

/*
	Register TCF_CORE_DES_REV_1
*/
#define TCF_CLK_CTRL_TCF_CORE_DES_REV_1     0x0030
#define TCF_CORE_DES_REV_1_MASK             0xFFFFFFFFU
#define TCF_CORE_DES_REV_1_SHIFT            0
#define TCF_CORE_DES_REV_1_SIGNED           0

/*
	Register TCF_CORE_DES_REV_2
*/
#define TCF_CLK_CTRL_TCF_CORE_DES_REV_2     0x0038
#define TCF_CORE_DES_REV_2_MASK             0xFFFFFFFFU
#define TCF_CORE_DES_REV_2_SHIFT            0
#define TCF_CORE_DES_REV_2_SIGNED           0


/*
 * The following register definitions are valid if register 0x28 has value 1.
 */

/*
	Register ID
*/
#define TCF_CLK_CTRL_ID                     0x0000
#define VARIANT_MASK                        0x0000FFFFU
#define VARIANT_SHIFT                       0
#define VARIANT_SIGNED                      0

#define ID_MASK                             0xFFFF0000U
#define ID_SHIFT                            16
#define ID_SIGNED                           0

/*
	Register REL
*/
#define TCF_CLK_CTRL_REL                    0x0008
#define MINOR_MASK                          0x0000FFFFU
#define MINOR_SHIFT                         0
#define MINOR_SIGNED                        0

#define MAJOR_MASK                          0xFFFF0000U
#define MAJOR_SHIFT                         16
#define MAJOR_SIGNED                        0

/*
	Register CHANGE_SET
*/
#define TCF_CLK_CTRL_CHANGE_SET             0x0010
#define SET_MASK                            0xFFFFFFFFU
#define SET_SHIFT                           0
#define SET_SIGNED                          0

/*
	Register USER_ID
*/
#define TCF_CLK_CTRL_USER_ID                0x0018
#define USER_ID_MASK                        0x0000000FU
#define USER_ID_SHIFT                       0
#define USER_ID_SIGNED                      0

/*
	Register USER_BUILD
*/
#define TCF_CLK_CTRL_USER_BUILD             0x0020
#define BUILD_MASK                          0xFFFFFFFFU
#define BUILD_SHIFT                         0
#define BUILD_SIGNED                        0

/*
	Register SW_IF_VERSION
*/
#define TCF_CLK_CTRL_SW_IF_VERSION          0x0028
#define VERSION_MASK                        0x0000FFFFU
#define VERSION_SHIFT                       0
#define VERSION_SIGNED                      0

/*
 * The following register definitions are valid for all Apollo builds,
 * even if some of the registers are not available for certain cores.
 */

/*
	Register SCB_GENERAL_CONTROL
*/
#define TCF_CLK_CTRL_SCB_GENERAL_CONTROL    0x0040
#define SCB_GC_TRANS_HALT_MASK              0x00000200U
#define SCB_GC_TRANS_HALT_SHIFT             9
#define SCB_GC_TRANS_HALT_SIGNED            0

#define SCB_GC_CKD_REGS_MASK                0x00000100U
#define SCB_GC_CKD_REGS_SHIFT               8
#define SCB_GC_CKD_REGS_SIGNED              0

#define SCB_GC_CKD_SLAVE_MASK               0x00000080U
#define SCB_GC_CKD_SLAVE_SHIFT              7
#define SCB_GC_CKD_SLAVE_SIGNED             0

#define SCB_GC_CKD_MASTER_MASK              0x00000040U
#define SCB_GC_CKD_MASTER_SHIFT             6
#define SCB_GC_CKD_MASTER_SIGNED            0

#define SCB_GC_CKD_XDATA_MASK               0x00000020U
#define SCB_GC_CKD_XDATA_SHIFT              5
#define SCB_GC_CKD_XDATA_SIGNED             0

#define SCB_GC_SFR_REG_MASK                 0x00000010U
#define SCB_GC_SFR_REG_SHIFT                4
#define SCB_GC_SFR_REG_SIGNED               0

#define SCB_GC_SFR_SLAVE_MASK               0x00000008U
#define SCB_GC_SFR_SLAVE_SHIFT              3
#define SCB_GC_SFR_SLAVE_SIGNED             0

#define SCB_GC_SFR_MASTER_MASK              0x00000004U
#define SCB_GC_SFR_MASTER_SHIFT             2
#define SCB_GC_SFR_MASTER_SIGNED            0

#define SCB_GC_SFR_DET_DATA_MASK            0x00000002U
#define SCB_GC_SFR_DET_DATA_SHIFT           1
#define SCB_GC_SFR_DET_DATA_SIGNED          0

#define SCB_GC_SFR_GEN_DATA_MASK            0x00000001U
#define SCB_GC_SFR_GEN_DATA_SHIFT           0
#define SCB_GC_SFR_GEN_DATA_SIGNED          0

/*
	Register SCB_MASTER_READ_COUNT
*/
#define TCF_CLK_CTRL_SCB_MASTER_READ_COUNT  0x0048
#define MASTER_READ_COUNT_MASK              0x0000FFFFU
#define MASTER_READ_COUNT_SHIFT             0
#define MASTER_READ_COUNT_SIGNED            0

/*
	Register SCB_MASTER_READ_DATA
*/
#define TCF_CLK_CTRL_SCB_MASTER_READ_DATA   0x0050
#define MASTER_READ_DATA_MASK               0x000000FFU
#define MASTER_READ_DATA_SHIFT              0
#define MASTER_READ_DATA_SIGNED             0

/*
	Register SCB_MASTER_ADDRESS
*/
#define TCF_CLK_CTRL_SCB_MASTER_ADDRESS     0x0058
#define SCB_MASTER_ADDRESS_MASK             0x000003FFU
#define SCB_MASTER_ADDRESS_SHIFT            0
#define SCB_MASTER_ADDRESS_SIGNED           0

/*
	Register SCB_MASTER_WRITE_DATA
*/
#define TCF_CLK_CTRL_SCB_MASTER_WRITE_DATA  0x0060
#define MASTER_WRITE_DATA_MASK              0x000000FFU
#define MASTER_WRITE_DATA_SHIFT             0
#define MASTER_WRITE_DATA_SIGNED            0

/*
	Register SCB_MASTER_WRITE_COUNT
*/
#define TCF_CLK_CTRL_SCB_MASTER_WRITE_COUNT 0x0068
#define MASTER_WRITE_COUNT_MASK             0x0000FFFFU
#define MASTER_WRITE_COUNT_SHIFT            0
#define MASTER_WRITE_COUNT_SIGNED           0

/*
	Register SCB_BUS_SELECT
*/
#define TCF_CLK_CTRL_SCB_BUS_SELECT         0x0070
#define BUS_SELECT_MASK                     0x00000003U
#define BUS_SELECT_SHIFT                    0
#define BUS_SELECT_SIGNED                   0

/*
	Register SCB_MASTER_FILL_STATUS
*/
#define TCF_CLK_CTRL_SCB_MASTER_FILL_STATUS 0x0078
#define MASTER_WRITE_FIFO_EMPTY_MASK        0x00000008U
#define MASTER_WRITE_FIFO_EMPTY_SHIFT       3
#define MASTER_WRITE_FIFO_EMPTY_SIGNED      0

#define MASTER_WRITE_FIFO_FULL_MASK         0x00000004U
#define MASTER_WRITE_FIFO_FULL_SHIFT        2
#define MASTER_WRITE_FIFO_FULL_SIGNED       0

#define MASTER_READ_FIFO_EMPTY_MASK         0x00000002U
#define MASTER_READ_FIFO_EMPTY_SHIFT        1
#define MASTER_READ_FIFO_EMPTY_SIGNED       0

#define MASTER_READ_FIFO_FULL_MASK          0x00000001U
#define MASTER_READ_FIFO_FULL_SHIFT         0
#define MASTER_READ_FIFO_FULL_SIGNED        0

/*
	Register CLK_AND_RST_CTRL
*/
#define TCF_CLK_CTRL_CLK_AND_RST_CTRL       0x0080
#define GLB_CLKG_EN_MASK                    0x00020000U
#define GLB_CLKG_EN_SHIFT                   17
#define GLB_CLKG_EN_SIGNED                  0

#define CLK_GATE_CNTL_MASK                  0x00010000U
#define CLK_GATE_CNTL_SHIFT                 16
#define CLK_GATE_CNTL_SIGNED                0

#define DUT_DCM_RESETN_MASK                 0x00000400U
#define DUT_DCM_RESETN_SHIFT                10
#define DUT_DCM_RESETN_SIGNED               0

#define MEM_RESYNC_BYPASS_MASK              0x00000200U
#define MEM_RESYNC_BYPASS_SHIFT             9
#define MEM_RESYNC_BYPASS_SIGNED            0

#define SYS_RESYNC_BYPASS_MASK              0x00000100U
#define SYS_RESYNC_BYPASS_SHIFT             8
#define SYS_RESYNC_BYPASS_SIGNED            0

#define SCB_RESETN_MASK                     0x00000010U
#define SCB_RESETN_SHIFT                    4
#define SCB_RESETN_SIGNED                   0

#define PDP2_RESETN_MASK                    0x00000008U
#define PDP2_RESETN_SHIFT                   3
#define PDP2_RESETN_SIGNED                  0

#define PDP1_RESETN_MASK                    0x00000004U
#define PDP1_RESETN_SHIFT                   2
#define PDP1_RESETN_SIGNED                  0

#define DDR_RESETN_MASK                     0x00000002U
#define DDR_RESETN_SHIFT                    1
#define DDR_RESETN_SIGNED                   0

#define DUT_RESETN_MASK                     0x00000001U
#define DUT_RESETN_SHIFT                    0
#define DUT_RESETN_SIGNED                   0

/*
	Register TEST_REG_OUT
*/
#define TCF_CLK_CTRL_TEST_REG_OUT           0x0088
#define TEST_REG_OUT_MASK                   0xFFFFFFFFU
#define TEST_REG_OUT_SHIFT                  0
#define TEST_REG_OUT_SIGNED                 0

/*
	Register TEST_REG_IN
*/
#define TCF_CLK_CTRL_TEST_REG_IN            0x0090
#define TEST_REG_IN_MASK                    0xFFFFFFFFU
#define TEST_REG_IN_SHIFT                   0
#define TEST_REG_IN_SIGNED                  0

/*
	Register TEST_CTRL
*/
#define TCF_CLK_CTRL_TEST_CTRL              0x0098
#define PCI_TEST_OFFSET_MASK                0xF8000000U
#define PCI_TEST_OFFSET_SHIFT               27
#define PCI_TEST_OFFSET_SIGNED              0

#define PDP1_HOST_MEM_SELECT_MASK           0x00000200U
#define PDP1_HOST_MEM_SELECT_SHIFT          9
#define PDP1_HOST_MEM_SELECT_SIGNED         0

#define HOST_PHY_MODE_MASK                  0x00000100U
#define HOST_PHY_MODE_SHIFT                 8
#define HOST_PHY_MODE_SIGNED                0

#define HOST_ONLY_MODE_MASK                 0x00000080U
#define HOST_ONLY_MODE_SHIFT                7
#define HOST_ONLY_MODE_SIGNED               0

#define PCI_TEST_MODE_MASK                  0x00000040U
#define PCI_TEST_MODE_SHIFT                 6
#define PCI_TEST_MODE_SIGNED                0

#define TURN_OFF_DDR_MASK                   0x00000020U
#define TURN_OFF_DDR_SHIFT                  5
#define TURN_OFF_DDR_SIGNED                 0

#define SYS_RD_CLK_INV_MASK                 0x00000010U
#define SYS_RD_CLK_INV_SHIFT                4
#define SYS_RD_CLK_INV_SIGNED               0

#define MEM_REQ_CLK_INV_MASK                0x00000008U
#define MEM_REQ_CLK_INV_SHIFT               3
#define MEM_REQ_CLK_INV_SIGNED              0

#define BURST_SPLIT_MASK                    0x00000004U
#define BURST_SPLIT_SHIFT                   2
#define BURST_SPLIT_SIGNED                  0

#define CLK_INVERSION_MASK                  0x00000002U
#define CLK_INVERSION_SHIFT                 1
#define CLK_INVERSION_SIGNED                0

#define ADDRESS_FORCE_MASK                  0x00000001U
#define ADDRESS_FORCE_SHIFT                 0
#define ADDRESS_FORCE_SIGNED                0

/*
	Register CLEAR_HOST_MEM_SIG
*/
#define TCF_CLK_CTRL_CLEAR_HOST_MEM_SIG     0x00A0
#define SIGNATURE_TAG_ID_MASK               0x00000F00U
#define SIGNATURE_TAG_ID_SHIFT              8
#define SIGNATURE_TAG_ID_SIGNED             0

#define CLEAR_HOST_MEM_SIGNATURE_MASK       0x00000001U
#define CLEAR_HOST_MEM_SIGNATURE_SHIFT      0
#define CLEAR_HOST_MEM_SIGNATURE_SIGNED     0

/*
	Register HOST_MEM_SIGNATURE
*/
#define TCF_CLK_CTRL_HOST_MEM_SIGNATURE     0x00A8
#define HOST_MEM_SIGNATURE_MASK             0xFFFFFFFFU
#define HOST_MEM_SIGNATURE_SHIFT            0
#define HOST_MEM_SIGNATURE_SIGNED           0

/*
	Register INTERRUPT_STATUS
*/
#define TCF_CLK_CTRL_INTERRUPT_STATUS       0x00C8
#define INTERRUPT_MASTER_STATUS_MASK        0x80000000U
#define INTERRUPT_MASTER_STATUS_SHIFT       31
#define INTERRUPT_MASTER_STATUS_SIGNED      0

#define OTHER_INTS_MASK                     0x7FFE0000U
#define OTHER_INTS_SHIFT                    17
#define OTHER_INTS_SIGNED                   0

#define HOST_MST_NORESPONSE_MASK            0x00010000U
#define HOST_MST_NORESPONSE_SHIFT           16
#define HOST_MST_NORESPONSE_SIGNED          0

#define PDP2_INT_MASK                       0x00008000U
#define PDP2_INT_SHIFT                      15
#define PDP2_INT_SIGNED                     0

#define PDP1_INT_MASK                       0x00004000U
#define PDP1_INT_SHIFT                      14
#define PDP1_INT_SIGNED                     0

#define EXT_INT_MASK                        0x00002000U
#define EXT_INT_SHIFT                       13
#define EXT_INT_SIGNED                      0

#define SCB_MST_HLT_BIT_MASK                0x00001000U
#define SCB_MST_HLT_BIT_SHIFT               12
#define SCB_MST_HLT_BIT_SIGNED              0

#define SCB_SLV_EVENT_MASK                  0x00000800U
#define SCB_SLV_EVENT_SHIFT                 11
#define SCB_SLV_EVENT_SIGNED                0

#define SCB_TDONE_RX_MASK                   0x00000400U
#define SCB_TDONE_RX_SHIFT                  10
#define SCB_TDONE_RX_SIGNED                 0

#define SCB_SLV_WT_RD_DAT_MASK              0x00000200U
#define SCB_SLV_WT_RD_DAT_SHIFT             9
#define SCB_SLV_WT_RD_DAT_SIGNED            0

#define SCB_SLV_WT_PRV_RD_MASK              0x00000100U
#define SCB_SLV_WT_PRV_RD_SHIFT             8
#define SCB_SLV_WT_PRV_RD_SIGNED            0

#define SCB_SLV_WT_WR_DAT_MASK              0x00000080U
#define SCB_SLV_WT_WR_DAT_SHIFT             7
#define SCB_SLV_WT_WR_DAT_SIGNED            0

#define SCB_MST_WT_RD_DAT_MASK              0x00000040U
#define SCB_MST_WT_RD_DAT_SHIFT             6
#define SCB_MST_WT_RD_DAT_SIGNED            0

#define SCB_ADD_ACK_ERR_MASK                0x00000020U
#define SCB_ADD_ACK_ERR_SHIFT               5
#define SCB_ADD_ACK_ERR_SIGNED              0

#define SCB_WR_ACK_ERR_MASK                 0x00000010U
#define SCB_WR_ACK_ERR_SHIFT                4
#define SCB_WR_ACK_ERR_SIGNED               0

#define SCB_SDAT_LO_TIM_MASK                0x00000008U
#define SCB_SDAT_LO_TIM_SHIFT               3
#define SCB_SDAT_LO_TIM_SIGNED              0

#define SCB_SCLK_LO_TIM_MASK                0x00000004U
#define SCB_SCLK_LO_TIM_SHIFT               2
#define SCB_SCLK_LO_TIM_SIGNED              0

#define SCB_UNEX_START_BIT_MASK             0x00000002U
#define SCB_UNEX_START_BIT_SHIFT            1
#define SCB_UNEX_START_BIT_SIGNED           0

#define SCB_BUS_INACTIVE_MASK               0x00000001U
#define SCB_BUS_INACTIVE_SHIFT              0
#define SCB_BUS_INACTIVE_SIGNED             0

/*
	Register INTERRUPT_OP_CFG
*/
#define TCF_CLK_CTRL_INTERRUPT_OP_CFG       0x00D0
#define PULSE_NLEVEL_MASK                   0x80000000U
#define PULSE_NLEVEL_SHIFT                  31
#define PULSE_NLEVEL_SIGNED                 0

#define INT_SENSE_MASK                      0x40000000U
#define INT_SENSE_SHIFT                     30
#define INT_SENSE_SIGNED                    0

#define INTERRUPT_DEST_MASK                 0x0000000FU
#define INTERRUPT_DEST_SHIFT                0
#define INTERRUPT_DEST_SIGNED               0

/*
	Register INTERRUPT_ENABLE
*/
#define TCF_CLK_CTRL_INTERRUPT_ENABLE       0x00D8
#define INTERRUPT_MASTER_ENABLE_MASK        0x80000000U
#define INTERRUPT_MASTER_ENABLE_SHIFT       31
#define INTERRUPT_MASTER_ENABLE_SIGNED      0

#define INTERRUPT_ENABLE_MASK               0x7FFFFFFFU
#define INTERRUPT_ENABLE_SHIFT              0
#define INTERRUPT_ENABLE_SIGNED             0

/*
	Register INTERRUPT_CLEAR
*/
#define TCF_CLK_CTRL_INTERRUPT_CLEAR        0x00E0
#define INTERRUPT_MASTER_CLEAR_MASK         0x80000000U
#define INTERRUPT_MASTER_CLEAR_SHIFT        31
#define INTERRUPT_MASTER_CLEAR_SIGNED       0

#define INTERRUPT_CLEAR_MASK                0x7FFFFFFFU
#define INTERRUPT_CLEAR_SHIFT               0
#define INTERRUPT_CLEAR_SIGNED              0

/*
	Register YCC_RGB_CTRL
*/
#define TCF_CLK_CTRL_YCC_RGB_CTRL           0x00E8
#define RGB_CTRL1_MASK                      0x000001FFU
#define RGB_CTRL1_SHIFT                     0
#define RGB_CTRL1_SIGNED                    0

#define RGB_CTRL2_MASK                      0x01FF0000U
#define RGB_CTRL2_SHIFT                     16
#define RGB_CTRL2_SIGNED                    0

/*
	Register EXP_BRD_CTRL
*/
#define TCF_CLK_CTRL_EXP_BRD_CTRL           0x00F8
#define PDP1_DATA_EN_MASK                   0x00000003U
#define PDP1_DATA_EN_SHIFT                  0
#define PDP1_DATA_EN_SIGNED                 0

#define PDP2_DATA_EN_MASK                   0x00000030U
#define PDP2_DATA_EN_SHIFT                  4
#define PDP2_DATA_EN_SIGNED                 0

#define EXP_BRD_OUTPUT_MASK                 0xFFFFFF00U
#define EXP_BRD_OUTPUT_SHIFT                8
#define EXP_BRD_OUTPUT_SIGNED               0

/*
	Register HOSTIF_CONTROL
*/
#define TCF_CLK_CTRL_HOSTIF_CONTROL         0x0100
#define HOSTIF_CTRL_MASK                    0x000000FFU
#define HOSTIF_CTRL_SHIFT                   0
#define HOSTIF_CTRL_SIGNED                  0

/*
	Register DUT_CONTROL_1
*/
#define TCF_CLK_CTRL_DUT_CONTROL_1          0x0108
#define DUT_CTRL_1_MASK                     0xFFFFFFFFU
#define DUT_CTRL_1_SHIFT                    0
#define DUT_CTRL_1_SIGNED                   0

/* TC ES2 additional needs those: */
#define DUT_CTRL_TEST_MODE_SHIFT            0
#define DUT_CTRL_TEST_MODE_MASK             0x3

#define DUT_CTRL_VCC_0V9EN                  (1<<12)
#define DUT_CTRL_VCC_1V8EN                  (1<<13)
#define DUT_CTRL_VCC_IO_INH                 (1<<14)
#define DUT_CTRL_VCC_CORE_INH               (1<<15)

/*
	Register DUT_STATUS_1
*/
#define TCF_CLK_CTRL_DUT_STATUS_1           0x0110
#define DUT_STATUS_1_MASK                   0xFFFFFFFFU
#define DUT_STATUS_1_SHIFT                  0
#define DUT_STATUS_1_SIGNED                 0

/*
	Register DUT_CTRL_NOT_STAT_1
*/
#define TCF_CLK_CTRL_DUT_CTRL_NOT_STAT_1    0x0118
#define DUT_STAT_NOT_CTRL_1_MASK            0xFFFFFFFFU
#define DUT_STAT_NOT_CTRL_1_SHIFT           0
#define DUT_STAT_NOT_CTRL_1_SIGNED          0

/*
	Register DUT_CONTROL_2
*/
#define TCF_CLK_CTRL_DUT_CONTROL_2          0x0120
#define DUT_CTRL_2_MASK                     0xFFFFFFFFU
#define DUT_CTRL_2_SHIFT                    0
#define DUT_CTRL_2_SIGNED                   0

/*
	Register DUT_STATUS_2
*/
#define TCF_CLK_CTRL_DUT_STATUS_2           0x0128
#define DUT_STATUS_2_MASK                   0xFFFFFFFFU
#define DUT_STATUS_2_SHIFT                  0
#define DUT_STATUS_2_SIGNED                 0

/*
	Register DUT_CTRL_NOT_STAT_2
*/
#define TCF_CLK_CTRL_DUT_CTRL_NOT_STAT_2    0x0130
#define DUT_CTRL_NOT_STAT_2_MASK            0xFFFFFFFFU
#define DUT_CTRL_NOT_STAT_2_SHIFT           0
#define DUT_CTRL_NOT_STAT_2_SIGNED          0

/*
	Register BUS_CAP_BASE_ADDR
*/
#define TCF_CLK_CTRL_BUS_CAP_BASE_ADDR      0x0138
#define BUS_CAP_BASE_ADDR_MASK              0xFFFFFFFFU
#define BUS_CAP_BASE_ADDR_SHIFT             0
#define BUS_CAP_BASE_ADDR_SIGNED            0

/*
	Register BUS_CAP_ENABLE
*/
#define TCF_CLK_CTRL_BUS_CAP_ENABLE         0x0140
#define BUS_CAP_ENABLE_MASK                 0x00000001U
#define BUS_CAP_ENABLE_SHIFT                0
#define BUS_CAP_ENABLE_SIGNED               0

/*
	Register BUS_CAP_COUNT
*/
#define TCF_CLK_CTRL_BUS_CAP_COUNT          0x0148
#define BUS_CAP_COUNT_MASK                  0xFFFFFFFFU
#define BUS_CAP_COUNT_SHIFT                 0
#define BUS_CAP_COUNT_SIGNED                0

/*
	Register DCM_LOCK_STATUS
*/
#define TCF_CLK_CTRL_DCM_LOCK_STATUS        0x0150
#define DCM_LOCK_STATUS_MASK                0x00000007U
#define DCM_LOCK_STATUS_SHIFT               0
#define DCM_LOCK_STATUS_SIGNED              0

/*
	Register AUX_DUT_RESETNS
*/
#define TCF_CLK_CTRL_AUX_DUT_RESETNS        0x0158
#define AUX_DUT_RESETNS_MASK                0x0000000FU
#define AUX_DUT_RESETNS_SHIFT               0
#define AUX_DUT_RESETNS_SIGNED              0

/*
	Register TCF_SPI_MST_ADDR_RDNWR
*/
#define TCF_CLK_CTRL_TCF_SPI_MST_ADDR_RDNWR 0x0160
#define TCF_SPI_MST_ADDR_MASK               0x0003FFFFU
#define TCF_SPI_MST_ADDR_SHIFT              0
#define TCF_SPI_MST_ADDR_SIGNED             0

#define TCF_SPI_MST_RDNWR_MASK              0x00040000U
#define TCF_SPI_MST_RDNWR_SHIFT             18
#define TCF_SPI_MST_RDNWR_SIGNED            0

#define TCF_SPI_MST_SLAVE_ID_MASK           0x00080000U
#define TCF_SPI_MST_SLAVE_ID_SHIFT          19
#define TCF_SPI_MST_SLAVE_ID_SIGNED         0

#define TCF_SPI_MST_MASTER_ID_MASK          0x00300000U
#define TCF_SPI_MST_MASTER_ID_SHIFT         20
#define TCF_SPI_MST_MASTER_ID_SIGNED        0

/*
	Register TCF_SPI_MST_WDATA
*/
#define TCF_CLK_CTRL_TCF_SPI_MST_WDATA      0x0168
#define TCF_SPI_MST_WDATA_MASK              0xFFFFFFFFU
#define TCF_SPI_MST_WDATA_SHIFT             0
#define TCF_SPI_MST_WDATA_SIGNED            0

/*
	Register TCF_SPI_MST_RDATA
*/
#define TCF_CLK_CTRL_TCF_SPI_MST_RDATA      0x0170
#define TCF_SPI_MST_RDATA_MASK              0xFFFFFFFFU
#define TCF_SPI_MST_RDATA_SHIFT             0
#define TCF_SPI_MST_RDATA_SIGNED            0

/*
	Register TCF_SPI_MST_STATUS
*/
#define TCF_CLK_CTRL_TCF_SPI_MST_STATUS     0x0178
#define TCF_SPI_MST_STATUS_MASK             0x0000000FU
#define TCF_SPI_MST_STATUS_SHIFT            0
#define TCF_SPI_MST_STATUS_SIGNED           0

/*
	Register TCF_SPI_MST_GO
*/
#define TCF_CLK_CTRL_TCF_SPI_MST_GO         0x0180
#define TCF_SPI_MST_GO_MASK                 0x00000001U
#define TCF_SPI_MST_GO_SHIFT                0
#define TCF_SPI_MST_GO_SIGNED               0

/*
	Register EXT_SIG_CTRL
*/
#define TCF_CLK_CTRL_EXT_SIG_CTRL           0x0188
#define EXT_SYS_REQ_SIG_START_MASK          0x00000001U
#define EXT_SYS_REQ_SIG_START_SHIFT         0
#define EXT_SYS_REQ_SIG_START_SIGNED        0

#define EXT_SYS_RD_SIG_START_MASK           0x00000002U
#define EXT_SYS_RD_SIG_START_SHIFT          1
#define EXT_SYS_RD_SIG_START_SIGNED         0

#define EXT_MEM_REQ_SIG_START_MASK          0x00000004U
#define EXT_MEM_REQ_SIG_START_SHIFT         2
#define EXT_MEM_REQ_SIG_START_SIGNED        0

#define EXT_MEM_RD_SIG_START_MASK           0x00000008U
#define EXT_MEM_RD_SIG_START_SHIFT          3
#define EXT_MEM_RD_SIG_START_SIGNED         0

/*
	Register EXT_SYS_REQ_SIG
*/
#define TCF_CLK_CTRL_EXT_SYS_REQ_SIG        0x0190
#define EXT_SYS_REQ_SIG_MASK                0xFFFFFFFFU
#define EXT_SYS_REQ_SIG_SHIFT               0
#define EXT_SYS_REQ_SIG_SIGNED              0

/*
	Register EXT_SYS_RD_SIG
*/
#define TCF_CLK_CTRL_EXT_SYS_RD_SIG         0x0198
#define EXT_SYS_RD_SIG_MASK                 0xFFFFFFFFU
#define EXT_SYS_RD_SIG_SHIFT                0
#define EXT_SYS_RD_SIG_SIGNED               0

/*
	Register EXT_MEM_REQ_SIG
*/
#define TCF_CLK_CTRL_EXT_MEM_REQ_SIG        0x01A0
#define EXT_MEM_REQ_SIG_MASK                0xFFFFFFFFU
#define EXT_MEM_REQ_SIG_SHIFT               0
#define EXT_MEM_REQ_SIG_SIGNED              0

/*
	Register EXT_MEM_RD_SIG
*/
#define TCF_CLK_CTRL_EXT_MEM_RD_SIG         0x01A8
#define EXT_MEM_RD_SIG_MASK                 0xFFFFFFFFU
#define EXT_MEM_RD_SIG_SHIFT                0
#define EXT_MEM_RD_SIG_SIGNED               0

/*
	Register EXT_SYS_REQ_WR_CNT
*/
#define TCF_CLK_CTRL_EXT_SYS_REQ_WR_CNT     0x01B0
#define EXT_SYS_REQ_WR_CNT_MASK             0xFFFFFFFFU
#define EXT_SYS_REQ_WR_CNT_SHIFT            0
#define EXT_SYS_REQ_WR_CNT_SIGNED           0

/*
	Register EXT_SYS_REQ_RD_CNT
*/
#define TCF_CLK_CTRL_EXT_SYS_REQ_RD_CNT     0x01B8
#define EXT_SYS_REQ_RD_CNT_MASK             0xFFFFFFFFU
#define EXT_SYS_REQ_RD_CNT_SHIFT            0
#define EXT_SYS_REQ_RD_CNT_SIGNED           0

/*
	Register EXT_SYS_RD_CNT
*/
#define TCF_CLK_CTRL_EXT_SYS_RD_CNT         0x01C0
#define EXT_SYS_RD_CNT_MASK                 0xFFFFFFFFU
#define EXT_SYS_RD_CNT_SHIFT                0
#define EXT_SYS_RD_CNT_SIGNED               0

/*
	Register EXT_MEM_REQ_WR_CNT
*/
#define TCF_CLK_CTRL_EXT_MEM_REQ_WR_CNT     0x01C8
#define EXT_MEM_REQ_WR_CNT_MASK             0xFFFFFFFFU
#define EXT_MEM_REQ_WR_CNT_SHIFT            0
#define EXT_MEM_REQ_WR_CNT_SIGNED           0

/*
	Register EXT_MEM_REQ_RD_CNT
*/
#define TCF_CLK_CTRL_EXT_MEM_REQ_RD_CNT     0x01D0
#define EXT_MEM_REQ_RD_CNT_MASK             0xFFFFFFFFU
#define EXT_MEM_REQ_RD_CNT_SHIFT            0
#define EXT_MEM_REQ_RD_CNT_SIGNED           0

/*
	Register EXT_MEM_RD_CNT
*/
#define TCF_CLK_CTRL_EXT_MEM_RD_CNT         0x01D8
#define EXT_MEM_RD_CNT_MASK                 0xFFFFFFFFU
#define EXT_MEM_RD_CNT_SHIFT                0
#define EXT_MEM_RD_CNT_SIGNED               0

/*
	Register TCF_CORE_TARGET_BUILD_CFG
*/
#define TCF_CLK_CTRL_TCF_CORE_TARGET_BUILD_CFG 0x01E0
#define TCF_CORE_TARGET_BUILD_ID_MASK       0x000000FFU
#define TCF_CORE_TARGET_BUILD_ID_SHIFT      0
#define TCF_CORE_TARGET_BUILD_ID_SIGNED     0

/*
	Register MEM_THROUGH_SYS
*/
#define TCF_CLK_CTRL_MEM_THROUGH_SYS        0x01E8
#define MEM_THROUGH_SYS_MASK                0x00000001U
#define MEM_THROUGH_SYS_SHIFT               0
#define MEM_THROUGH_SYS_SIGNED              0

/*
	Register HOST_PHY_OFFSET
*/
#define TCF_CLK_CTRL_HOST_PHY_OFFSET        0x01F0
#define HOST_PHY_OFFSET_MASK                0xFFFFFFFFU
#define HOST_PHY_OFFSET_SHIFT               0
#define HOST_PHY_OFFSET_SIGNED              0

/*
	Register DEBUG_REG_SEL
*/
#define TCF_CLK_CTRL_DEBUG_REG_SEL          0x01F8
#define DEBUG_REG_SELECT_MASK               0xFFFFFFFFU
#define DEBUG_REG_SELECT_SHIFT              0
#define DEBUG_REG_SELECT_SIGNED             0

/*
	Register DEBUG_REG
*/
#define TCF_CLK_CTRL_DEBUG_REG              0x0200
#define DEBUG_REG_VALUE_MASK                0xFFFFFFFFU
#define DEBUG_REG_VALUE_SHIFT               0
#define DEBUG_REG_VALUE_SIGNED              0

/*
	Register JTAG_CTRL
*/
#define TCF_CLK_CTRL_JTAG_CTRL              0x0208
#define JTAG_TRST_MASK                      0x00000001U
#define JTAG_TRST_SHIFT                     0
#define JTAG_TRST_SIGNED                    0

#define JTAG_TMS_MASK                       0x00000002U
#define JTAG_TMS_SHIFT                      1
#define JTAG_TMS_SIGNED                     0

#define JTAG_TCK_MASK                       0x00000004U
#define JTAG_TCK_SHIFT                      2
#define JTAG_TCK_SIGNED                     0

#define JTAG_TDO_MASK                       0x00000008U
#define JTAG_TDO_SHIFT                      3
#define JTAG_TDO_SIGNED                     0

#define JTAG_TDI_MASK                       0x00000010U
#define JTAG_TDI_SHIFT                      4
#define JTAG_TDI_SIGNED                     0

#define JTAG_DASH_N_REG_MASK                0x40000000U
#define JTAG_DASH_N_REG_SHIFT               30
#define JTAG_DASH_N_REG_SIGNED              0

#define JTAG_DISABLE_MASK                   0x80000000U
#define JTAG_DISABLE_SHIFT                  31
#define JTAG_DISABLE_SIGNED                 0

/*
	Register SAI_DEBUG_RDNWR
*/
#define TCF_CLK_CTRL_SAI_DEBUG_RDNWR        0x0300
#define SAI_DEBUG_REG_ADDR_MASK             0x000001FFU
#define SAI_DEBUG_REG_ADDR_SHIFT            0
#define SAI_DEBUG_REG_ADDR_SIGNED           0

#define SAI_DEBUG_REG_RDNWR_MASK            0x00000200U
#define SAI_DEBUG_REG_RDNWR_SHIFT           9
#define SAI_DEBUG_REG_RDNWR_SIGNED          0

/*
	Register SAI_DEBUG_WDATA
*/
#define TCF_CLK_CTRL_SAI_DEBUG_WDATA        0x0308
#define SAI_DEBUG_REG_WDATA_MASK            0xFFFFFFFFU
#define SAI_DEBUG_REG_WDATA_SHIFT           0
#define SAI_DEBUG_REG_WDATA_SIGNED          0

/*
	Register SAI_DEBUG_RDATA
*/
#define TCF_CLK_CTRL_SAI_DEBUG_RDATA        0x0310
#define SAI_DEBUG_REG_RDATA_MASK            0xFFFFFFFFU
#define SAI_DEBUG_REG_RDATA_SHIFT           0
#define SAI_DEBUG_REG_RDATA_SIGNED          0

/*
	Register SAI_DEBUG_GO
*/
#define TCF_CLK_CTRL_SAI_DEBUG_GO           0x0318
#define SAI_DEBUG_REG_GO_MASK               0x00000001U
#define SAI_DEBUG_REG_GO_SHIFT              0
#define SAI_DEBUG_REG_GO_SIGNED             0

/*
	Register AUX_DUT_RESETS
*/
#define TCF_CLK_CTRL_AUX_DUT_RESETS         0x0320
#define AUX_DUT_RESETS_MASK                 0x0000000FU
#define AUX_DUT_RESETS_SHIFT                0
#define AUX_DUT_RESETS_SIGNED               0

/*
	Register DUT_CLK_CTRL
*/
#define TCF_CLK_CTRL_DUT_CLK_CTRL           0x0328
#define MEM_REQ_PHSE_MASK                   0x0000FFFFU
#define MEM_REQ_PHSE_SHIFT                  0
#define MEM_REQ_PHSE_SIGNED                 0

/*
	Register DUT_CLK_STATUS
*/
#define TCF_CLK_CTRL_DUT_CLK_STATUS         0x0330
#define MEM_REQ_PHSE_SET_MASK               0x00000003U
#define MEM_REQ_PHSE_SET_SHIFT              0
#define MEM_REQ_PHSE_SET_SIGNED             0

/*
	Register DUT_CLK_INFO
*/
#define TCF_CLK_CTRL_DUT_CLK_INFO           0x0340
#define CORE_MASK                           0x0000FFFFU
#define CORE_SHIFT                          0
#define CORE_SIGNED                         0

#define MEM_MASK                            0xFFFF0000U
#define MEM_SHIFT                           16
#define MEM_SIGNED                          0

/*
	Register DUT_CLK_PHSE
*/
#define TCF_CLK_CTRL_DUT_CLK_PHSE           0x0348
#define MEM_REQ_MASK                        0x0000FFFFU
#define MEM_REQ_SHIFT                       0
#define MEM_REQ_SIGNED                      0

#define MEM_RD_MASK                         0xFFFF0000U
#define MEM_RD_SHIFT                        16
#define MEM_RD_SIGNED                       0

#endif /* !defined(_TCF_CLK_CTRL_H_) */

/*****************************************************************************
 End of file (tcf_clk_ctrl.h)
*****************************************************************************/
