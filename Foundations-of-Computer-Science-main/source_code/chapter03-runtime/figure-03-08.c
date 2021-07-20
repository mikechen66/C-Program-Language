
/* Fig.3.8 Selection-sort fragment */

for (i = 0; i < n-1; i++) {
    small = i;
    for (j = i+1; j < n; j++)
        if (A[j] < A[small])
            small = j;
    temp = A[small];
    A[small] = A[i];
    A[i] = temp;
}