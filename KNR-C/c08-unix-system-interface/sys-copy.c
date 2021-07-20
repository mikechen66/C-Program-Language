#include <unistd.h> 
#include <stdio.h> 

main()
{
    char buf[BUFSIZ];
    int n;

    while ((n = read(0, buf, BUFSIZ)) > 0)
        write(1, buf, n);
    return 0;
}



/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * $main
 */