#!/bin/bash

isInstalled=$(pacman -Q | grep "gcc")

if [ -z "$isInstalled" ]
then
      echo "GCC not found. Dependency ERR."
      exit 1
fi

gcc -o CalcuC CalcuC.c regexnum.c regexlet.c shuntingyard.c

makepkg

sudo pacman -U CalcuC-1.0.0-1-x86_64.pkg.tar.zst
