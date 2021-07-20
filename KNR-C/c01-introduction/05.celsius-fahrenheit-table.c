#include <stdio.h> 

main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;  /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;  /* step size */

    celsius = lower;

    printf("Celsius-Fahrenheit table\n");
    while (celsius <= upper) {
        fahr = celsius / (5.0 / 9.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        fahr = fahr + step;
        celsius += step;
    }
}


/*
 * Output
 * 
 * main.c:9:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main.c:20:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
 * main.c:20:5: warning: incompatible implicit declaration of built-in function ‘printf’
 * main.c:20:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
 * Celsius-Fahrenheit table
 *   0   32.0
 *  20   68.0
 *  40  104.0
 *  60  140.0
 *  80  176.0
 * 100  212.0
 * 120  248.0
 * 140  284.0
 * 160  320.0
 * 180  356.0
 * 200  392.0
 * 220  428.0
 * 240  464.0
 * 260  500.0
 * 280  536.0
 * 300  572.0
 */