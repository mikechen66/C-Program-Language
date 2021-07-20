
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online c complier since it need to call the environment in the same folder
 * as follows
 * 
 * #define HDR "sysv.h" 
 */ 

#include <stdio.h>

#define SYSTEM 1

#define BSD 0
#define SYSV 1
#define MSDOC 2

#ifndef HDR
    #if SYSTEM == BSD
        #define HDR "bsd.h"
    #elif SYSTEM == SYSV
        #define HDR "sysv.h"
    #elif SYSTEM == MSDOC
        #define HDR "msdos.h"
    #else
        #define HDR "default.h"
    #endif

    #include HDR
#endif

int main()
{
    printf("%s\n", OS);
}