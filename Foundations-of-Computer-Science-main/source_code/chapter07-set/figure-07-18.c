
/* Fig.7.18 Inserting a new fact into a function represented as a linked list */

#include <stdio.h>
#include <string.h>

typedef char DTYPE[32], RTYPE[32];

typedef struct CELL *LIST;
struct CELL {
    DTYPE domain;
    RTYPE range;
    LIST next;
};

void insert(DTYPE a, RTYPE b, LIST *pL) {
    if ((*pL) == NULL) { /* at end of list */
        (*pL) = (LIST) malloc(sizeof(struct CELL));
        strcpy((*pL)->domain, a);
        strcpy((*pL)->range, b);
        (*pL)->next = NULL;
    }
    else if (!strcmp(a, (*pL)->domain)) /* a = domain element; change F(a) */
        strcpy((*pL)->range, b);
    else /* domain element is not a */
        insert(a, b, &((*pL)->next));
};
