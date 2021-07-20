
/* Fig.6.6 Lookup on a sorted list */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

typedef struct CELL *LIST;
struct CELL {
    int element;
    LIST next;
};

BOOLEAN lookup(int x, LIST L) {
    if (L == NULL)
        return FALSE;
    else if (x > L->element)
        return lookup(x, L->next);
    else if (x == L->element)
        return TRUE;
    else 
        /* here x < L->element, and so x could not be
         * on the sorted list L */
        return FALSE;
}