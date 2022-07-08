/*
 * network.h
 *
 *  Created on: May 25, 2022
 *      Author: CuongNV
 */

#ifndef APP_NETWORK_NETWORK_H_
#define APP_NETWORK_NETWORK_H_

typedef enum{
	NETWORK_HAS_PARENT,
	NETWORK_JOIN_FAIL,
	NETWORK_JOIN_SUCCESS,
	NETWORK_LOST_PARENT,
	NETWORK_OUT_NETWORK,
}Network_Event_e;

typedef void (*networkEventHandler) (Network_Event_e networkEvent);

void NETWORK_FindAndJoin(void);
void joinNetworkEventHandler(void);
void NETWORK_StopFindAndJoin(void);

void Network_Init(networkEventHandler networkResult);
#endif /* SOURCE_APP_NETWORK_NETWORK_H_ */
