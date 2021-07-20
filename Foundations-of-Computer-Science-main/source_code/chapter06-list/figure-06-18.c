
/* Fig.6.18 Functions to implement stacks by linked lists */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

typedef struct CELL *STACK;
struct CELL {
    int element;
    STACK next;
};

void clear(STACK *pS) {
    (*pS) = NULL;
}

BOOLEAN isEmpty(STACK *pS) {
    return ((*pS) == NULL);
}

BOOLEAN isFull(STACK *pS) {
    return FALSE;
}

BOOLEAN pop(STACK *pS, int *px) {
    if ((*pS) == NULL)
        return FALSE;
    else {
        (*px) = (*pS)->element;
        (*pS) = (*pS)->next;
        return TRUE;
    }
}

BOOLEAN push(int x, STACK *pS) {
    STACK newCell;

    newCell = (STACK) malloc(sizeof(struct CELL));
    newCell->element = x;
    newCell->next = (*pS);
    (*pS) = newCell;
    return TRUE;
}
