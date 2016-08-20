/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_PE_H_
#define _CUST_PE_H_

/* Pump Express support (fast charging) */
#ifdef CONFIG_MTK_PUMP_EXPRESS_PLUS_SUPPORT
#define TA_START_BATTERY_SOC	5
#define TA_STOP_BATTERY_SOC	95
#define TA_AC_12V_INPUT_CURRENT CHARGE_CURRENT_3200_00_MA
#define TA_AC_9V_INPUT_CURRENT	CHARGE_CURRENT_3200_00_MA
#define TA_AC_7V_INPUT_CURRENT	CHARGE_CURRENT_3200_00_MA
#define TA_AC_CHARGING_CURRENT	CHARGE_CURRENT_3000_00_MA
#define TA_9V_SUPPORT
#define TA_12V_SUPPORT


/*this is for HW OVP*/
#define TA_AC_12V_INPUT_OVER_VOLTAGE BATTERY_VOLT_10_500000_V
#define TA_AC_9V_INPUT_OVER_VOLTAGE  BATTERY_VOLT_10_500000_V
#define TA_AC_7V_INPUT_OVER_VOLTAGE  BATTERY_VOLT_09_000000_V
#define TA_AC_5V_INPUT_OVER_VOLTAGE  BATTERY_VOLT_07_000000_V

/*Pump express plus : recharge enable mode*/
#define PUMPEX_PLUS_RECHG (1)

/*This seems not to be used batterymeter*/
#undef V_CHARGER_MAX
#if defined(TA_9V_SUPPORT) || defined(TA_12V_SUPPORT)
#define V_CHARGER_MAX 6500				/* For SW OVP*/
#else
#define V_CHARGER_MAX 7500				/* 7.5 V */
#endif
#endif

#endif /* _CUST_PE_H_ */
