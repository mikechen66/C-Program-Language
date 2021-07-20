
/* Fig.2.22 Recursive selection sort */

void recSS(int A[], int i, int n) {
    int j, small, temp;
    if (i < n-1) { 
        /* basis is when i = n-1, in which case */
        /* the function returns without changing A */
        /* induction follows */
        small = i;
        for (j = i+1; j < n; j++)
            if (A[j] < A[small])
                small = j;
            temp = A[small];
            A[small] = A[i];
            A[i] = temp;
            recSS(A, i+1, n);
    }
}