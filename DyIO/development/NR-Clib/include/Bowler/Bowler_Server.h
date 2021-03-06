/*
 * Bowler_Server.h
 *
 *  Created on: Jun 18, 2010
 *      Author: hephaestus
 */

#ifndef BOWLER_SERVER_H_
#define BOWLER_SERVER_H_
#include "FIFO.h"
/**
 * Initialize the server
 */
void Bowler_Init(void);
/**
 * Run an instance of the server. THis uses static memory
 */
BYTE Bowler_Server_Static(BowlerPacket * Packet,BYTE_FIFO_STORAGE * fifo);

/**
 * Run an instance of the server. TThis assumes tight hardware integrations
 */
BYTE Bowler_Server(BowlerPacket * Packet, BOOL debug);



#endif /* BOWLER_SERVER_H_ */
