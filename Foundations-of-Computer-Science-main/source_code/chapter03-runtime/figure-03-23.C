
/* Fig.3.23 Program to compute n! */

int fact(int n) {
    if (n <= 1)
        return 1; /* basis */
    else
        return n * fact(n-1); /* induction */
}