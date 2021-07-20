
/* Fig.3.5 Counting factors of 2 in a positive integer n */

int PowersOfTwo(int n) {
    int i;
    i = 0;
    while (n%2 == 0) {
        n = n/2;
        i++;
    }
    return i;
}