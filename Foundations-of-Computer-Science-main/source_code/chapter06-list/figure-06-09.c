
/* Fig.6.9 Deleting a cell from a doubly linked list */

#include <stdio.h>

typedef struct CELL *LIST;
struct CELL {
    LIST previous;
    int element;
    LIST next;
};

void delete(LIST p, LIST *pL) {
    /* p is a pointer to the cell to be deleted,
     * and pL points to the list */
    if (p->next != NULL)
        p->next->previous = p->previous;
    if (p->previous == NULL) /* p points to first cell */
        (*pL) = p->next;
    else
        p->previous->next = p->next;
}