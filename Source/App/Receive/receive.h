/*
 * send.c
 *
 *  Created on: May 25, 2022
 *      Author: CuongNV
 */

#ifndef APP_RECEIVE_RECEIVE_H_
#define APP_RECEIVE_RECEIVE_H_


#define LED_OFF								0
#define LED_ON								1

/* Function prototypes -----------------------------------------------*/

uint8_t checkBindingTable(uint8_t localEndpoint);
boolean emberAfPreCommandReceivedCallback(EmberAfClusterCommand* cmd);
bool RECEIVE_HandleLevelControlCluster(EmberAfClusterCommand* cmd);
bool RECEIVE_HandleOnOffCluster(EmberAfClusterCommand* cmd);


#endif /* APP_RECEIVE_RECEIVE_H_ */
