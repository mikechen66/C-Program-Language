#include <stdio.h>

int main()
{
    int strlen(char*);

    char array[100];
    char *ptr = "Hello";

    int l = strlen("hello, world");
    printf("%d\n", l);

    l = strlen(array);
    printf("%d\n", l);

    l = strlen(ptr);
    printf("%d\n", l);
}

int strlen(char *s)
{
    char *p = s;

    while (*p != '\0')
        p++;
    
    return p - s;
}



/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c: In function ‘main’:
 * main.c:5:9: warning: conflicting types for built-in function ‘strlen’ [-Wbuiltin-declaration-mismatch]
 *    int strlen(char*);
 *        ^~~~~~
 * $main
 * 12
 * 0
 * 5
 */