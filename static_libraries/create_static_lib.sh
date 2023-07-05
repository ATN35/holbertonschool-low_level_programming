#!/bin/bash
gcc -c source_*.c
ar rcs liball.a *.o
ranlib liball.a
