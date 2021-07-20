#include <stdio.h>

main()
{
    int c, pre;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || pre != ' ') {
            putchar(c);
        }
        pre = c;
    }
}

/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 */