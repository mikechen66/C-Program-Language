
/* Fig.4.10 Recursive function to compute (n,m) */

/* Compute n choose m for 0 <= m <= n */
int choose(int n, int m) {
    int n, m;

    if (m < 0 || m > n) {/* error conditions */
        printf("invalid input\n");
        return 0;
    }
    else if (m == 0 || m == n) /* basis case */
        return 1;
    else 
        /* induction */
        return (choose(n-1, m-1) + choose(n-1, m));
}