
/* Fig.5.47 Priority queue operation insert implemented on a heap */ 

void insert(int A[], int x, int *pn) {
    (*pn)++;
    A[*pn] = x;
    bubbleUp(A, *pn);
}