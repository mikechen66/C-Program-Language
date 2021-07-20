
/* Fig.6.5 Inserting an element */

#include <stdio.h>

typedef struct CELL *LIST;
struct CELL {
    int element;
    LIST next;
};

void insert(int x, LIST *pL) {
    if ((*pL) == NULL) {
        (*pL) = (LIST) malloc(sizeof(struct CELL));
        (*pL)->element = x;
        (*pL)->next = NULL;
    }
    else if (x != (*pL)->element)
        insert(x, &((*pL)->next));
}