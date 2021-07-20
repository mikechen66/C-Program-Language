
/* Fig.4.23 Finding an element x in an array A of size n */

BOOLEAN find(int x, int A[], int n) {
    int i;
    
    for(i = 0; i < n; i++)
        if(A[i] == x)
            return TRUE;
    return FALSE;
}