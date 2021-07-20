
/* Fig.2.11 The body of the SelectionSort function */

for (i = 0; i < n-1; i++) {
    small = i;
    for (j = i+1; j < n; j++)
        if (A[j] < A[small])
            small = j;
    temp = A[small];
    A[small] = A[i];
    A[i] = temp;
}
