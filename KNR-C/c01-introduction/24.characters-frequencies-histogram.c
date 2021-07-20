#include <stdio.h>

main()
{
    int histogram[26];
    int c, i, j;

    for (i = 0; i <= 26; ++i)
        histogram[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            histogram[c - 'a']++;
        }
    }

    for (i = 0; i < 26; ++i) {
        printf("%c: ", 'a' + i);
        for (j = 0; j < histogram[i]; ++j) {
            putchar('#');
        }
        putchar('\n');
    }
}


/*
 * Output
 * 
 * a: 
 * b: 
 * c: 
 * d: 
 * e: 
 * f: 
 * g: 
 * h: 
 * i: 
 * j: 
 * k: 
 * l: 
 * m: 
 * n: 
 * o: 
 * p: 
 * q: 
 * r: 
 * s: 
 * t: 
 * u: 
 * v: 
 * w: 
 * x: 
 * y: 
 * z: 
 */