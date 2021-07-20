
/* Fig.5.35. Function insert(x,T) adds x to T */

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

TREE insert(ETYPE x, TREE T) {
    if (T == NULL) {
        T = (TREE) malloc(sizeof(struct NODE));
        T->element = x;
        T->leftChild = NULL;
        T->rightChild = NULL;
    }
    else if (x < T->element)
        T->leftChild = insert(x, T->leftChild);
    else if (x > T->element)
        T->rightChild = insert(x, T->rightChild);
    return T;
}