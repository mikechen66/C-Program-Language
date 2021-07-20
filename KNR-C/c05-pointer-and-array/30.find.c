
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online complier since it need to call the programs in the same folder as 
 * follows
 * 
 * mygetline.c  
 */


#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int mygetline(char *line, int max);

main(int argc, char *argv[])
{
    char line[MAXLINE];
    int found = 0;

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        while (mygetline(line, MAXLINE) > 0)
            if (strstr(line, argv[1]) != NULL) {
                printf("%s", line);
                found++;
            }
    return found;
}