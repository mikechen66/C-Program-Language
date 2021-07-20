
/* Fig.6.12 Function that does lookup with a sentinel */

#define MAX 100

typedef int BOOLEAN;

typedef struct {
    int A[MAX];
    int length;
}  LIST;

BOOLEAN lookup(int x, LIST *pL) {
    int i;

    pL->A[pL->length] = x;
    i = 0;
    while (x != pL->A[i])
        i++;
    return (i < pL->length);
}