
/* Fig.7.8 Computing the intersection of sets represented by sorted 
 * lists. A new version of assemble is required.    
 */

#include <stdio.h>

typedef struct CELL *LIST;
struct CELL {
    int element;
    LIST next;
};

LIST intersection(LIST L, LIST M);
LIST assemble(int x, LIST L, LIST M);

/* assemble produces a list whose head element is x and
   whose tail is the union of lists L and M */

LIST assemble(int x, LIST L, LIST M) {
    LIST first;

    first = (LIST) malloc(sizeof(struct CELL));
    first->element = x;
    first->next = intersection(L, M);
    return first;
}

LIST intersection(LIST L, LIST M) {
    if (L == NULL || M == NULL)
        return NULL;
    else if (L->element == M->element)
        return assemble(L->element, L->next, M->next);
    else if (L->element < M->element)
        return intersection(L->next, M);
    else /* here, M->element < L->element */
        return intersection(L, M->next);
}
