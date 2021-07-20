#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main() {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;  /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;  /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/* 
 * Output
 * 
 *   0    -17
 *   0     -6
 *  40      4
 *  60     15
 *  80     26
 * 100     37
 * 120     48
 * 140     60
 * 160     71
 * 180     82
 * 200     93
 * 220    104
 * 240    115
 * 260    126
 * 280    137
 * 300    148