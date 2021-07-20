
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the oneline complier since it need to call the programs in the same folder
 * as follows
 * 
 * mygetline.c
 * 
 * If the program is called on any online c compiler, it show the errors in the 
 * end of the program. 
 */ 


#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

double atof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        i++;

    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    int eSign = 1;
    if (s[i] == 'e' || s[i] == 'E') {
        if (s[++i] == '-') {
            eSign = -1;
            i++;
        }
    }

    double ePower = 1.0;
    if (isdigit(s[i])) {
        int eCount = s[i] - '0';
        while (eCount-- > 0)
            ePower *= 10.0


int mygetline(char s[], int lim)
{
    int c, i;
    i =0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
};
    }

    double result = sign * val / power;

    if (eSign > 0)
        result *= ePower;
    else
        result /= ePower;

    return result;
}


// compile with the excerpted lines of code from both atof.c and mygetline.c
main()
{
    double sum, atof(char []);
    char line[MAXLINE];
    int mygetline(char line[], int max);

    sum = 0;
    while (mygetline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}



/* 
 * Output
 *
 * main()
 * ^~~~
 * /tmp/ccGJMd2g.o: In function `main':
 * main.c:(.text+0x72): undefined reference to `mygetline'
 * collect2: error: ld returned 1 exit status
 */