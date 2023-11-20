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

NETSIO_send_byte(); 

NETSIO_recive_byte();

NETSIO_cold_reset(); 

NETSIO_warm_reset();

NETSIO_connect();

NETSIO_disconnect();

NETSIO_motor_off();

NETSIO_motor_on();

#endif // NETSIO_H
