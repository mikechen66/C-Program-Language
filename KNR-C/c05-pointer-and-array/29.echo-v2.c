#include <stdio.h>

main(int argc, char *argv[])
{
    while (--argc > 0)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
        //printf((argc > 1) ? "%s " : "%s", *++argv);
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