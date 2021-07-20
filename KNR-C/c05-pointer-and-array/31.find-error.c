
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online complier since it need to call the program in the same folder as 
 * follows
 * 
 * mygetline.c 
 * 
 * If the program is called on any online c compiler, it show the errors in the 
 * end of the program. 
 */ 


#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int mygetline(char *line, int max);

main(int argc, char *argv[])
{
    char line[MAXLINE];
    long lineno = 0;
    int c, except = 0, number = 0, found = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch(c) {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("find: illegal option %c\n", c);
                argc = 0;
                found = -1;
                break;
            }
    if (argc != 1)
        printf("Usage: find -x -n pattern\n");
    else
        while (mygetline(line, MAXLINE) > 0) {
            lineno++;
            if ((strstr(line, *argv) != NULL) != except) {
                if (number)
                    printf("%ld:", lineno);
                printf("%s", line);
                found++;
            }
        }
    return found;
}



/*
 * Output
 *
 * $gcc -o main *.c
 * main.c:8:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
  * main(int argc, char *argv[])
 * ^~~~
 * /tmp/cchjRKZt.o: In function `main':
 * main.c:(.text+0x166): undefined reference to `mygetline'
 * collect2: error: ld returned 1 exit status
 */