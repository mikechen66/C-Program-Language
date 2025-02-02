
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online c complier since it needs to call the programs (in the same folder)
 * as follows.
 * 
 * getch.c
 * 
 * If the program is operated on any online c compiler, it shows the errors in the 
 * end of the program. 
 */ 


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };

void dcl(void);
void dirdcl(void);

int gettoken(void);
int tokentype;  // type of last token
char token[MAXTOKEN];   // last token string
char name[MAXTOKEN];    // identifier name
char datatype[MAXTOKEN];    // data type = char, int, etc.
char out[1000]; // output string

// gcc 42.dcl.c getch.c
main()
{
    while (gettoken() != EOF) { // 1st token on line
        strcpy(datatype, token);
        out[0] = '\0';
        dcl();
        if (tokentype != '\n')
            printf("syntax error\n");
        printf("%s: %s %s\n", name, out, datatype);
    }

    return 0;
}

void dcl(void)
{
    int ns;

    for (ns = 0; gettoken() == '*';)
        ns++;

    dirdcl();
    while (ns-- > 0)
        strcat(out, " pointer to");
}

void dirdcl(void)
{
    int type;

    if (tokentype == '(') {
        dcl();

        if (tokentype != ')')
            printf("error: missing )\n");
    } else if (tokentype == NAME)
        strcpy(name, token);
    else
        printf("error: expected name or (dcl)\n");

    while ((type = gettoken()) == PARENS || type == BRACKETS)
        if (type == PARENS)
            strcat(out, " function returning");
        else {
            strcat(out, " array");
            strcat(out, token);
            strcat(out, " of");
        }
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
 * main.c:20:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * /tmp/ccIBgzPn.o: In function `gettoken':
 * main.c:(.text+0x236): undefined reference to `getch'
 * main.c:(.text+0x250): undefined reference to `getch'
 * main.c:(.text+0x288): undefined reference to `ungetch'
 * main.c:(.text+0x2ba): undefined reference to `getch'
 * main.c:(.text+0x343): undefined reference to `getch'
 * main.c:(.text+0x36f): undefined reference to `ungetch'
 * collect2: error: ld returned 1 exit status
 */
