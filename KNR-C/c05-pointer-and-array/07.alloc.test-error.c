
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online complier since it need to call the programs in the same folder as 
 * follows
 * 
 * alloc.c
 * 
 * If the program is called on any online c compiler, it show the errors in the 
 * end of the program. 
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


/*
 * Output
 * 
 * $gcc -o main *.c
 * /tmp/cczuw5K5.o: In function `main':
 * main.c:(.text+0xe): undefined reference to `alloc'
 * main.c:(.text+0x9a): undefined reference to `afree'
 * main.c:(.text+0xb0): undefined reference to `alloc'
 * collect2: error: ld returned 1 exit status
 */