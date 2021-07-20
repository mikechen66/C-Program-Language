/* itoa: convert n to characters in s */

/*
 * It has the wrong ouput becuase the program has no main function. 
 */ 


void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0)  /*record sign */
        n = -n;          /* make n positive */
    i = 0;
    do {  /* generate digits in reverse order */
        s[i++] = n % 10 + '0';  /* get next digit */
    } while (( n /= 10) > 0);   /* delete it */

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}



/* 
 * Output
 *
 * $gcc -o main *.c
 * main.c: In function ‘itoa’:
 * main.c:15:5: warning: implicit declaration of function ‘reverse’ [-Wimplicit-function-declaration]
 *     reverse(s);
 *     ^~~~~~~
 * /usr/lib/gcc/x86_64-redhat-linux/7/../../../../lib64/crt1.o: In function `_start':
 * (.text+0x20): undefined reference to `main'
 * /tmp/cca9MICx.o: In function `itoa':
 * main.c:(.text+0xbe): undefined reference to `reverse'
 * collect2: error: ld returned 1 exit status
 */