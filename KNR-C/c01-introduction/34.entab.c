#include <stdio.h>

#define MAXLINE 1000

int myGetline(char line[], int maxline);

main()
{
    int c, len;
    int i;
    char line[MAXLINE];
    int tabstop;

    tabstop = 8;
    while ((len = myGetline(line, MAXLINE)) > 0) {

        spaceCount = 0;

        for (i = 0; i < len; ++i) {
            if (line[i] == ' ')
                spaceCount++;
            else
                spaceCount = 0;

            if (spaceCount == tabstop) {
            }
        }
        printf("%s", line);
    }
}

int myGetline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}



/*
 * Output
 * 
 * $gcc -o main *.c
 * main.c:7:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * main.c: In function ‘main’:
 * main.c:17:9: error: ‘spaceCount’ undeclared (first use in this function)
 *        spaceCount = 0;
 *       ^~~~~~~~~~
 * main.c:17:9: note: each undeclared identifier is reported only once for each function it appears in
 */