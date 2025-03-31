#!/bin/bash
wget -P /tmp/del https://github.com/Banedb/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="/tmp/del/libgiga.so"
