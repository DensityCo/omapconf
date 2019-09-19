/*
 *
 * @Component			OMAPCONF
 * @Filename			ctrlmod_core_pad54xx-defs.h
 * @Description			OMAP5 CONTROL MODULE Registers Definitions
 * @Author			Patrick Titiano (p-titiano@ti.com)
 * @Date			2011
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __CTRLMOD_CORE_PAD54XX_DEFS_H__
#define __CTRLMOD_CORE_PAD54XX_DEFS_H__

#include <reg.h>
#include <stdio.h>

#define OMAP5430_CONTROL_CORE_PAD_REVISION					0x4a002800
extern reg omap5430_control_core_pad_revision;
#define OMAP5430_CONTROL_CORE_PAD_HWINFO					0x4a002804
extern reg omap5430_control_core_pad_hwinfo;
#define OMAP5430_CONTROL_CORE_PAD_SYSCONFIG					0x4a002810
extern reg omap5430_control_core_pad_sysconfig;
#define OMAP5430_CONTROL_CORE_PAD0_EMMC_CLK_PAD1_EMMC_CMD			0x4a002840
extern reg omap5430_control_core_pad0_emmc_clk_pad1_emmc_cmd;
#define OMAP5430_CONTROL_CORE_PAD0_EMMC_DATA0_PAD1_EMMC_DATA1			0x4a002844
extern reg omap5430_control_core_pad0_emmc_data0_pad1_emmc_data1;
#define OMAP5430_CONTROL_CORE_PAD0_EMMC_DATA2_PAD1_EMMC_DATA3			0x4a002848
extern reg omap5430_control_core_pad0_emmc_data2_pad1_emmc_data3;
#define OMAP5430_CONTROL_CORE_PAD0_EMMC_DATA4_PAD1_EMMC_DATA5			0x4a00284c
extern reg omap5430_control_core_pad0_emmc_data4_pad1_emmc_data5;
#define OMAP5430_CONTROL_CORE_PAD0_EMMC_DATA6_PAD1_EMMC_DATA7			0x4a002850
extern reg omap5430_control_core_pad0_emmc_data6_pad1_emmc_data7;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_CLKOUT0_PAD1_C2C_CLKOUT1			0x4a002854
extern reg omap5430_control_core_pad0_c2c_clkout0_pad1_c2c_clkout1;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_CLKIN0_PAD1_C2C_CLKIN1			0x4a002858
extern reg omap5430_control_core_pad0_c2c_clkin0_pad1_c2c_clkin1;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAIN0_PAD1_C2C_DATAIN1			0x4a00285c
extern reg omap5430_control_core_pad0_c2c_datain0_pad1_c2c_datain1;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAIN2_PAD1_C2C_DATAIN3			0x4a002860
extern reg omap5430_control_core_pad0_c2c_datain2_pad1_c2c_datain3;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAIN4_PAD1_C2C_DATAIN5			0x4a002864
extern reg omap5430_control_core_pad0_c2c_datain4_pad1_c2c_datain5;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAIN6_PAD1_C2C_DATAIN7			0x4a002868
extern reg omap5430_control_core_pad0_c2c_datain6_pad1_c2c_datain7;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAOUT0_PAD1_C2C_DATAOUT1		0x4a00286c
extern reg omap5430_control_core_pad0_c2c_dataout0_pad1_c2c_dataout1;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAOUT2_PAD1_C2C_DATAOUT3		0x4a002870
extern reg omap5430_control_core_pad0_c2c_dataout2_pad1_c2c_dataout3;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAOUT4_PAD1_C2C_DATAOUT5		0x4a002874
extern reg omap5430_control_core_pad0_c2c_dataout4_pad1_c2c_dataout5;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATAOUT6_PAD1_C2C_DATAOUT7		0x4a002878
extern reg omap5430_control_core_pad0_c2c_dataout6_pad1_c2c_dataout7;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATA8_PAD1_C2C_DATA9			0x4a00287c
extern reg omap5430_control_core_pad0_c2c_data8_pad1_c2c_data9;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATA10_PAD1_C2C_DATA11			0x4a002880
extern reg omap5430_control_core_pad0_c2c_data10_pad1_c2c_data11;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATA12_PAD1_C2C_DATA13			0x4a002884
extern reg omap5430_control_core_pad0_c2c_data12_pad1_c2c_data13;
#define OMAP5430_CONTROL_CORE_PAD0_C2C_DATA14_PAD1_C2C_DATA15			0x4a002888
extern reg omap5430_control_core_pad0_c2c_data14_pad1_c2c_data15;
#define OMAP5430_CONTROL_CORE_PAD0_LLIA_WAKEREQOUT_PAD1_LLIB_WAKEREQOUT		0x4a00288c
extern reg omap5430_control_core_pad0_llia_wakereqout_pad1_llib_wakereqout;
#define OMAP5430_CONTROL_CORE_PAD0_HSI1_ACREADY_PAD1_HSI1_CAREADY		0x4a002890
extern reg omap5430_control_core_pad0_hsi1_acready_pad1_hsi1_caready;
#define OMAP5430_CONTROL_CORE_PAD0_HSI1_ACWAKE_PAD1_HSI1_CAWAKE			0x4a002894
extern reg omap5430_control_core_pad0_hsi1_acwake_pad1_hsi1_cawake;
#define OMAP5430_CONTROL_CORE_PAD0_HSI1_ACFLAG_PAD1_HSI1_ACDATA			0x4a002898
extern reg omap5430_control_core_pad0_hsi1_acflag_pad1_hsi1_acdata;
#define OMAP5430_CONTROL_CORE_PAD0_HSI1_CAFLAG_PAD1_HSI1_CADATA			0x4a00289c
extern reg omap5430_control_core_pad0_hsi1_caflag_pad1_hsi1_cadata;
#define OMAP5430_CONTROL_CORE_PAD0_UART1_TX_PAD1_UART1_CTS			0x4a0028a0
extern reg omap5430_control_core_pad0_uart1_tx_pad1_uart1_cts;
#define OMAP5430_CONTROL_CORE_PAD0_UART1_RX_PAD1_UART1_RTS			0x4a0028a4
extern reg omap5430_control_core_pad0_uart1_rx_pad1_uart1_rts;
#define OMAP5430_CONTROL_CORE_PAD0_HSI2_CAREADY_PAD1_HSI2_ACREADY		0x4a0028a8
extern reg omap5430_control_core_pad0_hsi2_caready_pad1_hsi2_acready;
#define OMAP5430_CONTROL_CORE_PAD0_HSI2_CAWAKE_PAD1_HSI2_ACWAKE			0x4a0028ac
extern reg omap5430_control_core_pad0_hsi2_cawake_pad1_hsi2_acwake;
#define OMAP5430_CONTROL_CORE_PAD0_HSI2_CAFLAG_PAD1_HSI2_CADATA			0x4a0028b0
extern reg omap5430_control_core_pad0_hsi2_caflag_pad1_hsi2_cadata;
#define OMAP5430_CONTROL_CORE_PAD0_HSI2_ACFLAG_PAD1_HSI2_ACDATA			0x4a0028b4
extern reg omap5430_control_core_pad0_hsi2_acflag_pad1_hsi2_acdata;
#define OMAP5430_CONTROL_CORE_PAD0_UART2_RTS_PAD1_UART2_CTS			0x4a0028b8
extern reg omap5430_control_core_pad0_uart2_rts_pad1_uart2_cts;
#define OMAP5430_CONTROL_CORE_PAD0_UART2_RX_PAD1_UART2_TX			0x4a0028bc
extern reg omap5430_control_core_pad0_uart2_rx_pad1_uart2_tx;
#define OMAP5430_CONTROL_CORE_PAD0_USBB1_HSIC_STROBE_PAD1_USBB1_HSIC_DATA	0x4a0028c0
extern reg omap5430_control_core_pad0_usbb1_hsic_strobe_pad1_usbb1_hsic_data;
#define OMAP5430_CONTROL_CORE_PAD0_USBB2_HSIC_STROBE_PAD1_USBB2_HSIC_DATA	0x4a0028c4
extern reg omap5430_control_core_pad0_usbb2_hsic_strobe_pad1_usbb2_hsic_data;
#define OMAP5430_CONTROL_CORE_PAD0_TIMER10_PWM_EVT_PAD1_DSIPORTA_TE0		0x4a0028c8
extern reg omap5430_control_core_pad0_timer10_pwm_evt_pad1_dsiporta_te0;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTA_LANE0X_PAD1_DSIPORTA_LANE0Y		0x4a0028cc
extern reg omap5430_control_core_pad0_dsiporta_lane0x_pad1_dsiporta_lane0y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTA_LANE1X_PAD1_DSIPORTA_LANE1Y		0x4a0028d0
extern reg omap5430_control_core_pad0_dsiporta_lane1x_pad1_dsiporta_lane1y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTA_LANE2X_PAD1_DSIPORTA_LANE2Y		0x4a0028d4
extern reg omap5430_control_core_pad0_dsiporta_lane2x_pad1_dsiporta_lane2y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTA_LANE3X_PAD1_DSIPORTA_LANE3Y		0x4a0028d8
extern reg omap5430_control_core_pad0_dsiporta_lane3x_pad1_dsiporta_lane3y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTA_LANE4X_PAD1_DSIPORTA_LANE4Y		0x4a0028dc
extern reg omap5430_control_core_pad0_dsiporta_lane4x_pad1_dsiporta_lane4y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTC_LANE0X_PAD1_DSIPORTC_LANE0Y		0x4a0028e0
extern reg omap5430_control_core_pad0_dsiportc_lane0x_pad1_dsiportc_lane0y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTC_LANE1X_PAD1_DSIPORTC_LANE1Y		0x4a0028e4
extern reg omap5430_control_core_pad0_dsiportc_lane1x_pad1_dsiportc_lane1y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTC_LANE2X_PAD1_DSIPORTC_LANE2Y		0x4a0028e8
extern reg omap5430_control_core_pad0_dsiportc_lane2x_pad1_dsiportc_lane2y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTC_LANE3X_PAD1_DSIPORTC_LANE3Y		0x4a0028ec
extern reg omap5430_control_core_pad0_dsiportc_lane3x_pad1_dsiportc_lane3y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTC_LANE4X_PAD1_DSIPORTC_LANE4Y		0x4a0028f0
extern reg omap5430_control_core_pad0_dsiportc_lane4x_pad1_dsiportc_lane4y;
#define OMAP5430_CONTROL_CORE_PAD0_DSIPORTC_TE0_PAD1_TIMER9_PWM_EVT		0x4a0028f4
extern reg omap5430_control_core_pad0_dsiportc_te0_pad1_timer9_pwm_evt;
#define OMAP5430_CONTROL_CORE_PAD0_I2C4_SCL_PAD1_I2C4_SDA			0x4a0028f8
extern reg omap5430_control_core_pad0_i2c4_scl_pad1_i2c4_sda;
#define OMAP5430_CONTROL_CORE_PAD0_MCSPI2_CLK_PAD1_MCSPI2_SIMO			0x4a0028fc
extern reg omap5430_control_core_pad0_mcspi2_clk_pad1_mcspi2_simo;
#define OMAP5430_CONTROL_CORE_PAD0_MCSPI2_SOMI_PAD1_MCSPI2_CS0			0x4a002900
extern reg omap5430_control_core_pad0_mcspi2_somi_pad1_mcspi2_cs0;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA15_PAD1_RFBI_DATA14			0x4a002904
extern reg omap5430_control_core_pad0_rfbi_data15_pad1_rfbi_data14;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA13_PAD1_RFBI_DATA12			0x4a002908
extern reg omap5430_control_core_pad0_rfbi_data13_pad1_rfbi_data12;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA11_PAD1_RFBI_DATA10			0x4a00290c
extern reg omap5430_control_core_pad0_rfbi_data11_pad1_rfbi_data10;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA9_PAD1_RFBI_DATA8			0x4a002910
extern reg omap5430_control_core_pad0_rfbi_data9_pad1_rfbi_data8;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA7_PAD1_RFBI_DATA6			0x4a002914
extern reg omap5430_control_core_pad0_rfbi_data7_pad1_rfbi_data6;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA5_PAD1_RFBI_DATA4			0x4a002918
extern reg omap5430_control_core_pad0_rfbi_data5_pad1_rfbi_data4;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA3_PAD1_RFBI_DATA2			0x4a00291c
extern reg omap5430_control_core_pad0_rfbi_data3_pad1_rfbi_data2;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_DATA1_PAD1_RFBI_DATA0			0x4a002920
extern reg omap5430_control_core_pad0_rfbi_data1_pad1_rfbi_data0;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_WE_PAD1_RFBI_CS0			0x4a002924
extern reg omap5430_control_core_pad0_rfbi_we_pad1_rfbi_cs0;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_A0_PAD1_RFBI_RE				0x4a002928
extern reg omap5430_control_core_pad0_rfbi_a0_pad1_rfbi_re;
#define OMAP5430_CONTROL_CORE_PAD0_RFBI_HSYNC0_PAD1_RFBI_TE_VSYNC0		0x4a00292c
extern reg omap5430_control_core_pad0_rfbi_hsync0_pad1_rfbi_te_vsync0;
#define OMAP5430_CONTROL_CORE_PAD0_GPIO6_182_PAD1_GPIO6_183			0x4a002930
extern reg omap5430_control_core_pad0_gpio6_182_pad1_gpio6_183;
#define OMAP5430_CONTROL_CORE_PAD0_GPIO6_184_PAD1_GPIO6_185			0x4a002934
extern reg omap5430_control_core_pad0_gpio6_184_pad1_gpio6_185;
#define OMAP5430_CONTROL_CORE_PAD0_GPIO6_186_PAD1_GPIO6_187			0x4a002938
extern reg omap5430_control_core_pad0_gpio6_186_pad1_gpio6_187;
#define OMAP5430_CONTROL_CORE_PAD0_HDMI_CEC_PAD1_HDMI_HPD			0x4a00293c
extern reg omap5430_control_core_pad0_hdmi_cec_pad1_hdmi_hpd;
#define OMAP5430_CONTROL_CORE_PAD0_HDMI_DDC_SCL_PAD1_HDMI_DDC_SDA		0x4a002940
extern reg omap5430_control_core_pad0_hdmi_ddc_scl_pad1_hdmi_ddc_sda;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTC_LANE0X_PAD1_CSIPORTC_LANE0Y		0x4a002944
extern reg omap5430_control_core_pad0_csiportc_lane0x_pad1_csiportc_lane0y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTC_LANE1X_PAD1_CSIPORTC_LANE1Y		0x4a002948
extern reg omap5430_control_core_pad0_csiportc_lane1x_pad1_csiportc_lane1y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTB_LANE0X_PAD1_CSIPORTB_LANE0Y		0x4a00294c
extern reg omap5430_control_core_pad0_csiportb_lane0x_pad1_csiportb_lane0y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTB_LANE1X_PAD1_CSIPORTB_LANE1Y		0x4a002950
extern reg omap5430_control_core_pad0_csiportb_lane1x_pad1_csiportb_lane1y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTB_LANE2X_PAD1_CSIPORTB_LANE2Y		0x4a002954
extern reg omap5430_control_core_pad0_csiportb_lane2x_pad1_csiportb_lane2y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTA_LANE0X_PAD1_CSIPORTA_LANE0Y		0x4a002958
extern reg omap5430_control_core_pad0_csiporta_lane0x_pad1_csiporta_lane0y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTA_LANE1X_PAD1_CSIPORTA_LANE1Y		0x4a00295c
extern reg omap5430_control_core_pad0_csiporta_lane1x_pad1_csiporta_lane1y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTA_LANE2X_PAD1_CSIPORTA_LANE2Y		0x4a002960
extern reg omap5430_control_core_pad0_csiporta_lane2x_pad1_csiporta_lane2y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTA_LANE3X_PAD1_CSIPORTA_LANE3Y		0x4a002964
extern reg omap5430_control_core_pad0_csiporta_lane3x_pad1_csiporta_lane3y;
#define OMAP5430_CONTROL_CORE_PAD0_CSIPORTA_LANE4X_PAD1_CSIPORTA_LANE4Y		0x4a002968
extern reg omap5430_control_core_pad0_csiporta_lane4x_pad1_csiporta_lane4y;
#define OMAP5430_CONTROL_CORE_PAD0_CAM_SHUTTER_PAD1_CAM_STROBE			0x4a00296c
extern reg omap5430_control_core_pad0_cam_shutter_pad1_cam_strobe;
#define OMAP5430_CONTROL_CORE_PAD0_CAM_GLOBALRESET_PAD1_TIMER11_PWM_EVT		0x4a002970
extern reg omap5430_control_core_pad0_cam_globalreset_pad1_timer11_pwm_evt;
#define OMAP5430_CONTROL_CORE_PAD0_TIMER5_PWM_EVT_PAD1_TIMER6_PWM_EVT		0x4a002974
extern reg omap5430_control_core_pad0_timer5_pwm_evt_pad1_timer6_pwm_evt;
#define OMAP5430_CONTROL_CORE_PAD0_TIMER8_PWM_EVT_PAD1_I2C3_SCL			0x4a002978
extern reg omap5430_control_core_pad0_timer8_pwm_evt_pad1_i2c3_scl;
#define OMAP5430_CONTROL_CORE_PAD0_I2C3_SDA_PAD1_GPIO8_233			0x4a00297c
extern reg omap5430_control_core_pad0_i2c3_sda_pad1_gpio8_233;
#define OMAP5430_CONTROL_CORE_PAD0_GPIO8_234_PAD1_ABE_CLKS			0x4a002980
extern reg omap5430_control_core_pad0_gpio8_234_pad1_abe_clks;
#define OMAP5430_CONTROL_CORE_PAD0_ABEDMIC_DIN1_PAD1_ABEDMIC_DIN2		0x4a002984
extern reg omap5430_control_core_pad0_abedmic_din1_pad1_abedmic_din2;
#define OMAP5430_CONTROL_CORE_PAD0_ABEDMIC_DIN3_PAD1_ABEDMIC_CLK1		0x4a002988
extern reg omap5430_control_core_pad0_abedmic_din3_pad1_abedmic_clk1;
#define OMAP5430_CONTROL_CORE_PAD0_ABEDMIC_CLK2_PAD1_ABEDMIC_CLK3		0x4a00298c
extern reg omap5430_control_core_pad0_abedmic_clk2_pad1_abedmic_clk3;
#define OMAP5430_CONTROL_CORE_PAD0_ABESLIMBUS1_CLOCK_PAD1_ABESLIMBUS1_DATA	0x4a002990
extern reg omap5430_control_core_pad0_abeslimbus1_clock_pad1_abeslimbus1_data;
#define OMAP5430_CONTROL_CORE_PAD0_ABEMCBSP2_DR_PAD1_ABEMCBSP2_DX		0x4a002994
extern reg omap5430_control_core_pad0_abemcbsp2_dr_pad1_abemcbsp2_dx;
#define OMAP5430_CONTROL_CORE_PAD0_ABEMCBSP2_FSX_PAD1_ABEMCBSP2_CLKX		0x4a002998
extern reg omap5430_control_core_pad0_abemcbsp2_fsx_pad1_abemcbsp2_clkx;
#define OMAP5430_CONTROL_CORE_PAD0_ABEMCPDM_UL_DATA_PAD1_ABEMCPDM_DL_DATA	0x4a00299c
extern reg omap5430_control_core_pad0_abemcpdm_ul_data_pad1_abemcpdm_dl_data;
#define OMAP5430_CONTROL_CORE_PAD0_ABEMCPDM_FRAME_PAD1_ABEMCPDM_LB_CLK		0x4a0029a0
extern reg omap5430_control_core_pad0_abemcpdm_frame_pad1_abemcpdm_lb_clk;
#define OMAP5430_CONTROL_CORE_PAD0_WLSDIO_CLK_PAD1_WLSDIO_CMD			0x4a0029a4
extern reg omap5430_control_core_pad0_wlsdio_clk_pad1_wlsdio_cmd;
#define OMAP5430_CONTROL_CORE_PAD0_WLSDIO_DATA0_PAD1_WLSDIO_DATA1		0x4a0029a8
extern reg omap5430_control_core_pad0_wlsdio_data0_pad1_wlsdio_data1;
#define OMAP5430_CONTROL_CORE_PAD0_WLSDIO_DATA2_PAD1_WLSDIO_DATA3		0x4a0029ac
extern reg omap5430_control_core_pad0_wlsdio_data2_pad1_wlsdio_data3;
#define OMAP5430_CONTROL_CORE_PAD0_UART5_RX_PAD1_UART5_TX			0x4a0029b0
extern reg omap5430_control_core_pad0_uart5_rx_pad1_uart5_tx;
#define OMAP5430_CONTROL_CORE_PAD0_UART5_CTS_PAD1_UART5_RTS			0x4a0029b4
extern reg omap5430_control_core_pad0_uart5_cts_pad1_uart5_rts;
#define OMAP5430_CONTROL_CORE_PAD0_I2C2_SCL_PAD1_I2C2_SDA			0x4a0029b8
extern reg omap5430_control_core_pad0_i2c2_scl_pad1_i2c2_sda;
#define OMAP5430_CONTROL_CORE_PAD0_MCSPI1_CLK_PAD1_MCSPI1_SOMI			0x4a0029bc
extern reg omap5430_control_core_pad0_mcspi1_clk_pad1_mcspi1_somi;
#define OMAP5430_CONTROL_CORE_PAD0_MCSPI1_SIMO_PAD1_MCSPI1_CS0			0x4a0029c0
extern reg omap5430_control_core_pad0_mcspi1_simo_pad1_mcspi1_cs0;
#define OMAP5430_CONTROL_CORE_PAD0_MCSPI1_CS1_PAD1_I2C5_SCL			0x4a0029c4
extern reg omap5430_control_core_pad0_mcspi1_cs1_pad1_i2c5_scl;
#define OMAP5430_CONTROL_CORE_PAD0_I2C5_SDA_PAD1_PERSLIMBUS2_CLOCK		0x4a0029c8
extern reg omap5430_control_core_pad0_i2c5_sda_pad1_perslimbus2_clock;
#define OMAP5430_CONTROL_CORE_PAD0_PERSLIMBUS2_DATA_PAD1_UART6_TX		0x4a0029cc
extern reg omap5430_control_core_pad0_perslimbus2_data_pad1_uart6_tx;
/* ES2.0 */
#define OMAP5430_CONTROL_CORE_PAD0_I2C5_SDA_PAD1_GPIO5_145			0x4a0029c8
extern reg omap5430_control_core_pad0_i2c5_sda_pad1_gpio5_145;
#define OMAP5430_CONTROL_CORE_PAD0_GPIO5_146_PAD1_UART6_TX			0x4a0029cc
extern reg omap5430_control_core_pad0_gpio5_146_pad1_uart6_tx;

