#!/bin/bash

isInstalled=$(pacman -Q | grep "gcc")

if [ -z "$isInstalled" ]
then
      echo "GCC not found. Dependency ERR."
      exit 1
fi

gcc -o CalcuC CalcuC.c regexlet.c euler.c machin.c shuntingyard.c regexnum.c -lm

makepkg

sudo pacman -U CalcuC-1.3.0-1-x86_64.pkg.tar.zst
