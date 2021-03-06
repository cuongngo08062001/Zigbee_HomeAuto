/*
 * send.c
 *
 *  Created on: May 25, 2022
 *      Author: CuongNV
 */

#ifndef APP_SEND_SEND_H_
#define APP_SEND_SEND_H_



#define MAX_DATA_COMMAND_SIZE					50
#define SOURCE_ENDPOINT_PRIMARY					1
#define DESTINATTION_ENDPOINT					1
#define HC_NETWORK_ADDRESS						0x0000
 #define ZDO_MESSAGE_OVERHEAD 					1

void SendZigDevRequest(void);
void SEND_OnOffStateReport(uint8_t Endpoint, uint8_t value);
void SEND_PIRStateReport(uint8_t Endpoint, uint8_t value);
void SEND_ReportInfoHc(void);
void SendZigDevRequest(void);

void SEND_LDRStateReport(uint8_t Endpoint, uint32_t value);
void SEND_TempStateReport(uint8_t Endpoint, uint32_t value);
void SEND_BindingInitToTarget(uint8_t remoteEndpoint, uint8_t localEndpoint, bool value, uint16_t nodeID);
#endif /* SOURCE_APP_SEND_SEND_H_ */

