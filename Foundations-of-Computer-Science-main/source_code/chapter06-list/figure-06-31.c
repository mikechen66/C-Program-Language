
/* Fig.6.31 C fragment to fill the LCS table */

for (j = 0; j <= n; j++)
    L[0][j] = 0;
for (i = 1; i <= m; i++) {
    L[i][0] = 0;
    for (j = 1; j <= n; j++)
        if (a[i] != b[j])
            if (L[i-1][j] >= L[i][j-1])
                L[i][j] = L[i-1][j];
            else
                L[i][j] = L[i][j-1];
        else 
            /* a[i] == b[j] */
            L[i][j] = 1 + L[i-1][j-1];
}
