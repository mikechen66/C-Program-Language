
/* Fig.5.34 Function lookup(x,T) returns TRUE if x is in T, FALSE otherwise */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;
typedef int ETYPE;

typedef struct NODE *TREE;
struct NODE {
    ETYPE element;
    TREE leftChild, rightChild;
};

BOOLEAN lookup(ETYPE x, TREE T) {
    if (T == NULL)
        return FALSE;
    else if (x == T->element)
        return TRUE;
    else if (x < T->element)
        return lookup(x, T->leftChild);
    else 
        /* x must be > T->element */
        return lookup(x, T->rightChild);
}