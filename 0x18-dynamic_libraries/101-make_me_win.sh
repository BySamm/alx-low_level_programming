#!/bin/bash
gcc -shared -o myprintf.so -fPIC
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
