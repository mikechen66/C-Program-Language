/***
 *
 * Temperature Conversion Program, Celsius to Fahrenheit!
 *
 * print Fahrenheit-Celsius table for fahr = 0,20 ... 300
 *
 ***/

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("C     F\n\n");
    celsius = upper;

    while(celsius >= lower)
    {
        fahr = (float) ((9.0 / 5.0) * celsius + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }

    return 0;
}



/*
 * Output
 * 
 *  C     F
 * 300  572.0
 * 280  536.0
 * 260  500.0
 * 240  464.0
 * 220  428.0
 * 200  392.0
 * 180  356.0
 * 160  320.0
 * 140  284.0
 * 120  248.0
 * 100  212.0
 *  80  176.0
 *  60  140.0
 *  40  104.0
 *  20   68.0
 *   0   32.0
 * /