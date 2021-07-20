/*
 * Filename:    rftoc.c
 * Author:      Thomas van der Burgt <thomas@thvdburgt.nl>
 * Date:        25-FEB-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-5, page 14
 *
 * Modify the temparature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("  F    C  \n");
    printf("----------\n");

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
    return EXIT_SUCCESS;
}



/*
 * Output
 *  F    C  
 *----------
 * 300  148.9
 * 280  137.8
 * 260  126.7
 * 240  115.6
 * 220  104.4
 * 200   93.3
 * 180   82.2
 * 160   71.1
 * 140   60.0
 * 120   48.9
 * 100   37.8
 *  80   26.7
 *  60   15.6
 *  40    4.4
 *  20   -6.7
 *  0  -17.8
 */