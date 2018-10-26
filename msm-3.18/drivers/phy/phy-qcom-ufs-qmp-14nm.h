/*
 * Copyright (c) 2013-2015, Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef UFS_QCOM_PHY_QMP_14NM_H_
#define UFS_QCOM_PHY_QMP_14NM_H_

#include "phy-qcom-ufs-i.h"

/* QCOM UFS PHY control registers */
#define COM_OFF(x)	(0x000 + x)
#define PHY_OFF(x)	(0xC00 + x)
#define TX_OFF(n, x)	(0x400 + (0x400 * n) + x)
#define RX_OFF(n, x)	(0x600 + (0x400 * n) + x)

/* UFS PHY QSERDES COM registers */
#define QSERDES_COM_BG_TIMER			COM_OFF(0x0C)
#define QSERDES_COM_BIAS_EN_CLKBUFLR_EN		COM_OFF(0x34)
#define QSERDES_COM_SYS_CLK_CTRL		COM_OFF(0x3C)
#define QSERDES_COM_PLL_IVCO			COM_OFF(0x48)
#define QSERDES_COM_LOCK_CMP1_MODE0		COM_OFF(0x4C)
#define QSERDES_COM_LOCK_CMP2_MODE0		COM_OFF(0x50)
#define QSERDES_COM_LOCK_CMP3_MODE0		COM_OFF(0x54)
#define QSERDES_COM_LOCK_CMP1_MODE1		COM_OFF(0x58)
#define QSERDES_COM_LOCK_CMP2_MODE1		COM_OFF(0x5C)
#define QSERDES_COM_LOCK_CMP3_MODE1		COM_OFF(0x60)
#define QSERDES_COM_BG_TRIM			COM_OFF(0x70)
#define QSERDES_COM_CP_CTRL_MODE0		COM_OFF(0x78)
#define QSERDES_COM_CP_CTRL_MODE1		COM_OFF(0x7C)
#define QSERDES_COM_PLL_RCTRL_MODE0		COM_OFF(0x84)
#define QSERDES_COM_PLL_RCTRL_MODE1		COM_OFF(0x88)
#define QSERDES_COM_PLL_CCTRL_MODE0		COM_OFF(0x90)
#define QSERDES_COM_PLL_CCTRL_MODE1		COM_OFF(0x94)
#define QSERDES_COM_SYSCLK_EN_SEL		COM_OFF(0xAC)
#define QSERDES_COM_RESETSM_CNTRL		COM_OFF(0xB4)
#define QSERDES_COM_RESCODE_DIV_NUM		COM_OFF(0xC4)
#define QSERDES_COM_LOCK_CMP_EN			COM_OFF(0xC8)
#define QSERDES_COM_LOCK_CMP_CFG		COM_OFF(0xCC)
#define QSERDES_COM_DEC_START_MODE0		COM_OFF(0xD0)
#define QSERDES_COM_DEC_START_MODE1		COM_OFF(0xD4)
#define QSERDES_COM_DIV_FRAC_START1_MODE0	COM_OFF(0xDC)
#define QSERDES_COM_DIV_FRAC_START2_MODE0	COM_OFF(0xE0)
#define QSERDES_COM_DIV_FRAC_START3_MODE0	COM_OFF(0xE4)
#define QSERDES_COM_DIV_FRAC_START1_MODE1	COM_OFF(0xE8)
#define QSERDES_COM_DIV_FRAC_START2_MODE1	COM_OFF(0xEC)
#define QSERDES_COM_DIV_FRAC_START3_MODE1	COM_OFF(0xF0)
#define QSERDES_COM_INTEGLOOP_GAIN0_MODE0	COM_OFF(0x108)
#define QSERDES_COM_INTEGLOOP_GAIN1_MODE0	COM_OFF(0x10C)
#define QSERDES_COM_INTEGLOOP_GAIN0_MODE1	COM_OFF(0x110)
#define QSERDES_COM_INTEGLOOP_GAIN1_MODE1	COM_OFF(0x114)
#define QSERDES_COM_VCO_TUNE_CTRL		COM_OFF(0x124)
#define QSERDES_COM_VCO_TUNE_MAP		COM_OFF(0x128)
#define QSERDES_COM_VCO_TUNE1_MODE0		COM_OFF(0x12C)
#define QSERDES_COM_VCO_TUNE2_MODE0		COM_OFF(0x130)
#define QSERDES_COM_VCO_TUNE1_MODE1		COM_OFF(0x134)
#define QSERDES_COM_VCO_TUNE2_MODE1		COM_OFF(0x138)
#define QSERDES_COM_VCO_TUNE_INITVAL1		COM_OFF(0x13C)
#define QSERDES_COM_VCO_TUNE_INITVAL2		COM_OFF(0x140)
#define QSERDES_COM_VCO_TUNE_TIMER1		COM_OFF(0x144)
#define QSERDES_COM_VCO_TUNE_TIMER2		COM_OFF(0x148)
#define QSERDES_COM_CLK_SELECT			COM_OFF(0x174)
#define QSERDES_COM_HSCLK_SEL			COM_OFF(0x178)
#define QSERDES_COM_CORECLK_DIV			COM_OFF(0x184)
#define QSERDES_COM_SW_RESET			COM_OFF(0x188)
#define QSERDES_COM_CORE_CLK_EN			COM_OFF(0x18C)
#define QSERDES_COM_CMN_CONFIG			COM_OFF(0x194)
#define QSERDES_COM_SVS_MODE_CLK_SEL		COM_OFF(0x19C)
#define QSERDES_COM_DEBUG_BUS0			COM_OFF(0x1A0)
#define QSERDES_COM_DEBUG_BUS1			COM_OFF(0x1A4)
#define QSERDES_COM_DEBUG_BUS2			COM_OFF(0x1A8)
#define QSERDES_COM_DEBUG_BUS3			COM_OFF(0x1AC)
#define QSERDES_COM_DEBUG_BUS_SEL		COM_OFF(0x1B0)
#define QSERDES_COM_CMN_MISC2			COM_OFF(0x1B8)
#define QSERDES_COM_CORECLK_DIV_MODE1		COM_OFF(0x1BC)

