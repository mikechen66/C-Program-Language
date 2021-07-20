
/* Fig.5.54 Heapsorting an array */

#include <stdio.h>

#define MAX 100

int A[MAX+1];

void bubbleDown(int A[], int i, int n);
void deletemax(int A[], int *pn);
void heapify(int A[], int n);
void heapsort(int A[], int n);
void swap(int A[], int i, int j);

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

void insert(int A[], int x, int *pn) {
    (*pn)++;
    A[*pn] = x;
    bubbleUp(A, *pn);
}

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

void deletemax(int A[], int *pn) {
    swap(A, 1, *pn);
    --(*pn);
    bubbleDown(A, 1, *pn);
}

void heapify(int A[], int n) {
    int i;

    for (i = n/2; i >= 1; i--)
        bubbleDown(A, i, n);
}


main() {
    int i, n, x;

    n = 0;
    while (n < MAX && scanf("/%d", &x) != EOF)
        A[++n] = x;
    heapsort(A, n);
    for (i = 1; i <= n; i++)
        printf("/%d\n", A[i]);
}

void heapsort(int A[], int n)
{
    int i;

    heapify(A, n);
    i = n;
    while (i > 1)
        deletemax(A, &i);
}