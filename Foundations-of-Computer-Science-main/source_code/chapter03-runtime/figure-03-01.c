
/* Fig.3.1 Inner loop of selection sort */

small = i;
    for(j = i+1; j < n; j++)
        if (A[j] < A[small])
            small = j;