#define OMAP5430_CONTROL_CORE_PAD0_UART6_RX_PAD1_UART6_CTS			0x4a0029d0
extern reg omap5430_control_core_pad0_uart6_rx_pad1_uart6_cts;
#define OMAP5430_CONTROL_CORE_PAD0_UART6_RTS_PAD1_UART3_CTS_RCTX		0x4a0029d4
extern reg omap5430_control_core_pad0_uart6_rts_pad1_uart3_cts_rctx;
#define OMAP5430_CONTROL_CORE_PAD0_UART3_RTS_IRSD_PAD1_UART3_TX_IRTX		0x4a0029d8
extern reg omap5430_control_core_pad0_uart3_rts_irsd_pad1_uart3_tx_irtx;
#define OMAP5430_CONTROL_CORE_PAD0_UART3_RX_IRRX_PAD1_USBB3_HSIC_STROBE		0x4a0029dc
extern reg omap5430_control_core_pad0_uart3_rx_irrx_pad1_usbb3_hsic_strobe;
#define OMAP5430_CONTROL_CORE_PAD0_USBB3_HSIC_DATA_PAD1_SDCARD_CLK		0x4a0029e0
extern reg omap5430_control_core_pad0_usbb3_hsic_data_pad1_sdcard_clk;
#define OMAP5430_CONTROL_CORE_PAD0_SDCARD_CMD_PAD1_SDCARD_DATA2			0x4a0029e4
extern reg omap5430_control_core_pad0_sdcard_cmd_pad1_sdcard_data2;
#define OMAP5430_CONTROL_CORE_PAD0_SDCARD_DATA3_PAD1_SDCARD_DATA0		0x4a0029e8
extern reg omap5430_control_core_pad0_sdcard_data3_pad1_sdcard_data0;
#define OMAP5430_CONTROL_CORE_PAD0_SDCARD_DATA1_PAD1_USBD0_HS_DP		0x4a0029ec
extern reg omap5430_control_core_pad0_sdcard_data1_pad1_usbd0_hs_dp;
#define OMAP5430_CONTROL_CORE_PAD0_USBD0_HS_DM_PAD1_I2C1_PMIC_SCL		0x4a0029f0
extern reg omap5430_control_core_pad0_usbd0_hs_dm_pad1_i2c1_pmic_scl;
#define OMAP5430_CONTROL_CORE_PAD0_I2C1_PMIC_SDA_PAD1_USBD0_SS_RX		0x4a0029f4
extern reg omap5430_control_core_pad0_i2c1_pmic_sda_pad1_usbd0_ss_rx;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_0					0x4a0029fc
extern reg omap5430_control_padconf_wakeupevent_0;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_1					0x4a002a00
extern reg omap5430_control_padconf_wakeupevent_1;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_2					0x4a002a04
extern reg omap5430_control_padconf_wakeupevent_2;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_3					0x4a002a08
extern reg omap5430_control_padconf_wakeupevent_3;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_4					0x4a002a0c
extern reg omap5430_control_padconf_wakeupevent_4;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_5					0x4a002a10
extern reg omap5430_control_padconf_wakeupevent_5;
#define OMAP5430_CONTROL_PADCONF_WAKEUPEVENT_6					0x4a002a14
extern reg omap5430_control_padconf_wakeupevent_6;
#define OMAP5430_CONTROL_PADCONF_GLOBAL						0x4a002da0
extern reg omap5430_control_padconf_global;
#define OMAP5430_CONTROL_PADCONF_MODE						0x4a002da4
extern reg omap5430_control_padconf_mode;
#define OMAP5430_CONTROL_SMART1IO_PADCONF_0					0x4a002da8
extern reg omap5430_control_smart1io_padconf_0;
#define OMAP5430_CONTROL_SMART1IO_PADCONF_1					0x4a002dac
extern reg omap5430_control_smart1io_padconf_1;
#define OMAP5430_CONTROL_SMART1IO_PADCONF_2					0x4a002db0
extern reg omap5430_control_smart1io_padconf_2;
#define OMAP5430_CONTROL_SMART2IO_PADCONF_0					0x4a002db4
extern reg omap5430_control_smart2io_padconf_0;
#define OMAP5430_CONTROL_SMART2IO_PADCONF_1					0x4a002db8
extern reg omap5430_control_smart2io_padconf_1;
#define OMAP5430_CONTROL_SMART2IO_PADCONF_2					0x4a002dbc
extern reg omap5430_control_smart2io_padconf_2;
#define OMAP5430_CONTROL_SMART3IO_PADCONF_0					0x4a002dc0
extern reg omap5430_control_smart3io_padconf_0;
#define OMAP5430_CONTROL_SMART3IO_PADCONF_1					0x4a002dc4
extern reg omap5430_control_smart3io_padconf_1;
#define OMAP5430_CONTROL_PBIAS							0x4a002e00
extern reg omap5430_control_pbias;
#define OMAP5430_CONTROL_I2C_0							0x4a002e04
extern reg omap5430_control_i2c_0;
#define OMAP5430_CONTROL_CAMERA_RX						0x4a002e08
extern reg omap5430_control_camera_rx;
#define OMAP5430_CONTROL_HDMI_TX_PHY						0x4a002e0c
extern reg omap5430_control_hdmi_tx_phy;
#define OMAP5430_CONTROL_UNIPORTM						0x4a002e10
extern reg omap5430_control_uniportm;
#define OMAP5430_CONTROL_DSIPHY							0x4a002e14
extern reg omap5430_control_dsiphy;
#define OMAP5430_CONTROL_MCBSPLP						0x4a002e18
extern reg omap5430_control_mcbsplp;
#define OMAP5430_CONTROL_USB2PHYCORE						0x4a002e1c
extern reg omap5430_control_usb2phycore;
#define OMAP5430_CONTROL_HDMI_1							0x4a002e20
extern reg omap5430_control_hdmi_1;
#define OMAP5430_CONTROL_HSI							0x4a002e24
extern reg omap5430_control_hsi;
#define OMAP5430_CONTROL_DDR3CH1_0						0x4a002e30
extern reg omap5430_control_ddr3ch1_0;
#define OMAP5430_CONTROL_DDR3CH2_0						0x4a002e34
extern reg omap5430_control_ddr3ch2_0;
#define OMAP5430_CONTROL_DDRCH1_0						0x4a002e38
extern reg omap5430_control_ddrch1_0;
#define OMAP5430_CONTROL_DDRCH1_1						0x4a002e3c
extern reg omap5430_control_ddrch1_1;
#define OMAP5430_CONTROL_DDRCH2_0						0x4a002e40
extern reg omap5430_control_ddrch2_0;
#define OMAP5430_CONTROL_DDRCH2_1						0x4a002e44
extern reg omap5430_control_ddrch2_1;
#define OMAP5430_CONTROL_LPDDR2CH1_0						0x4a002e48
extern reg omap5430_control_lpddr2ch1_0;
#define OMAP5430_CONTROL_LPDDR2CH1_1						0x4a002e4c
extern reg omap5430_control_lpddr2ch1_1;
#define OMAP5430_CONTROL_DDRIO_0						0x4a002e50
extern reg omap5430_control_ddrio_0;
#define OMAP5430_CONTROL_DDRIO_1						0x4a002e54
extern reg omap5430_control_ddrio_1;
#define OMAP5430_CONTROL_DDRIO_2						0x4a002e58
extern reg omap5430_control_ddrio_2;
#define OMAP5430_CONTROL_HYST_1							0x4a002e5c
extern reg omap5430_control_hyst_1;
#define OMAP5430_CONTROL_USBB_HSIC_CONTROL					0x4a002e60
extern reg omap5430_control_usbb_hsic_control;
#define OMAP5430_CONTROL_C2C							0x4a002e64
extern reg omap5430_control_c2c;
#define OMAP5430_CONTROL_CORE_CONTROL_SPARE_RW					0x4a002e68
extern reg omap5430_control_core_control_spare_rw;
#define OMAP5430_CONTROL_CORE_CONTROL_SPARE_R					0x4a002e6c
extern reg omap5430_control_core_control_spare_r;
#define OMAP5430_CONTROL_CORE_CONTROL_SPARE_R_C0				0x4a002e70
extern reg omap5430_control_core_control_spare_r_c0;
#define OMAP5430_CONTROL_SRCOMP_NORTH_SIDE					0x4a002e74
extern reg omap5430_control_srcomp_north_side;
#define OMAP5430_CONTROL_SRCOMP_SOUTH_SIDE					0x4a002e78
extern reg omap5430_control_srcomp_south_side;
#define OMAP5430_CONTROL_SRCOMP_EAST_SIDE					0x4a002e7c
extern reg omap5430_control_srcomp_east_side;
#define OMAP5430_CONTROL_SRCOMP_WEST_SIDE					0x4a002e80
extern reg omap5430_control_srcomp_west_side;
#define OMAP5430_CONTROL_SRCOMP_CODE_LATCH					0x4a002e84
extern reg omap5430_control_srcomp_code_latch;
/* ES2.0 */
#define OMAP5430_CONTROL_DDRIO_EXT_0						0x4a002e88
extern reg omap5430_control_ddrio_ext_0;

#define OMAP5430_CTRL_MODULE_CORE_PAD_MOD_REGCOUNT				162
extern reg
    * omap5430es1_ctrl_module_core_pad_mod
    [OMAP5430_CTRL_MODULE_CORE_PAD_MOD_REGCOUNT + 1];
extern reg
    * omap5430_ctrl_module_core_pad_mod
    [OMAP5430_CTRL_MODULE_CORE_PAD_MOD_REGCOUNT + 1];

#endif
