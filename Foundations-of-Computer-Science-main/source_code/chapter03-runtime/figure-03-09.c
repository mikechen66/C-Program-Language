
/* Fig.3.9 Example of an if-else selection statement. */

if (A[1][1] == 0)
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        A[i][j] = 0;
else
    for (i = 0; i < n; i++)
        A[i][i] = 1;