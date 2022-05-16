#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,libdynamic.so -o libdynamic.so *.o