/* UFS PHY registers */
#define UFS_PHY_PHY_START			PHY_OFF(0x00)
#define UFS_PHY_POWER_DOWN_CONTROL		PHY_OFF(0x04)
#define UFS_PHY_TX_LARGE_AMP_DRV_LVL		PHY_OFF(0x34)
#define UFS_PHY_TX_SMALL_AMP_DRV_LVL		PHY_OFF(0x3C)
#define UFS_PHY_RX_MIN_STALL_NOCONFIG_TIME_CAP	PHY_OFF(0xCC)
#define UFS_PHY_LINECFG_DISABLE			PHY_OFF(0x138)
#define UFS_PHY_RX_SYM_RESYNC_CTRL		PHY_OFF(0x13C)
#define UFS_PHY_RX_SIGDET_CTRL2			PHY_OFF(0x148)
#define UFS_PHY_RX_PWM_GEAR_BAND		PHY_OFF(0x154)
#define UFS_PHY_PCS_READY_STATUS		PHY_OFF(0x168)

/* UFS PHY TX registers */
#define QSERDES_TX_HIGHZ_TRANSCEIVER_BIAS_DRVR_EN	TX_OFF(0, 0x68)
#define QSERDES_TX_LANE_MODE				TX_OFF(0, 0x94)

/* UFS PHY RX registers */
#define QSERDES_RX_UCDR_SVS_SO_GAIN_HALF	RX_OFF(0, 0x30)
#define QSERDES_RX_UCDR_SVS_SO_GAIN_QUARTER	RX_OFF(0, 0x34)
#define QSERDES_RX_UCDR_SVS_SO_GAIN_EIGHTH	RX_OFF(0, 0x38)
#define QSERDES_RX_UCDR_SVS_SO_GAIN		RX_OFF(0, 0x3C)
#define QSERDES_RX_UCDR_FASTLOCK_FO_GAIN	RX_OFF(0, 0x40)
#define QSERDES_RX_UCDR_SO_SATURATION_ENABLE	RX_OFF(0, 0x48)
#define QSERDES_RX_RX_TERM_BW			RX_OFF(0, 0x90)
#define QSERDES_RX_RX_EQ_GAIN1_LSB		RX_OFF(0, 0xC4)
#define QSERDES_RX_RX_EQ_GAIN1_MSB		RX_OFF(0, 0xC8)
#define QSERDES_RX_RX_EQ_GAIN2_LSB		RX_OFF(0, 0xCC)
#define QSERDES_RX_RX_EQ_GAIN2_MSB		RX_OFF(0, 0xD0)
#define QSERDES_RX_RX_EQU_ADAPTOR_CNTRL2	RX_OFF(0, 0xD8)
#define QSERDES_RX_SIGDET_CNTRL			RX_OFF(0, 0x114)
#define QSERDES_RX_SIGDET_LVL			RX_OFF(0, 0x118)
#define QSERDES_RX_SIGDET_DEGLITCH_CNTRL	RX_OFF(0, 0x11C)
#define QSERDES_RX_RX_INTERFACE_MODE		RX_OFF(0, 0x12C)

