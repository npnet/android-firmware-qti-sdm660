#ifndef __DDR_STATUSREG_H__
#define __DDR_STATUSREG_H__

/*=============================================================================

                              DDR HAL
                            Header File
GENERAL DESCRIPTION
This is the header file that describe the DDR status registers to be logged during clock/voltage switch.
this can be extended to log any other BIMC/PHY registers that aid in debugging .

Copyright 2014,2017 by Qualcomm Technologies, Inc.  All Rights Reserved.

===========================================================================

                            EDIT HISTORY FOR MODULE

  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.

  $Header: //components/rel/rpm.bf/1.8/core/boot/ddr/hw/sdm660/ddr_status_reg.h#2 $

when       who     what, where, why
--------   ---     ------------------------------------------------------------
03/02/17   mrr     Added DDR CC register for dump in case of crash
04/23/14   sr      Initial revision.
=============================================================================*/
/*==============================================================================
                                  INCLUDES
==============================================================================*/
#include "ddr_common.h"

/*==============================================================================
                                  MACROS
==============================================================================*/

/*==============================================================================
                                 DATA TYPES
==============================================================================*/

/* lets have structure element names same as IPCAT/SWI defined names for ease of debugging,
 * ensure that an entry here should have its HWIO address in the corresponding location 
 * of the array(ddr_status_reg_addr[]) which is defined in ddr_status_reg.c file */
