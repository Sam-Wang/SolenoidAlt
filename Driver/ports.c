#include "../Setting/configuration.h"
#include "ports.h"

void port_setup() {
    //入出力方向設定
    const TRISBBITS dir_b = {
        .TRISB0 = true, //SEL1
        .TRISB1 = true, //SEL2
        .TRISB2 = true, //SEL4
        .TRISB3 = true, //SEL8
        .TRISB4 = false, //LED(Select)
        .TRISB5 = false//LED(Error)
    };
    const TRISCBITS dir_c = {
        .TRISC14 = true, //RX
        .TRISC13 = false //TX
    };
    const TRISDBITS dir_d = {
        .TRISD0 = false, //LED(Sig)
    };

    const TRISEBITS dir_e = {
        .TRISE0 = false, //out1
        .TRISE1 = false, //out2
        .TRISE2 = false, //out3
        .TRISE3 = false, //out4
        .TRISE4 = false, //out5
        .TRISE5 = false//out6
    };

    TRISBbits = dir_b;
    TRISCbits = dir_c;
    TRISDbits = dir_d;
    TRISEbits = dir_e;

    //初期値書き込み
    LATB=0;
    LATC=0;
    LATD=0;
    LATE=0;
    
    //ADC無効化
    ADPCFG = 0xffff;
    ADPCFGbits.PCFG5 = true;
    
    
    
}

inline uint16_t port_address() {
    //負論理と仮定
    const uint16_t dip= PORTB&0xf;
    return ~dip;
}

void port_led_select(bool x){
    LATBbits.LATB4=x;
}
void port_led_transmit(bool x){
    LATBbits.LATB5=x;
}
void port_led_receive(bool x){
    LATDbits.LATD0=x;
}
