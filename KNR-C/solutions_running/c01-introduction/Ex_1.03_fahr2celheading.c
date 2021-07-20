/***
 *
 * Exercise 1-3. Modify the temperature conversion program, 
 * Fahrenheit to Celsius, to print a heading above the table.
 *
 * print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; 
 * floating-point version.
 *
 ***/

#include<stdio.h>

int main(void)
{
    printf("A program print Fahrenheit-Celsius\n");

    float fahr, celsius;
        int lower, upper, step;
  
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    
        printf("Fahr\tCelsius\t \n");
      
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
                printf("%4.0f %10.1f\n", fahr, celsius);
                fahr = fahr + step;
    }

    return 0;
}



/*
 * Output
 *
 * A program print Fahrenheit-Celsius
 * Fahr    Celsius  
 *   0      -17.8
 *  20       -6.7
 *  40        4.4
 *  60       15.6
 *  80       26.7
 * 100       37.8
 * 120       48.9
 * 140       60.0
 * 160       71.1
 * 180       82.2
 * 200       93.3
 * 220      104.4
 * 240      115.6
 * 260      126.7
 * 280      137.8
 * 300      148.9
 * /