#include <stdio.h>

main()
{
    double sum, v;

    sum = 0;
    while (scanf("%1f", &v) == 1)
        printf("\t%.2f\n", sum += v);
    return 0;
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