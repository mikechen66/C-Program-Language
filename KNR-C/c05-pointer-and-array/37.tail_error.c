
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the oneline complier since it need to call the programs in the same folders
 * as follows
 * 
 * atoi.c
 * alloc.c
 * mygetline.c
 * 
 * If the program is operated on any online c compiler, it shows the errors in 
 * the end of the program. 
 */ 


#include <stdio.h>
#include <string.h>

#define MAXLINES 50000
#define MAXLEN 10000

int mygetline(char *line, int max);

char *alloc(int);
void afree(char*);

main(int argc, char *argv[])
{
    int n;

    if (argc == 1)
        n = 10;
    else if (argc == 2 && (*++argv)[0] == '-') {
        n = atoi(*argv + 1);
        if (n < 1)
            n = 10;
    } else {
        printf("Usage: tail -n\n");
        return 1;
    }

    char line[MAXLEN], *lineptr[MAXLINES];
    int len;
    char *p;
    int lines = 0;

    while ((len = mygetline(line, MAXLEN)) > 0) {
        p = alloc(len + 1);
        strcpy(p, line);
        lineptr[lines++] = p;
    }


    int i = lines - n;
    i = (i >= 0) ? i : 0;

    while (n-- > 0 && i <= lines) {
        printf("%s", lineptr[i++]);
    }

    return 0;
}



/* 
 * Output
 * 
 * $gcc -o main *.c
 * main.c:12:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main(int argc, char *argv[])
 * ^~~~
 * main.c: In function ‘main’:
 * main.c:19:13: warning: implicit declaration of function ‘atoi’ [-Wimplicit-function-declaration]
 *        n = atoi(*argv + 1);
 *            ^~~~
 * /tmp/cc0D9G7u.o: In function `main':
 * main.c:(.text+0xa0): undefined reference to `alloc'
 * main.c:(.text+0xe5): undefined reference to `mygetline'
 * collect2: error: ld returned 1 exit status
 */
