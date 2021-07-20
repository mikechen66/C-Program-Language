
/* Fig.3.19 Program for Exercise 3.7.3 */

for (i = 1; i <= n; i++) {
    m = 0;
    j = i;
    while (j%2 == 0) {
        j = j/2;
        m++;
    }
}
