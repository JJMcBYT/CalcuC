# Welcome to the guide for how to setup CalcuC
## A bare-bones, lightweight, two-term calculator written in C.


### Linux Executable:
- If you install the Linux Executable Labelled "CalcuC" from the releases page, you can run it directly from the terminal by going to the directory that the file is in and running the program with: "./CalcuC".
- #### Note: you might have to run the command "chmod +x CalcuC first"

### Windows Executable:
- You must run CalcuC from the windows command line by going to the directory the file is in, opening up the command line and simply typing "CalcuC.exe"

### Manual Compilation - Debian
- To install this program with the source code, you must:
1. Unzip the source code
2. "cd" into the source code's directory
3. run the bash file for Debian with "./install-debian.sh"
- Note: do not run this file as root. It wont let you any ways.

### Manual Compilation - Arch Linux
- To install this program with the source code, you must:
1. Unzip the source code
2. "cd" into the source code's directory
3. run the bash file for Debian with "./install-archlinux.sh"
- Note: it does not matter if you run the file with root or not on Arch.

## Final Notes:
- Source code compilation does not work on Windows.
- If you do not use Debian or Arch Linux and still want to compile the program.
1. You must have GCC
2. You can by running the command within the source code directory: "gcc -o CalcuC CalcuC.c regexnum.c regexlet.c shuntingyard.c"
