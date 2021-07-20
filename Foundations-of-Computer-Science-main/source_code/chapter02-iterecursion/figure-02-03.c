
/* Fig.2.3 A sorting program using selection sort */

#include <stdio.h>

#define MAX 100

int A[MAX];
void SelectionSort(int A[], int n);

main() {
    int i, n;
    /* read and store input in A */
    for (n = 0; n < MAX && scanf("/%d", &A[n]) != EOF; n++);
    SelectionSort(A,n);  /* sort A */
    for (i = 0; i < n; i++)
        printf("/%d\n", A[i]);  /* print A */
}

void SelectionSort(int A[], int n) {
    int i, j, small, temp;
    for (i = 0; i < n-1; i++) {
        small = i;
        for (j = i+1; j < n; j++)
            if (A[j] < A[small])
                small = j;
        temp = A[small];
        A[small] = A[i];
        A[i] = temp;
    }
}