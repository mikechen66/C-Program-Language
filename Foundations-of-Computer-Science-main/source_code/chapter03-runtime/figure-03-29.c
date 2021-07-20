
/* Fig.3.29 Recursive selection sort */


if (i < n-1) {
    small = i;
    
    for (j = i+1; j < n; j++)
        if (A[j] < A[small])
            small = j;
    temp = A[small];
    A[small] = A[i];
    A[i] = temp;
    recSS(A, i+1, n);
}
