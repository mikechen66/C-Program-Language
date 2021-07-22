# GNU C Library v2.33 (glibc)

## Introduction

The GNU C Library version 2.33 is now available. The term "glibc" is commonly used as a shorthand for the "gnu standard C library. The GNU C Library is used as *the* C library in the GNU system and in GNU/Linux systems, as well as many other systems that use Linux as the kernel. The GNU C Library is primarily designed to be a portable and high performance C library.  It follows all relevant standards including ISO C11 and POSIX.1-2017. It is also internationalized and has one of the most complete internationalization interfaces known.

## GNU C Library for Unix-like Systems 

Unix-like systems typically have a C library in shared library form. The C library is considered part of the operating system on Unix-like systems including Linux, MacOS, Android. The C functions are widely used by programs, and are regarded as if they were not only an implementation of something in the C language, but also de facto part of the operating system interface. Further, the kernel itself (at least in the case of Linux) operates independently of any libraries.

## Major new features:

* The dynamic linker accepts the --list-tunables argument which prints all the supported tunables.  This option is disable if glibc is configured with tunables disabled (--enable-tunables=no).

* The dynamic linker accepts the --argv0 argument and provides opportunity to change argv[0] string.

* The dynamic linker loads optimized implementations of shared objects from subdirectories under the glibc-hwcaps directory on the library search path if the system's capabilities meet the requirements for that subdirectory...In the x86_64-linux-gnu case, the subdirectory names correspond to the vendor-independent x86-64 microarchitecture levels defined in the x86-64 psABI supplement.

* The new --help option of the dynamic linker provides usage and information and library search path diagnostics.

* The mallinfo2 function is added to report statistics as per mallinfo,
  but with larger field widths to accurately report values that are
  larger than fit in an integer.

* Add <sys/platform/x86.h> to provide query macros for x86 CPU features.

* Support for the RISC-V ISA running on Linux has been expanded to run on
  32-bit hardware.  This is supported for the following ISA and ABI pairs:

    - rv32imac ilp32
    - rv32imafdc ilp32
    - rv32imafdc ilp32d

  The 32-bit RISC-V port requires at least Linux 5.4, GCC 7.1 and binutils
  2.28.

* A new fortification level _FORTIFY_SOURCE=3 is available.  At this level,
  glibc may use additional checks that may have an additional performance
  overhead.  At present these checks are available only on LLVM 9 and later.
  The latest GCC available at this time (10.2) does not support this level of
  fortification.

## GNU C Library (glibc)

After your checkout in accordance with the following commands, the source code with the size of 219 MB will be doanloaded into the directory of /home/user with the Linux such as Ubuntu. Please see the commands of GNU weblink.

Checkout the latest glibc in development:

git clone https://sourceware.org/git/glibc.git
cd glibc
git checkout master
Releases are available by source branch checkout (gitweb) and tarball via ftp.

Checkout the latest glibc 2.33 stable release:

git clone https://sourceware.org/git/glibc.git
cd glibc
git checkout release/2.33/master
Release tarballs are availab


## Library Resources

GNU Library Mirror

http://ftp.gnu.org/gnu/glibc/

# GNU C Library v2.33 Released News

https://sourceware.org/pipermail/libc-alpha/2021-February/122207.html

ACM 

http://www.acm.uiuc.edu/webmonkeys/book/c_guide/index.html

ISO C Working Group

http://www.open-std.org/jtc1/sc22/wg14/

Wiki

https://en.wikipedia.org/wiki/C_standard_library

https://en.wikipedia.org/wiki/GNU_C_Library


Internal Pointers 

https://www.internalpointers.com/post/c-c-standard-library

Man:

https://en.wikipedia.org/wiki/Man_page