typedef struct 
{
uint32 BIMC_S_DDR0_SCMO_RCH_STATUS;
uint32 BIMC_S_DDR1_SCMO_RCH_STATUS;
uint32 BIMC_S_DDR0_SCMO_WCH_STATUS;
uint32 BIMC_S_DDR1_SCMO_WCH_STATUS;
uint32 BIMC_S_DDR0_SCMO_CMD_BUF_STATUS;
uint32 BIMC_S_DDR1_SCMO_CMD_BUF_STATUS;
uint32 BIMC_S_DDR0_DPE_DRAM_STATUS_0;
uint32 BIMC_S_DDR1_DPE_DRAM_STATUS_0;
uint32 BIMC_S_DDR0_DPE_MEMC_STATUS_0;
uint32 BIMC_S_DDR1_DPE_MEMC_STATUS_0;

/* ABORT MODE LOGGING */
uint32 MCCC_REGS_CLK_PERIOD;
uint32 DDR_CC_MCCC_DDRCC_MCCC_TOP_STATUS;
uint32 MCCC_REGS_FREQ_SWITCH_UPDATE;

uint32 CH1_DDR_CC_DDRCC_PLLCTRL_CLK_SWITCH_STATUS;
uint32 CH1_DDR_CC_DDRCC_PLLCTRL_STATUS;
uint32 CH1_DDR_CC_DDRCC_PLL0_STATUS;
uint32 CH1_DDR_CC_DDRCC_PLL1_STATUS;
uint32 CH1_DDR_CC_DDRCC_DLL0_STATUS;
uint32 CH1_DDR_CC_DDRCC_DLL1_STATUS;

uint32 CH0_MCCC_CH_REGS_FSC_STATUS0;
uint32 CH0_MCCC_CH_REGS_FSC_STATUS3;
uint32 CH1_MCCC_CH_REGS_FSC_STATUS0;
uint32 CH1_MCCC_CH_REGS_FSC_STATUS3;
uint32 CH1_DDR_CC_DDRCC_PLLCTRL_GCC_CTRL;

uint32 CH0_SHKE_MREG_RDATA_STATUS;
uint32 CH0_DPE_INTERRUPT_STATUS;
uint32 CH0_SHKE_DRAM_STATUS;
uint32 CH0_SHKE_PERIODIC_MRR_RDATA_RANK1_U;
uint32 CH0_SHKE_PERIODIC_MRR_RDATA_RANK1_L;
uint32 CH0_SHKE_PERIODIC_MRR_RDATA_RANK0_U;
uint32 CH0_SHKE_PERIODIC_MRR_RDATA_RANK0_L;

uint32 CH1_SHKE_MREG_RDATA_STATUS;
uint32 CH1_DPE_INTERRUPT_STATUS;
uint32 CH1_SHKE_DRAM_STATUS;
uint32 CH1_SHKE_PERIODIC_MRR_RDATA_RANK1_U;
uint32 CH1_SHKE_PERIODIC_MRR_RDATA_RANK1_L;
uint32 CH1_SHKE_PERIODIC_MRR_RDATA_RANK0_U;
uint32 CH1_SHKE_PERIODIC_MRR_RDATA_RANK0_L;

#if 0

/*DDR0_SCMO , DDR1_SCMO */
uint32 BIMC_S_DDR0_SCMO_INTERRUPT_STATUS;
uint32 BIMC_S_DDR0_SCMO_ESYN_ADDR;
uint32 BIMC_S_DDR0_SCMO_ESYN_APACKET_0;
uint32 BIMC_S_DDR0_SCMO_ESYN_APACKET_1;
uint32 BIMC_S_DDR0_SCMO_ESYN_APACKET_2;
uint32 BIMC_S_DDR0_SCMO_SLV_STATUS;
uint32 BIMC_S_DDR0_SCMO_CMD_BUF_STATUS;
uint32 BIMC_S_DDR0_SCMO_RCH_STATUS;
uint32 BIMC_S_DDR0_SCMO_WCH_STATUS;
uint32 BIMC_S_DDR0_SCMO_FSP_STATUS;

uint32 BIMC_S_DDR1_SCMO_INTERRUPT_STATUS;
uint32 BIMC_S_DDR1_SCMO_ESYN_ADDR;
uint32 BIMC_S_DDR1_SCMO_ESYN_APACKET_0;
uint32 BIMC_S_DDR1_SCMO_ESYN_APACKET_1;
uint32 BIMC_S_DDR1_SCMO_ESYN_APACKET_2;
uint32 BIMC_S_DDR1_SCMO_SLV_STATUS;
uint32 BIMC_S_DDR1_SCMO_CMD_BUF_STATUS;
uint32 BIMC_S_DDR1_SCMO_RCH_STATUS;
uint32 BIMC_S_DDR1_SCMO_WCH_STATUS;
uint32 BIMC_S_DDR1_SCMO_FSP_STATUS;

/*DDR0_DPE , DDR1_DPE*/
uint32 BIMC_S_DDR0_DPE_INTERRUPT_STATUS;
uint32 BIMC_S_DDR0_DPE_DQCAL_STATUS0_RANK1;
uint32 BIMC_S_DDR0_DPE_DQCAL_STATUS1_RANK1;
uint32 BIMC_S_DDR0_DPE_DQCAL_STATUS2_RANK1;
uint32 BIMC_S_DDR0_DPE_DQCAL_STATUS0_RANK0;
uint32 BIMC_S_DDR0_DPE_DQCAL_STATUS1_RANK0;
uint32 BIMC_S_DDR0_DPE_DQCAL_STATUS2_RANK0;
uint32 BIMC_S_DDR0_DPE_DRAM_STATUS_0;
uint32 BIMC_S_DDR0_DPE_MEMC_STATUS_1;
uint32 BIMC_S_DDR0_DPE_MEMC_STATUS_2;

uint32 BIMC_S_DDR1_DPE_INTERRUPT_STATUS;
uint32 BIMC_S_DDR1_DPE_DQCAL_STATUS0_RANK1;
uint32 BIMC_S_DDR1_DPE_DQCAL_STATUS1_RANK1;
uint32 BIMC_S_DDR1_DPE_DQCAL_STATUS2_RANK1;
uint32 BIMC_S_DDR1_DPE_DQCAL_STATUS0_RANK0;
uint32 BIMC_S_DDR1_DPE_DQCAL_STATUS1_RANK0;
uint32 BIMC_S_DDR1_DPE_DQCAL_STATUS2_RANK0;
uint32 BIMC_S_DDR1_DPE_DRAM_STATUS_0;
uint32 BIMC_S_DDR1_DPE_MEMC_STATUS_1;
uint32 BIMC_S_DDR1_DPE_MEMC_STATUS_2;

/*DDR0_SHKE , DDR1_SHKE*/
uint32 BIMC_S_DDR0_SHKE_DRAM_STATUS; 
uint32 BIMC_S_DDR0_SHKE_PERIODIC_MRR_RDATA_RANK1_U; 
uint32 BIMC_S_DDR0_SHKE_PERIODIC_MRR_RDATA_RANK1_L;
uint32 BIMC_S_DDR0_SHKE_PERIODIC_MRR_RDATA_RANK0_U;
uint32 BIMC_S_DDR0_SHKE_PERIODIC_MRR_RDATA_RANK0_L;

uint32 BIMC_S_DDR1_SHKE_DRAM_STATUS; 
uint32 BIMC_S_DDR1_SHKE_PERIODIC_MRR_RDATA_RANK1_U; 
uint32 BIMC_S_DDR1_SHKE_PERIODIC_MRR_RDATA_RANK1_L;
uint32 BIMC_S_DDR1_SHKE_PERIODIC_MRR_RDATA_RANK0_U;
uint32 BIMC_S_DDR1_SHKE_PERIODIC_MRR_RDATA_RANK0_L;

/*CH0_CA0_DDR_PHY */
uint32 CH0_CA0_DDRPHY_IOCTLR_TIMER_STA;
uint32 CH0_CA0_DDRPHY_CMLDO_STATUS_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_0_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_1_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_2_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_3_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_4_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_5_STA;
uint32 CH0_CA0_DDRPHY_DCC_STATUS_6_STA;
uint32 CH0_CA0_DDRPHY_CMRX_STATUS_STA;
uint32 CH0_CA0_DDRPHY_BISC_TRAINING_STA; 
uint32 CH0_CA0_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH0_CA0_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH0_CA0_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH0_CA0_DDRPHY_CMCDCRDT2_I0_TOP_CFG; 
uint32 CH0_CA0_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH0_CA0_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH0_CA0_DDRPHY_CMLDO_TOP_CFG;
uint32 CH0_CA0_DDRPHY_TOP_CTRL_0_CFG;

/*CH0_CA1_DDR_PHY*/

uint32 CH0_CA1_DDRPHY_IOCTLR_TIMER_STA;
uint32 CH0_CA1_DDRPHY_CMLDO_STATUS_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_0_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_1_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_2_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_3_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_4_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_5_STA;
uint32 CH0_CA1_DDRPHY_DCC_STATUS_6_STA;
uint32 CH0_CA1_DDRPHY_CMRX_STATUS_STA;
uint32 CH0_CA1_DDRPHY_BISC_TRAINING_STA; 
uint32 CH0_CA1_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH0_CA1_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH0_CA1_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH0_CA1_DDRPHY_CMCDCRDT2_I0_TOP_CFG; 
uint32 CH0_CA1_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH0_CA1_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH0_CA1_DDRPHY_CMLDO_TOP_CFG;
uint32 CH0_CA1_DDRPHY_TOP_CTRL_0_CFG;

/*CH1_CA0_DDR_PHY */

uint32 CH1_CA0_DDRPHY_IOCTLR_TIMER_STA;
uint32 CH1_CA0_DDRPHY_CMLDO_STATUS_STA;
uint32 CH1_CA0_DDRPHY_DCC_STATUS_0_STA;
uint32 CH1_CA0_DDRPHY_CMRX_STATUS_STA;
uint32 CH1_CA0_DDRPHY_BISC_TRAINING_STA; 
uint32 CH1_CA0_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH1_CA0_DDRPHY_CMCDCWR_TOP_CFG; 
uint32 CH1_CA0_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH1_CA0_DDRPHY_CMCDCRDT2_I0_TOP_CFG; 
uint32 CH1_CA0_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH1_CA0_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH1_CA0_DDRPHY_CMLDO_TOP_CFG;
uint32 CH1_CA0_DDRPHY_TOP_CTRL_0_CFG;

/*CH1_CA1_DDR_PHY */

uint32 CH1_CA1_DDRPHY_IOCTLR_TIMER_STA;
uint32 CH1_CA1_DDRPHY_CMLDO_STATUS_STA;
uint32 CH1_CA1_DDRPHY_DCC_STATUS_0_STA;
uint32 CH1_CA1_DDRPHY_CMRX_STATUS_STA;
uint32 CH1_CA1_DDRPHY_BISC_TRAINING_STA; 
uint32 CH1_CA1_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH1_CA1_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH1_CA1_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH1_CA1_DDRPHY_CMCDCRDT2_I0_TOP_CFG; 
uint32 CH1_CA1_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH1_CA1_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH1_CA1_DDRPHY_CMLDO_TOP_CFG;
uint32 CH1_CA1_DDRPHY_TOP_CTRL_0_CFG;


/* DDRCC CH0/CH1 */

uint32 CH0_DDRCC_TOP_CTRL_CFG;
uint32 CH0_DDRCC_PLLCTRL_CLK_SWITCH_STATUS;
uint32 CH0_DDRCC_PLLCTRL_STATUS;
uint32 CH0_DDRCC_DLLCTRL_STATUS;
uint32 CH0_DDRCC_TXPHYCTRL_STATUS;
uint32 CH0_DDRCC_TXMCCTRL_STATUS;
uint32 CH0_DDRCC_PLL0_STATUS;
uint32 CH0_DDRCC_PLL1_STATUS;
uint32 CH0_DDRCC_TX0_STATUS;
uint32 CH0_DDRCC_TX1_STATUS;
uint32 CH0_DDRCC_TXPHY_STATUS;
uint32 CH0_DDRCC_DLL0_STATUS;
uint32 CH0_DDRCC_DLL1_STATUS;
uint32 CH0_DDRCC_DLLHIST_STATUS;

uint32 CH1_DDRCC_TOP_CTRL_CFG;
uint32 CH1_DDRCC_PLLCTRL_CLK_SWITCH_STATUS;
uint32 CH1_DDRCC_PLLCTRL_STATUS;
uint32 CH1_DDRCC_DLLCTRL_STATUS;
uint32 CH1_DDRCC_TXPHYCTRL_STATUS;
uint32 CH1_DDRCC_TXMCCTRL_STATUS;
uint32 CH1_DDRCC_PLL0_STATUS;
uint32 CH1_DDRCC_PLL1_STATUS;
uint32 CH1_DDRCC_TX0_STATUS;
uint32 CH1_DDRCC_TX1_STATUS;
uint32 CH1_DDRCC_TXPHY_STATUS;
uint32 CH1_DDRCC_DLL0_STATUS;
uint32 CH1_DDRCC_DLL1_STATUS;
uint32 CH1_DDRCC_DLLHIST_STATUS;

/* DQ0/DQ1/DQ2/DQ3 CH0/CH1 */

uint32 CH0_DQ0_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH0_DQ0_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH0_DQ0_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH0_DQ0_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH0_DQ0_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH0_DQ0_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH0_DQ0_DDRPHY_DCC_STATUS_0_STA;
uint32 CH0_DQ0_DDRPHY_CMRX_STATUS_STA;
uint32 CH0_DQ0_DDRPHY_BISC_TRAINING_STA;
uint32 CH0_DQ0_DDRPHY_CMLDO_STATUS_STA;
uint32 CH0_DQ0_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH0_DQ0_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH0_DQ0_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH0_DQ0_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH0_DQ0_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH0_DQ0_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH0_DQ0_DDRPHY_CMLDO_TOP_CFG;


uint32 CH0_DQ1_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH0_DQ1_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH0_DQ1_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH0_DQ1_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH0_DQ1_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH0_DQ1_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH0_DQ1_DDRPHY_DCC_STATUS_0_STA;
uint32 CH0_DQ1_DDRPHY_CMRX_STATUS_STA;
uint32 CH0_DQ1_DDRPHY_BISC_TRAINING_STA;
uint32 CH0_DQ1_DDRPHY_CMLDO_STATUS_STA;
uint32 CH0_DQ1_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH0_DQ1_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH0_DQ1_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH0_DQ1_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH0_DQ1_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH0_DQ1_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH0_DQ1_DDRPHY_CMLDO_TOP_CFG;

uint32 CH0_DQ2_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH0_DQ2_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH0_DQ2_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH0_DQ2_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH0_DQ2_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH0_DQ2_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH0_DQ2_DDRPHY_DCC_STATUS_0_STA;
uint32 CH0_DQ2_DDRPHY_CMRX_STATUS_STA;
uint32 CH0_DQ2_DDRPHY_BISC_TRAINING_STA;
uint32 CH0_DQ2_DDRPHY_CMLDO_STATUS_STA;
uint32 CH0_DQ2_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH0_DQ2_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH0_DQ2_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH0_DQ2_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH0_DQ2_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH0_DQ2_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH0_DQ2_DDRPHY_CMLDO_TOP_CFG;

uint32 CH0_DQ3_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH0_DQ3_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH0_DQ3_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH0_DQ3_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH0_DQ3_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH0_DQ3_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH0_DQ3_DDRPHY_DCC_STATUS_0_STA;
uint32 CH0_DQ3_DDRPHY_CMRX_STATUS_STA;
uint32 CH0_DQ3_DDRPHY_BISC_TRAINING_STA;
uint32 CH0_DQ3_DDRPHY_CMLDO_STATUS_STA;
uint32 CH0_DQ3_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH0_DQ3_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH0_DQ3_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH0_DQ3_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH0_DQ3_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH0_DQ3_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH0_DQ3_DDRPHY_CMLDO_TOP_CFG;

uint32 CH1_DQ0_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH1_DQ0_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH1_DQ0_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH1_DQ0_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH1_DQ0_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH1_DQ0_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH1_DQ0_DDRPHY_DCC_STATUS_0_STA;
uint32 CH1_DQ0_DDRPHY_CMRX_STATUS_STA;
uint32 CH1_DQ0_DDRPHY_BISC_TRAINING_STA;
uint32 CH1_DQ0_DDRPHY_CMLDO_STATUS_STA;
uint32 CH1_DQ0_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH1_DQ0_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH1_DQ0_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH1_DQ0_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH1_DQ0_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH1_DQ0_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH1_DQ0_DDRPHY_CMLDO_TOP_CFG;

uint32 CH1_DQ1_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH1_DQ1_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH1_DQ1_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH1_DQ1_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH1_DQ1_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH1_DQ1_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH1_DQ1_DDRPHY_DCC_STATUS_0_STA;
uint32 CH1_DQ1_DDRPHY_CMRX_STATUS_STA;
uint32 CH1_DQ1_DDRPHY_BISC_TRAINING_STA;
uint32 CH1_DQ1_DDRPHY_CMLDO_STATUS_STA;
uint32 CH1_DQ1_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH1_DQ1_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH1_DQ1_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH1_DQ1_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH1_DQ1_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH1_DQ1_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH1_DQ1_DDRPHY_CMLDO_TOP_CFG;

uint32 CH1_DQ2_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH1_DQ2_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH1_DQ2_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH1_DQ2_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH1_DQ2_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH1_DQ2_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH1_DQ2_DDRPHY_DCC_STATUS_0_STA;
uint32 CH1_DQ2_DDRPHY_CMRX_STATUS_STA;
uint32 CH1_DQ2_DDRPHY_BISC_TRAINING_STA;
uint32 CH1_DQ2_DDRPHY_CMLDO_STATUS_STA;
uint32 CH1_DQ2_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH1_DQ2_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH1_DQ2_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH1_DQ2_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH1_DQ2_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH1_DQ2_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH1_DQ2_DDRPHY_CMLDO_TOP_CFG;

uint32 CH1_DQ3_DDRPHY_TOP_CTRL_0_CFG;
uint32 CH1_DQ3_DDRPHY_TOP_CTRL_1_CFG;
uint32 CH1_DQ3_DDRPHY_TOP_CTRL_2_CFG;
uint32 CH1_DQ3_DDRPHY_TOP_CTRL_3_CFG;
uint32 CH1_DQ3_DDRPHY_TOP_CTRL_4_CFG;
uint32 CH1_DQ3_DDRPHY_IOCTLR_CTRL_CFG;
uint32 CH1_DQ3_DDRPHY_DCC_STATUS_0_STA;
uint32 CH1_DQ3_DDRPHY_CMRX_STATUS_STA;
uint32 CH1_DQ3_DDRPHY_BISC_TRAINING_STA;
uint32 CH1_DQ3_DDRPHY_CMLDO_STATUS_STA;
uint32 CH1_DQ3_DDRPHY_CMCDCWRLVL_TOP_CFG;
uint32 CH1_DQ3_DDRPHY_CMCDCWR_TOP_CFG;
uint32 CH1_DQ3_DDRPHY_CMCDCRD_TOP_CFG;
uint32 CH1_DQ3_DDRPHY_CMCDCRDT2_I0_TOP_CFG;
uint32 CH1_DQ3_DDRPHY_CMCDCRCW_TOP_CFG;
uint32 CH1_DQ3_DDRPHY_CMCDCMSTR_TOP_CFG;
uint32 CH1_DQ3_DDRPHY_CMLDO_TOP_CFG;

#endif

}ddr_status_reg;





#endif /* __DDR_STATUSREG_H__ */