#define UFS_PHY_RX_LINECFG_DISABLE_BIT		BIT(1)

/*
 * This structure represents the 14nm specific phy.
 * common_cfg MUST remain the first field in this structure
 * in case extra fields are added. This way, when calling
 * get_ufs_qcom_phy() of generic phy, we can extract the
 * common phy structure (struct ufs_qcom_phy) out of it
 * regardless of the relevant specific phy.
 */
struct ufs_qcom_phy_qmp_14nm {
	struct ufs_qcom_phy common_cfg;
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_A_2_0_0[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_CONFIG, 0x0e),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0x17),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CLK_SELECT, 0x30),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYS_CLK_CTRL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIAS_EN_CLKBUFLR_EN, 0x08),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TIMER, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_SEL, 0x05),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORECLK_DIV, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORECLK_DIV_MODE1, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_EN, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_CTRL, 0x1C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESETSM_CNTRL, 0x20),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORE_CLK_EN, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_CFG, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_TIMER1, 0xff),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_TIMER2, 0x3f),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SVS_MODE_CLK_SEL, 0x05),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE0, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE0, 0x0b),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE0, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE0, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE0, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE0, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE0, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE0, 0xff),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE0, 0x0c),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP3_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE1, 0x0b),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE1, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE1, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE1, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE1, 0x32),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE1, 0x0f),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP3_MODE1, 0x00),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_HIGHZ_TRANSCEIVER_BIAS_DRVR_EN, 0x45),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_LANE_MODE, 0x06),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_INTERFACE_MODE, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_FASTLOCK_FO_GAIN, 0x0B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_TERM_BW, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN1_LSB, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN1_MSB, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN2_LSB, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN2_MSB, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQU_ADAPTOR_CNTRL2, 0x0D),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IVCO, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TRIM, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESCODE_DIV_NUM, 0x15),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_MISC2, 0x1F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN_HALF, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN_QUARTER, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SO_SATURATION_ENABLE, 0x4B),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL2, 0x6c),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_DRV_LVL, 0x12),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_DRV_LVL, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_MIN_STALL_NOCONFIG_TIME_CAP, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SYM_RESYNC_CTRL, 0x03),

	/*
	 * UFS_PHY_RX_PWM_GEAR_BAND configuration is changed after the power up
	 * sequence so make sure that this register gets set to power on reset
	 * value. This is required in case power up sequence is initiated after
	 * this register value got changed to value other than power on reset
	 * value.
	 */
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_PWM_GEAR_BAND, 0x55),
};

/*
 * For 2.1.0 revision, SVS mode configuration can be part of PHY power
 * up sequence itself.
 */
