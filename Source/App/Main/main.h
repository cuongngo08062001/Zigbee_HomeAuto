/*
 * main.h
 *
 *  Created on: May 25, 2022
 *      Author: CuongNV
 */

#ifndef APP_MAIN_MAIN_H_
#define APP_MAIN_MAIN_H_

#define RGB1_ENDPOINT									1
#define RGB2_ENDPOINT									2
#define LIGH_ENDPOINT									3
#define TEMP_ENDPOINT									4


typedef enum{
	POWER_ON_STATE,
	REPORT_STATE,
	IDLE_STATE,
	REBOOT_STATE
}systemState;


EmberAfStatus emberAfPluginFindAndBindTargetStart(uint8_t endpoint);
EmberStatus emberAfPluginFindAndBindInitiatorStart(uint8_t endpoint);
#endif /* SOURCE_APP_MAIN_MAIN_H_ */
