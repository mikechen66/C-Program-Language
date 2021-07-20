# Foundations of Computer Science C Edition
  Alfred Aho & Jeff Ullman

The book has been regarded as a ground-breaking publication in the history of in the computer
science. Some core concepts are classicial and insightful for current programming.  Readers 
can use the following native or online c compilers to run any c program. 

## Native C Compiler 
Tiny C Compiler - Fabrice Bellard

Tiny C Compiler is heading torward full ISO C99 compliance but may not be compatible with 
ISO C11 standard because Fabrice is no longer to update Tiny C Compiler. 

1). install tiny c compiler

$ sudo apt update

$ sudo apt install tcc

It will be installed in the directory as follows in the Linux.

/usr/bin/tcc


2). Call the c program

$ cd /home/user/Documents/cprograms

$ tcc -run hello.c

Hello World


3). echo execution with command line 

Usage - option, read from the stdio 

echo 'main(){puts("Hello World");}' | tcc -run -

Hello World

Please see the following weblink for reference.

weblink: 

https://bellard.org/tcc/

wikipedia: 

https://en.wikipedia.org/wiki/Tiny_C_Compiler

## Online C Compiler 

Users can put the lines of code onto the plate of the following online c compilers and
see the immediate result. Due to the subtly different checking system, users can use
the two online c compilers to do the overlapping test on any doubted program.

1). tutorialspoint c compiler 

Tutorialpoint oneline comiler is a easy-operating tool that can quickly deal with light
weight programs. 

a. Open the online compiler

https://www.tutorialspoint.com/compile_c_online.php

b. Paste the code onto the plate

c. Click the button of Execute


2). onlinegdb c compiler

With regard to heavy-weight programs, users can use the onlinegdb c compiler. It is equipped
with the core functionalities such as Run, Debug, Stop, Upload, etc. It can handle the 
program with up to 1000 lines of code. 

a. Open the online compiler

https://www.onlinegdb.com/online_c_compiler

b. Paste the code onto the plate

c. Click the button of Run

d. Click the key of Enter or the button of Stop for exit the code


## Reference:

Stanford 

http://infolab.stanford.edu/~ullman/focs.html

Figures Containing Programs

http://infolab.stanford.edu/~ullman/fcsc-figures.html

Programming in C

http://users.cs.cf.ac.uk/Dave.Marshall/C/


Notes:

If any program is obsolete, shall you please correct them and then run it. 
