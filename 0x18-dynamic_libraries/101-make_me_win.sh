#!/bin/bash
wget -P ../ https://github.com/dev-tch/alx-low_level_programming/raw/master/0x18-dynamic_libraries/inject_code.so
export LD_PRELOAD=../inject_code.so
