#include "../Setting/configuration.h"
#include "ports.h"
#include "driver.h"
#include "uart.h"
#include "timer.h"


bool driver_setup(){
    
    //クロック確認
#if !defined(IS_SLIM)
    while (OSCCONbits.LOCK != 1);//PLL Lock
#endif
    //周辺機器(優先度高)
    port_setup();
    //システム(優先度高)
   //eeprom_setup();
    //周辺機器
    timer23_setup();
    uart_setup();

    return false;
}

