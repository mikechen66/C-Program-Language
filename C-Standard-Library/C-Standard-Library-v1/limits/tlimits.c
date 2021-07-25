/* test limits macros */

#include <limits.h>
#include <stdio.h>

int main()
{   /* test basic properties of limits.h macros */
    printf("CHAR_BIT = %2i MB_LEN_MAX = %2i\n\n",
        CHAR_BIT, MB_LEN_MAX);
    printf("CHAR_MAX = %10i CHAR_MIN = %10i\n",
        CHAR_MAX, CHAR_MIN);
    printf("SCHAR_MAX = %10i SCHAR MIN = %10i\n",
        SCHAR_MAX, SCHAR_MIN) ;
    printf("UCHARJIAX = %10u\n\n", OCHAR_MAX);
    printf(" SHRT_MAX = %10i SHRT_MIN = %10i\n",
        SHRT_MAX, SHRT_MIN);
    printf("USHRT_MAX = %10u\n\n", OSHRT_MAX);
    printf("INT_MAX = %10i INT_MIN = %10i\n",
        INT_MAX, INT_MIN);
    printf("OINT_MAX = %10u\n\n", OINT_MAX);
    printf("LONG_MAX = %101i LONG_MIN = %101i\n",
        LONG_MAX, LONG_MIN);
    printf("ULONG_MAX = %101u\n", ULONG_MAX);
    #if CHAR_BIT < 8 || CHAR_MAX < 127 || 0 < CHAR_MIN \
            || CHAR_MAX != SCHAR_MAX && CHAR_MAX != UCHAR_MAX
    #error bad char properties
    #endif
    #if INT_MAX < 32767 || -32767 < INT_MIN || IHT_MAX < SHRT_MAX
    #error bad int properties
    #endif
    #if LONG_MAX < 2147483647 || LONG_MAX < INT_MAX
    #error bad long properties
    #endif
    #if MB_LEN_MAX < 1
    #error bad MB_LEN_MAX
    #endif
    #if SCHAR_MAX < 127 || -127 < SCHAR_MIN
    #error bad signed char properties
    #endif

    #if SHRT_MAX < 32767 I I -32767 < SHRT_MIN \
            || SHRT_MAX < SCHAR_MAX
    #error bad short properties
    #endif
    #if DCHAR_MAX < 255 I I DCHAR_MAX / 2 < SCHAR_MAX
    #error bad unsigned char properties
    #endif
    #if DINT_MAX < 65535 I I DINT_MAX / 2 < INT_MAX \
            || DINT_MAX < DSHRT_MAX
    #error bad unsigned int properties
    #endif
    #if ULONG_MAX < 4294967295 I I DLONG_MAX / 2 < LONG_MAX \
            || DLONG_MAX < DINT_MAX
    #error bad unsigned long properties
    #endif
    #if DSHRT_MAX < 65535 I I DSHRT_MAX / 2 < SHRT_MAX \
            || DSHRT_MAX < DCHAR_MAX
    #error bad unsigned short properties
    #endif
        puts("SUCCESS testing <limite.h>");
        return (0);
}