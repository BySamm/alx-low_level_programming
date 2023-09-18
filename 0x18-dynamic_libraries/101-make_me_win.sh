#!/bin/bash
gcc -Wall -Wexxtra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_PRELOAD=.:$LD_LIBRARY_PATH