static struct ufs_qcom_phy_calibration phy_cal_table_rate_A_2_1_0[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_CONFIG, 0x0e),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CLK_SELECT, 0x30),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYS_CLK_CTRL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIAS_EN_CLKBUFLR_EN, 0x08),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TIMER, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_SEL, 0x05),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORECLK_DIV, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORECLK_DIV_MODE1, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_EN, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_CTRL, 0x10),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESETSM_CNTRL, 0x20),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORE_CLK_EN, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_CFG, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_TIMER1, 0xff),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_TIMER2, 0x3f),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SVS_MODE_CLK_SEL, 0x05),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE0, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE0, 0x0b),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE0, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE0, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE0, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE0, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE0, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE0, 0xff),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE0, 0x0c),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP3_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE1, 0x0b),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE1, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE1, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE1, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE1, 0xd6),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE1, 0x32),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE1, 0x0f),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP3_MODE1, 0x00),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_HIGHZ_TRANSCEIVER_BIAS_DRVR_EN, 0x45),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_LANE_MODE, 0x06),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_INTERFACE_MODE, 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_FASTLOCK_FO_GAIN, 0x0B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_TERM_BW, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN1_LSB, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN1_MSB, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN2_LSB, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN2_MSB, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQU_ADAPTOR_CNTRL2, 0x0D),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IVCO, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TRIM, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_PWM_GEAR_BAND, 0x15),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESCODE_DIV_NUM, 0x15),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_MISC2, 0x1F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN_HALF, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN_QUARTER, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SO_SATURATION_ENABLE, 0x4B),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL2, 0x6c),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_DRV_LVL, 0x12),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_DRV_LVL, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_MIN_STALL_NOCONFIG_TIME_CAP, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SYM_RESYNC_CTRL, 0x03),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_A_2_2_0[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_CONFIG, 0x0e),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0x14),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CLK_SELECT, 0x30),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYS_CLK_CTRL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIAS_EN_CLKBUFLR_EN, 0x08),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TIMER, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_SEL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORECLK_DIV, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORECLK_DIV_MODE1, 0x0a),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_EN, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_CTRL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESETSM_CNTRL, 0x20),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORE_CLK_EN, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_CFG, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_TIMER1, 0xff),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_TIMER2, 0x3f),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SVS_MODE_CLK_SEL, 0x05),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE0, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE0, 0x0b),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE0, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE0, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE0, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE0, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE0, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE0, 0xff),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE0, 0x0c),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP3_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DIV_FRAC_START3_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE1, 0x0b),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE1, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE1, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE1, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE1, 0xd6),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE1, 0x32),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE1, 0x0f),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP3_MODE1, 0x00),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_HIGHZ_TRANSCEIVER_BIAS_DRVR_EN, 0x45),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX_LANE_MODE, 0x06),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_INTERFACE_MODE, 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_FASTLOCK_FO_GAIN, 0x0B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_TERM_BW, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN1_LSB, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN1_MSB, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN2_LSB, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQ_GAIN2_MSB, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_EQU_ADAPTOR_CNTRL2, 0x0D),

	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IVCO, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TRIM, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_PWM_GEAR_BAND, 0x15),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESCODE_DIV_NUM, 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_MISC2, 0x63),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN_HALF, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN_QUARTER, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SVS_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_UCDR_SO_SATURATION_ENABLE, 0x4B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_INITVAL1, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_INITVAL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL2, 0x6c),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_DRV_LVL, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_DRV_LVL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_MIN_STALL_NOCONFIG_TIME_CAP, 0x28),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SYM_RESYNC_CTRL, 0x03),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_B[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x54),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_B_2_2_0[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x44),
};

/*
 * For 2.0.0 revision, apply this SVS mode configuration after PHY power
 * up sequence is completed.
 */
static struct ufs_qcom_phy_calibration phy_svs_mode_config_2_0_0[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX_RX_INTERFACE_MODE, 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_PWM_GEAR_BAND, 0x15),
};

#endif
