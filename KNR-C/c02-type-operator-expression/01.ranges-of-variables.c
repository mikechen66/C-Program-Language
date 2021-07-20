#include <stdio.h>
#include <limits.h>

main()
{
    printf("From limits.h:\n"); 
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("LONG_MIN: %d\n", LONG_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("UCHAR_MAX: %d\n", UCHAR_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);

    printf("\nFrom calc:\n");

    /*signed types*/
    printf("signed char min=%d\n",-(char)((unsigned char) ~0 >> 1));
    printf("signed char max=%d\n",(char)((unsigned char) ~0 >> 1));
    printf("signed int min=%d\n",-(int)((unsigned int) ~0 >> 1));
    printf("signed int max=%d\n",(int)((unsigned int) ~0 >> 1));
    printf("signed short min=%d\n",-(short)((unsigned short) ~0 >> 1));
    printf("signed short max=%d\n",(short)((unsigned short) ~0 >> 1));
    printf("signed long min=%d\n",-(long)((unsigned long) ~0 >> 1));
    printf("signed long max=%ld\n",(long)((unsigned long) ~0 >> 1));

    /*unsigned types*/
    printf("unsigned char max=%u\n",((unsigned char) ~0 >> 1));
    printf("unsigned int max=%u\n",((unsigned int) ~0 >> 1));
    printf("unsigned long max=%lu\n",((unsigned long) ~0 >> 1));
    printf("unsigned short max=%u\n",((unsigned short) ~0 >> 1));

}


/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * $main
 * From limits.h:
 * CHAR_BIT: 8
 * CHAR_MAX: 127
 * CHAR_MIN: -128
 * INT_MAX: 2147483647
 * INT_MIN: -2147483648
 * LONG_MAX: 9223372036854775807
 * LONG_MIN: 0
 * SCHAR_MAX: 127
 * SCHAR_MIN: -128
 * SHRT_MAX: 32767
 * SHRT_MIN: -32768
 * UCHAR_MAX: 255
 * UINT_MAX: 4294967295
 * ULONG_MAX: 18446744073709551615
 * USHRT_MAX: 65535

 * From calc:
 * signed char min=-127
 * signed char max=127
 * signed int min=-2147483647
 * signed int max=2147483647
 * signed short min=-32767
 * signed short max=32767
 * signed long min=1
 * signed long max=9223372036854775807
 * unsigned char max=127
 * unsigned int max=2147483647
 * unsigned long max=9223372036854775807
 * unsigned short max=32767
 */