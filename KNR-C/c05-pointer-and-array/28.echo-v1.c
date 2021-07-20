#include <stdio.h>

main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
        printf("%s%s", argv[i], (i < argc-1) ? " " : "");
    printf("\n");

    return 0;
}



/* 
 * Output
 * 
 * $gcc -o main *.c
 * main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main(int argc, char *argv[])
 * ^~~~
 * $main
 */