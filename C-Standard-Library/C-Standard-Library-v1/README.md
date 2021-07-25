# The C Standard Library -2ED
P.J. Plauger (1992)

## Introduction

It corrects a number of errors reported after publication. Hence, the code 
may differ from the book in small ways. In general, the header files in the 
directory of "_headers" are updted. The rest of them comply with the original
book. 

## Contents

Fifteen subdirectories match the standard headers. These contain all the *.c 
files presented in the text. The directory _test contains all the t*.c files 
presented as test programs throughout the text. All of the code are converted 
to the indentation of spaces. 

### UNIX VAX
The directory _unixvax replicates a number of these files. It also contains
the sample version of raise.c described in the running text for the ULTRIX
(UNIX VAX) operating system. 

### _unix68k

The directory contains dirty versions of these files - with the conventional 
UNIX names for systey calls. It also contains the file yvals.h modified for 
the GCC compiler on Sun UNIX (680X0) workstations. That version of yvals.h 
shows how to define _CPS if you wish to use the UNIX time system call directly. 

### _tc86 

It contains the files that must be modified for the Turbo C++ (ANSI C)
compiler. Finaly, the directory _dummy contains simple versions of several
files. Typically, these define functions that can fail all the time. 
