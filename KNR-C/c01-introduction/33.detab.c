#include <stdio.h>

main()
{
    int c, n, i;
    int cur;

    n = 8;

    cur = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (i = n - cur; i > 0; --i)
                putchar(' ');

            cur = 0;
        } else {
            putchar(c);
            cur++;
            if (cur > n)
                cur = 0;
        }
    }
}



/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * $main
 */