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

enum port_outs {
    PORT_OUT_NONE, //エラー
    PORT_OUT1 = 1,
    PORT_OUT2, PORT_OUT3,
    PORT_OUT4, PORT_OUT5,
    PORT_OUT6 = 6
};
typedef enum port_outs port_out_t;

bool port_out_set(port_out_t out, bool value);//異常ならfalse


#endif	/* PORTS_H */

