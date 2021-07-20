
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online c complier since it needs to call the programs (in the same folder) 
 * as follows
 * 
 * getch.c
 * 
 * 44.undcl.test 
 *
 * If the program is operated on any online c compiler, it shows the errors in the 
 * end of the program. 
 *
 * Exercise 5-19. Modify undcl so that it does not add redundant parentheses to declarations.
 * undcl: convert word description to declaration
 * 
 * e.g.
 * x * int  ->  int *x
 * argv * * char  ->  char **argv
 * daytab * [] int  ->  int (*daytab)[]
 * daytab [] * int  ->  int *daytab[]
 * comp () * void  ->  void *comp()
 * comp * () void  ->  void (*comp)()
 * x () * [] * () char  ->  char (*(*x())[])()
 * x [] * () * [] char  ->  char (*(*x[])())[]
 */


#include <stdio.h>
#include <string.h>

#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };

int gettoken(void);
int tokentype;  // type of last token
char token[MAXTOKEN];   // last token string
char out[1000]; // output string

// gcc 44.undcl.c getch.c
// cat 44.undcl.test | ./a.out
main()
{
    int type;
    char temp[MAXTOKEN];

    while (gettoken() != EOF) {
        strcpy(out, token);
        while ((type = gettoken()) != '\n') {
            if (type == PARENS) {
                if (out[0] == '*') {
                    sprintf(temp, "(%s)", out);
                    strcpy(out, temp);
                }
                strcat(out, token);
            } else if (type == BRACKETS) {
                if (out[0] == '*' || strstr(out, "()") != NULL) {
                    sprintf(temp, "(%s)", out);
                    strcpy(out, temp);
                }
                strcat(out, token);
            } else if (type == '*') {
                sprintf(temp, "*%s", out);
                strcpy(out, temp);
            } else if (type == NAME) {
                sprintf(temp, "%s %s", token, out);
                strcpy(out, temp);
            } else
                printf("invalid input at %s\n", token);
        }

        printf("%s\n", out);
    }
    return 0;
}


int gettoken(void)
{
    int c, getch(void);
    void ungetch(int);
    char *p = token;

    while ((c = getch()) == ' ' || c == '\t')
        ;

    if (c == '(') {
        if ((c = getch()) == ')') {
            strcpy(token, "()");
            return tokentype = PARENS;
        } else {
            ungetch(c);
            return tokentype = '(';
        }
    } else if (c == '[') {
        for (*p++ = c; (*p++ = getch()) != ']'; )
            ;
        *p = '\0';
        return tokentype = BRACKETS;
    } else if (isalpha(c)) {
        for (*p++ = c; isalnum(c = getch()); )
            *p++ = c;
        *p = '\0';
        ungetch(c);
        return tokentype = NAME;
    } else {
        return tokentype = c;
    }
}



/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c:30:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * main.c: In function ‘gettoken’:
 * main.c:88:16: warning: implicit declaration of function ‘isalpha’ [-Wimplicit-function-declaration]
 *     } else if (isalpha(c)) {
                ^~~~~~~
 * main.c:89:24: warning: implicit declaration of function ‘isalnum’ [-Wimplicit-function-declaration]
         for (*p++ = c; isalnum(c = getch()); )
                        ^~~~~~~
 * /tmp/cc5tkzYh.o: In function `gettoken':
 * main.c:(.text+0x19a): undefined reference to `getch'
 * main.c:(.text+0x1b4): undefined reference to `getch'
 * main.c:(.text+0x1ec): undefined reference to `ungetch'
 * main.c:(.text+0x21e): undefined reference to `getch'
 * main.c:(.text+0x287): undefined reference to `getch'
 * main.c:(.text+0x2a9): undefined reference to `ungetch'
 * collect2: error: ld returned 1 exit status
 */
