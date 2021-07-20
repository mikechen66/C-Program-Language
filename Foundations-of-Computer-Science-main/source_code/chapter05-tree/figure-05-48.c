
/* Fig.5.48 bubbleDown pushes a POT violator down to its proper position */ 

void bubbleDown(int A[], int i, int n) {
    int child;

    child = 2*i;
    if (child < n && A[child+1] > A[child])
        ++child;
    if (child <= n && A[i] < A[child]) {
        swap(A, i, child);
        bubbleDown(A, child, n);
    }
}