
/* Fig.5.51 Heapifying an array */

void heapify(int A[], int n) {
    int i;

    for (i = n/2; i >= 1; i--)
        bubbleDown(A, i, n);
}