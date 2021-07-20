
/* Fig.1.10 C program to count number of input characters */ 

#include <stdio.h>

main() {
    int num;
    num = 0;
    while (getchar() != EOF)
        ++num; /* add 1 to num */
    printf("/%d\n", num);
}