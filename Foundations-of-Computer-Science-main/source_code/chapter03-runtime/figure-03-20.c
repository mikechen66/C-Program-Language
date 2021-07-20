
/* Fig.3.20 Program for Exercise 3.7.4 */

int prime(int n) {
    int i;
    i = 2;
    while (i*i <= n)
        if (n%i == 0)
            return FALSE;
        else
            i++;
    return TRUE;
}