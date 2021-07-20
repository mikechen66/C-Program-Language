
/* 3.18 Program for Exercise 3.7.2 */

for (i = 0; i < n-1; i++)
    for (j = i+1; j < n; j++)
        for (k = i; k < n; k++)
            A[j][k] = A[j][k] - A[i][k]*A[j][i]/A[i][i];