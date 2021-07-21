# The C Programming Language 2ED (K&R C)
Brian W. Kernighan, Dennis M. Ritchie

Users can use the following native or onine c compilers to run any c program. Users can 
download the ebook from the designated weblink in the attached notes. 

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

weblink: https://bellard.org/tcc/

wikipedia: https://en.wikipedia.org/wiki/Tiny_C_Compiler

## Online C Compiler 

Users can put the lines of code onto the plate of the following online c compilers and
see the immediate result. Due to the subtly different checking system, users can use
the two online c compilers to do the overlapping test on any doubted program.


1). tutorialspoint c compiler 

The compiler has an easy user interface. It just has the major button of Execute. It is 
suitable for a qucik validation of a program. 

a. Open the online compiler

https://www.tutorialspoint.com/compile_c_online.php

b. Paste the code onto the plate

c. Click the button of Execute


2). onlinegdb c compiler

THe onlinedb has rich features including Stop, Debug and Upload. If any current program 
has runtime error, it is necessary to click Stop and then users are allowed to paste a 
new lines of code. 

a. Open the online compiler

https://www.onlinegdb.com/online_c_compiler

b. Paste the code onto the plate

c. Click the button of Run

d. Click the key of Enter or the button of Stop for exit the code


## Reference:

Programming in C

http://users.cs.cf.ac.uk/Dave.Marshall/C/

C Programming FAQs: Frequently Asked Questions 2ED 

http://www.frlp.utn.edu.ar/materias/internetworking/apuntes/comp.lang.c%20FAQ/complangcfaq.pdf

C Programming FAQs Online (as same as the above)

http://linuxdude.com/Steve_Sumit/C-faq/faq.html

C Programming - Just the FAQs

https://www.ee.iitb.ac.in/student/~bhush/C%20Programming%20-%20Just%20the%20FAQs.pdf

Notes:

If any program is obsolete, shall you please correct them and then run it. 
