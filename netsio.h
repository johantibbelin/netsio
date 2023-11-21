#ifndef NETSIO_H
#define NETSIO_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/* UDP network stuff */
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

/* Time for keepalive*/
#include <sys/time.h>

#include "netsio_proto.h"

uint8_t NETSIO_send_byte(); 

uint8_t NETSIO_recive_byte();

void NETSIO_cold_reset(); 

void NETSIO_warm_reset();

void NETSIO_connect();

void NETSIO_disconnect();

void NETSIO_motor_off();

void NETSIO_motor_on();

void NETSIO_sync_response(); 

#endif // NETSIO_H
