/* 
 * File:   ports.h
 * Author: TERU
 *
 * Created on 2016/03/23, 1:15
 */

#ifndef PORTS_H
#define	PORTS_H
#include <stdint.h>
#include <stdbool.h>


void port_setup();
uint16_t port_address();

void port_led_select(bool);
void port_led_transmit(bool);
void port_led_receive(bool);


#endif	/* PORTS_H */

