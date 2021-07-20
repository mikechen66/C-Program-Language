
/* Fig.7.6 Computing the union of sets represented by sorted lists */

#include <stdio.h>

typedef struct CELL *LIST;
struct CELL {
    int element;
    LIST next;
};

LIST setUnion(LIST L, LIST M);
LIST assemble(int x, LIST L, LIST M);

/* assemble produces a list whose head element is x and
   whose tail is the union of lists L and M */

LIST assemble(int x, LIST L, LIST M) {
    LIST first;

    first = (LIST) malloc(sizeof(struct CELL));
    first->element = x;
    first->next = setUnion(L, M);
    return first;
   }

/* setUnion returns a list that is the union of L and M */

LIST setUnion(LIST L, LIST M) {
    if (L == NULL && M == NULL)
        return NULL;
    else if (L == NULL) /* M cannot be NULL here */
        return assemble(M->element, NULL, M->next);
    else if (M == NULL) /* L cannot be NULL here */
        return assemble(L->element, L->next, NULL);
    /* if we reach here, neither L nor M can be NULL */
    else if (L->element == M->element)
        return assemble(L->element, L->next, M->next);
    else if (L->element < M->element)
        return assemble(L->element, L->next, M);
    else /* here, M->element < L->element */
        return assemble(M->element, L, M->next);
}
