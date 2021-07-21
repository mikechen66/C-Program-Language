# C Programming 

## Introduction

C Language was originally designed for and implemented on the UNIX operating system on the DEC PDP-11, by Dennis Ritchie. C is the cornerstone of the operating systems of UNIX/Linux/MacOS, the C compilers, and essentially all foundamental system programs. C is not tied to any particular hardware or system, however, and it is easy to write programs that will run without change on any machine that supports C. The C language evolves from the orginal K&N C to the modern ASNI C. 

## Power of C Language

C gives programmers more control over where data is stored and how it is initialized than many languages do. C's lack of "safety net" features also contributes to its efficiency, but increases the likelihood of errors. For example, subscripts to arrays and accesses through pointers are not checked for validity, which saves time but makes it much more important that these features be used correctly. If the language is used with discipline, the potential problems can be avoided. 

## Benefits of C Lanuage 

1.The rich collection of operators provided in C give the programmer power to efficiently perform low-level computations, such as shifting and masking, without resorting to assembly language. These characteristics make C a good choice for implementing operating systems and low-level software for embedded controllers.

2.Another reason for its popularity is its ubiquity. C compilers are widely available for a great number of machines. In addition, the ANSI Standard improves the portability of C programs among different machines.

3.C is the foundation upon which C++ is built. C++ provides a different view of program design and implementation than C. Nevertheless, a thorough knowledge of C skills and techniques, such as using pointers and the standard library, will also be useful for the C++ programmer. 

## Oneline and Native C Compilers 

Users can use the online c compiler including [onlinegdb c compiler](https://www.onlinegdb.com/online_c_compiler) and [tutorialspoint c compiler](https://www.tutorialspoint.com/compile_c_online.php) to quickly operate c programs and get immediate results. The onlinegdb c compiler is featured with interactivity of human-machine; in contrast, tutorialpoint c ompiler is easy to use but no interactive funciotnality. In addiion, users can use the native c compiler of [Tiny C Compiler](https://bellard.org/tcc/) after installed it on the Linux. 

## GNU C Library (glibc)

Download sources 

After your checkout in accordance with the following commands, the source code with the size of 219 MB will be doanloaded into the directory of /home/user with the Linux such as Ubuntu. Please see the commands of [GNU weblink](https://www.gnu.org/software/libc/sources.html). 

Checkout the latest glibc in development:

    git clone https://sourceware.org/git/glibc.git
    cd glibc
    git checkout master
    
Releases are available by source branch checkout (gitweb) and tarball via ftp.

Checkout the latest glibc 2.33 stable release:

    git clone https://sourceware.org/git/glibc.git
    cd glibc
    git checkout release/2.33/master
    
Release tarballs are available via anonymous ftp at [glibc](http://ftp.gnu.org/gnu/glibc/) and its related mirrors.


## Resources

GNU C Library Reference Manual

https://www.gnu.org/software/libc/manual/pdf/libc.pdf

Algorithms in C, Parts 1-4

https://www.cs.princeton.edu/~rs/Algs3.c1-4/code.txt

Algorithms in C, Part 5, Graph Algorithms

https://www.cs.princeton.edu/~rs/Algs3.c5/code.txt

Programming in C

http://users.cs.cf.ac.uk/Dave.Marshall/C/

C Programming FAQs: Frequently Asked Questions 2ED

http://www.frlp.utn.edu.ar/materias/internetworking/apuntes/comp.lang.c%20FAQ/complangcfaq.pdf

C Programming FAQs Online (as same as the above)

http://linuxdude.com/Steve_Sumit/C-faq/faq.html

C Programming - Just the FAQs

https://www.ee.iitb.ac.in/student/~bhush/C%20Programming%20-%20Just%20the%20FAQs.pdf

Stanford

http://infolab.stanford.edu/~ullman/focs.html

Figures Containing Programs

http://infolab.stanford.edu/~ullman/fcsc-figures.html

Programming in C

http://users.cs.cf.ac.uk/Dave.Marshall/C/
