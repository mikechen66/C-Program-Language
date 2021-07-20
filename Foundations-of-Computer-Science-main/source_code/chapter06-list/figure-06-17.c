
/* Fig.6.17 Functions to implement stack operations on arrays */

#define TRUE 1
#define FALSE 0
#define MAX 100

typedef int BOOLEAN;

typedef struct {
    int A[MAX];
    int top;
}  STACK;

void clear(STACK *pS) {
    pS->top = -1;
}

BOOLEAN isEmpty(STACK *pS) {
    return (pS->top < 0);
}

BOOLEAN isFull(STACK *pS) {
    return (pS->top >= MAX-1);
}

BOOLEAN pop(STACK *pS, int *px) {
    if (isEmpty(pS))
        return FALSE;
    else {
        (*px) = pS->A[(pS->top)--];
        return TRUE;
    }
}

BOOLEAN push(int x, STACK *pS) {
    if (isFull(pS))
        return FALSE;
    else {
        pS->A[++(pS->top)] = x;
        return TRUE;
    }
}

