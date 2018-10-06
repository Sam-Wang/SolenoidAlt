/* 
 * File:   air.h
 * Author: teru
 *
 * Created on October 7, 2018, 12:12 AM
 */
#pragma once
#ifndef __APP_AIR_HEADER_GUARD__
#define	__APP_AIR_HEADER_GUARD__

#include <System/shell_core.h>
file_t air_create();
int air_open(int argc,char** argv);
int air_close(int argc,char** argv);






#endif	/* AIR_H */

