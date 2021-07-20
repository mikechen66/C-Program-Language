
/* Fig.5.22 Procedure to compute the height of all the nodes of a tree */

#include <stdio.h>

typedef struct NODE *pNODE;
struct NODE {
    int height;
    pNODE leftmostChild, rightSibling;
};

void computeHt(pNODE n) {
    pNODE c;

    n->height = 0;
    c = n->leftmostChild;
    while (c != NULL) {
        computeHt(c);
        if (c->height >= n->height)
            n->height = 1+c->height;
        c = c->rightSibling;
    }
}