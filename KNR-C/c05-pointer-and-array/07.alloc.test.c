/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online complier since it need to call the program in the same folder as 
 * follows
 * 
 * alloc.c
 */


#include <stdio.h>
#include <stddef.h>

int main()
{
    char *alloc(int);
    void afree(char*);

    char *p = alloc(10);
    if (NULL == p)
        return -1;

    *p++ = 'H';
    *p++ = 'e';
    *p++ = 'l';
    *p++ = 'l';
    *p++ = 'o';
    *p++ = '\0';
    p -= 6;

    printf("%s\n", p);

    afree(p);

    printf("%s\n", p);

    p = alloc(10001);

    if (NULL == p)
        printf("overflow!\n");

    printf("%d\n", NULL);

    return 0;
}