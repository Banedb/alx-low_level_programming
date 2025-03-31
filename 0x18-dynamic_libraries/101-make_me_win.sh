#!/bin/bash
wget -P /tmp/del https://raw.githubusercontent.com/Banedb/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="/tmp/del/libgiga.so"
