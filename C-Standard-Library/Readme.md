# C Standard Library 

## Introduction

The C Standard Library, also known as ISO C Library is a collection of macros, types and functions for the tasks such as input/output processing, string handling, memory management, mathematical computations and many other operating system services. It is specified in the C standard, e.g. the C11 standard. However, it is hard to get the C standard libraries in the web. It can be provided by both the compilers, and the OS providers and the third-party experts. Users will have to check the compiler documentation if it is using the OS-provided library implementation or an implementation that is bundled with the compiler. For one and the same compiler, this can be different per OS or compiler build. 

## Library Distributed 

### C Standard Library for Unix-like Systems 

Unix-like systems typically have a C library in shared library form. The C library is considered part of the operating system on Unix-like systems including Linux, MacOS, Android. The C functions, including the ISO C standard ones, are widely used by programs, and are regarded as if they were not only an implementation of something in the C language, but also de facto part of the operating system interface. Further, the kernel itself (at least in the case of Linux) operates independently of any libraries.

### C Standard Library for Windows 

On Microsoft Windows, the core system dynamic libraries (DLLs) provide an implementation of the C standard library for the Microsoft Visual C++ compiler v6.0; the C standard library for newer versions of the Microsoft Visual C++ compiler is provided by each compiler individually, as well as redistributable packages. Compiled applications written in C are either statically linked with a C library, or linked to a dynamic version of the library that is shipped with these applications, rather than relied upon to be present on the targeted systems. Functions in a compiler's C library are not regarded as interfaces to Microsoft Windows.


## C Standard Library Reference 

### GNU C Library (glibc)
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


### C Standard Library by Plauger 

It contains all the source code from "The Standard C Library", by P.J. Plauger (1992). It corrects a number of errors reported after publication. Hence, the code may differ from the original book in small ways because of its long-publised date. Please take the sample code of [C Standard Library 1992](https://github.com/mikechen66/C-Programming/tree/main/C-Standard-Library/C-Standard-Library-1992) for reference. 


## Library Resources

GNU libc Library

https://www.gnu.org/software/libc/

ACM C Guiude Online (1997) 

http://www.acm.uiuc.edu/webmonkeys/book/c_guide/index.html

ISO C Working Group

http://www.open-std.org/jtc1/sc22/wg14/

Open Source Library List

https://en.cppreference.com/w/c/links/libs

Wikipedia

https://en.wikipedia.org/wiki/C_standard_library

https://en.wikipedia.org/wiki/GNU_C_Library


Internal Pointers 

https://www.internalpointers.com/post/c-c-standard-library

Man:

https://en.wikipedia.org/wiki/Man_page
