
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

#define MAXLINE 100

// compile with atof.c, mygetline.c
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