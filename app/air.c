#include "air.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include "Driver/ports.h"

static int air_set(int argc,char **argv,bool value){
    int pos;
    port_out_t out;
    for (pos=1;pos<argc;pos++){
        out=(port_out_t)atoi(argv[pos]);
        if (!port_out_set(out,value)){
            return -2;
        }
    }
    return 0;
}

file_t air_create(){
    static const excute_pair pairs []={
        {"open",air_open},
        {"close",air_close}
    };
    file_t air = directory_create("air");
    directory_insert_excute(air,pairs,sizeof(pairs)/sizeof(pairs[0]));
    return air;
}

int air_open(int argc,char** argv){
    return air_set(argc,argv,true);
}
int air_close(int argc,char** argv){
    return air_set(argc,argv,false);
}