#include "shell.h"
#include "shell_bin.h"

#include "shell_sbin.h"
#include <stddef.h>

#include <string.h>
#include <stdio.h>
#include <App/air.h>

static void shell_listen() {
    file_t root, sbin;
    path_init(); //これまでの構成を破棄
    root = path_root();
    directory_insert(root, sbin = sbin_create());
    directory_registor(sbin);
}

static void shell_selected() {
    file_t root, bin, sbin, air;
    path_init(); //これまでの構成を破棄
    root = path_root();
    directory_insert(root, bin = bin_create());
    directory_registor(bin);
    directory_insert(root, sbin = sbin_create());
    directory_registor(sbin);
    directory_insert(root, air = air_create());
    directory_registor(air);
}

void shell_init() {
    select_listen_set(shell_listen);
    select_general_set(shell_selected);
    select_selected_set(shell_selected);
    //select_selected();
    select_listen();
    //shell_listen();//listenモードで起動
}

