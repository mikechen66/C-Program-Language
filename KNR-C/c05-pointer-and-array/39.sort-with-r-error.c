
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online c complier since it needs to call the programs (in the same folder)
 * as follows.
 * 
 * numcmp.c
 * readlines-writelines.c 
 * alloc.c
 * 
 * If the program is operated on any online c compiler, it shows the errors in the 
 * end of the program. 
 */ 


#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right,
            int reverse, int (*comp)(void *, void *));

int numcmp(const char *, const char *);

// gcc 39.sort-with-r.c numcmp.c readlines-writelines.c 6.alloc.c
main(int argc, char *argv[])
{
    char c;
    int nlines;
    int numeric = 0;
    int reverse = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch(c) {
            case 'n':
                numeric = 1;
                break;
            case 'r':
                reverse = 1;
                break;
            default:
                printf("find illegal option %c\n", c);
                return 1;
            }
    
    if (argc != 0) {
        printf("Usage: sort -n -r\n");
        return 1;
    }

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort((void **) lineptr, 0, nlines-1, reverse,
            (int (*)(void*, void*))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("input too big to sort\n");
        return 1;
    }
}

void qsort(void *v[], int left, int right,
            int reverse, int (*comp)(void *, void *))
{
    int i, last;
    void swap(void *v[], int, int);

    if (left >= right)
        return;
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++) {
        if (reverse && ((*comp)(v[i], v[left]) > 0))
            swap(v, ++last, i);
        else if (!reverse && ((*comp)(v[i], v[left]) < 0))
            swap(v, ++last, i);
    }
    swap(v, left, last);
    qsort(v, left, last-1, reverse, comp);
    qsort(v, last+1, right, reverse, comp);
}

void swap(void *v[], int i, int j)
{
    void *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}



/* 
 * Output
 *
 * $gcc -o main *.c
 * main.c:16:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main(int argc, char *argv[])
 * ^~~~
 * /tmp/ccl25jkc.o: In function `main':
 * main.c:(.text+0xc4): undefined reference to `readlines'
 * main.c:(.text+0xd8): undefined reference to `numcmp'
 * main.c:(.text+0x10b): undefined reference to `writelines'
 * collect2: error: ld returned 1 exit status
 */
