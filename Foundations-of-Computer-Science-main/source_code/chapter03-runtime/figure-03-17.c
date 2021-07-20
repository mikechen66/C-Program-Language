
/* Fig.3.17 Program for Exercise 3.7.1 */

#include <stdio.h>

#define MAX 100

int A[MAX];

main() {
    int closest, i, n;
    float avg, sum;

    for (n = 0; n < MAX && scanf("%d", &A[n]) != EOF; n++);
    sum = 0;
    for (i = 0; i < n; i++)
        sum += A[i];
    
    avg = sum/n;
    closest = 0;
    i = 1;

    while (i < n) {
        /* squaring elements in the test below eliminates the need 
         * to distinguish positive and negative differences 
         */
        if ((A[i]-avg)*(A[i]-avg) <
                (A[closest]-avg)*(A[closest]-avg))
            closest = i;
        i++;
    }
    printf("%d\n",closest);
}