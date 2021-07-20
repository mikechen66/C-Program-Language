
/* Fig.5.15 Preorder traversal function */

#include <stdio.h>

typedef struct NODE *pNODE;

struct NODE {
    char nodeLabel;
    pNODE leftmostChild, rightSibling;
};

void preorder(pNODE n) {
    pNODE c; /* a child of node n */

    printf("/%c\n", n->nodeLabel);
    c = n->leftmostChild;
    while (c != NULL) {
        preorder(c);
        c = c->rightSibling;
    }
}