
/* Fig.2.19 Recursive function to compute n! for n >= 1. */

int fact(int n) {
    if (n <= 1)
        return 1; /* basis */
    else
        return n*fact(n-1); /* induction */
}