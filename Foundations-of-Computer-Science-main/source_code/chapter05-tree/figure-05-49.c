
/* Fig.5.49 Priority queue operation deletemax implemented by a heap */

void deletemax(int A[], int *pn) {
    swap(A, 1, *pn);
    --(*pn);
    bubbleDown(A, 1, *pn);
}