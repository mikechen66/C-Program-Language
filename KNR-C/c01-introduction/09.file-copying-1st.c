#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}


/*
 * Output
 * 
 * main.c:12:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 */