/* 
 * File:   configuration.h
 * Author: TERU
 *
 * Created on 2016/03/23, 0:16
 */

#ifndef CONFIGURATION_H
#define	CONFIGURATION_H


//デバイス環境
#include "p30F4012.h"


//環境構築
#define FORIG (1000000UL)
#define FOSC (FORIG*8/4) //10[MHz]*8[PLL]/4[DIV]=20[MHz] 

#define PIN_HIGH(x) ((x)=true)
#define PIN_LOW(x)  ((x)=false)
#define PIN_INV(x)  ((x)=(^x))

//UART
#define RX_BUFFER_SIZE  (64) //受信バッファの一つ当たりの大きさ
#define TX_BUFFER_SIZE  (64)
#define CMD_LENGTH (32)        // システムが受け入れられる文字の最大数、
#define CMD_MAX     (16)        // 最大分割数(1LINEあたり)
#define FILE_MAX    (32)        // 最大ファイル数
#define MULTI_MAX (8) //同時に実行できるコマンドの最大値
#define WORD_MAX (32)
#define PATH_DEPTH_MAX (8)
#define QUICK_MAX (8) 
#define WORD_MAX (32)







#endif	/* CONFIGURATION_H */

