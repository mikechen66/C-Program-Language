
/* Fig.5.46 The function swap exchanges array elements, 
 * and the function bubbleUp pushes a new element of a 
 * heap into its rightful place.
 */

void swap(int A[], int i, int j) {
    int temp;

    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void bubbleUp(int A[], int i) {
    if (i > 1 && A[i] > A[i/2]) {
        swap(A, i, i/2);
        bubbleUp(A, i/2);
    }
}