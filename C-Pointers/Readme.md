# Pointers on C
Kenneth Reek 

## Introduction

It is not enough to describe the syntax of pointers and show only simple examples of their use. Pointers are a thread that is woven throughout this book. Why are pointers so important? My belief is that pointers are what gives C its power. Pointers allow the C programmer to implement many tasks more efficiently than is possible in other languages, and to perform some tasks, such as accessing the hardware directly, that are impossible in other languages. A thorough knowledge of pointers, then, is a prerequisite to becoming a good C programmer.

## Power of Pointers

C gives programmers more control over where data is stored and how it is initialized than many languages do. C's lack of "safety net" features also contributes to its efficiency, but increases the likelihood of errors. For example, subscripts to arrays and accesses through pointers are not checked for validity, which saves time but makes it much more important that these features be used correctly. If the language is used with discipline, the potential problems can be avoided. 

1.The rich collection of operators provided in C give the programmer power to efficiently perform low-level computations, such as shifting and masking, without resorting to assembly language. This ability has prompted many to characterize C as being a "high-level" assembly language. However, when needed, C programs can interface easily with assembly language. These characteristics make C a good choice for implementing operating systems and software for embedded controllers.

2.Another reason for its popularity is its ubiquity. C compilers are widely available for a great number of machines. In addition, the ANSI Standard improves the portability of C programs among different machines.

3.C is the foundation upon which C++ is built. C++ provides a different view of program design and implementation than C. Nevertheless, a thorough knowledge of C skills and techniques, such as using pointers and the standard library, will also be useful for the C++ programmer. Who Should Use this Book?


## Resources


https://sg1lib.org/book/2172511/e6f7a2?id=2172511&secret=e6f7a2

https://github.com/Apress/pointers-c-programming

https://www.gnu.org/software/libc/manual/pdf/libc.pdf

https://www.it.uc3m.es/pbasanta/asng/course_notes/ctut.pdf
