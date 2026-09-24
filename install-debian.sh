#!/bin/bash

pkgname=calcuc_1.0_all


if ! [ "$EUID" -ne 0 ]
  then echo "Please do not run this file as root. Exiting..."
  exit 1
fi



echo "Constructing Debian Package..."
mkdir $pkgname
cd $pkgname
mkdir DEBIAN && mkdir usr
cd usr
mkdir bin
echo "Done"

cd .. && cd ..
echo "Compiling CalcuC..."

isInstalled=$(apt search "gcc")

if [ -z "$isInstalled" ]
then
      echo "GCC not found. Dependency ERR."
      rm -rf $pkgname
      exit 1
fi

gcc -o CalcuC CalcuC.c regexlet.c regexnum.c shuntingyard.c
cp CalcuC ./$pkgname/usr/bin
echo "Done"

echo "Cleaning Up..."
cp ./debianfiles/control ./$pkgname/DEBIAN/control
echo "Done"

echo "Building and Installing Debian Package..."
dpkg-deb --build --root-owner-group calcuc_1.0_all

sudo dpkg -i calcuc_1.0_all.deb

echo "Done"

exit 0
