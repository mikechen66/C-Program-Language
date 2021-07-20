
/* Fig.3.7 Program fragment to make A an identity matrix */

scanf("%d",&n);

for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    A[i][j] = 0;

for (i = 0; i < n; i++)
    A[i][i] = 1;