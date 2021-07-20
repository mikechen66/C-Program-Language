#include <stdio.h>

void strcat(char s[], char t[]);

main()
{
}

void strcat(char s[], cahr t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}



/* 
 * Output
 * 
 * in.c:3:6: warning: conflicting types for built-in function ‘strcat’
 * void strcat(char s[], char t[]);
 *     ^~~~~~
 * main.c:5:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * main.c:9:23: error: unknown type name ‘cahr’
 * void strcat(char s[], cahr t[])
 *                      ^~~~
 */