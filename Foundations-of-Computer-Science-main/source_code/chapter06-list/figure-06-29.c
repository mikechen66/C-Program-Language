
/* Fig.6.29 Procedures to implement linked-list queue operations */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

typedef struct CELL *LIST;
struct CELL {
    int element;
    LIST next;
};

typedef struct {
    LIST front, rear;
} QUEUE;

void clear(QUEUE *pQ) {
    pQ->front = NULL;
}

BOOLEAN isEmpty(QUEUE *pQ) {
    return (pQ->front == NULL);
}

BOOLEAN isFull(QUEUE *pQ) {
    return FALSE;
}

BOOLEAN dequeue(QUEUE *pQ, int *px) {
    if (isEmpty(pQ))
        return FALSE;
    else {
        (*px) = pQ->front->element;
        pQ->front = pQ->front->next;
        return TRUE;
    }
}

BOOLEAN enqueue(int x, QUEUE *pQ) {
    if (isEmpty(pQ)) {
        pQ->front = (LIST) malloc(sizeof(struct CELL));
        pQ->rear = pQ->front;
    }
    else {
        pQ->rear->next = (LIST) malloc(sizeof(struct CELL));
        pQ->rear = pQ->rear->next;
    }
    pQ->rear->element = x;
    pQ->rear->next = NULL;
    return TRUE;
}
