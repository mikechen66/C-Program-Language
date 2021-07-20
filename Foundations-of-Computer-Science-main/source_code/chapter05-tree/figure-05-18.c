
/* Fig.5.18 Action of recursive function postorder on tree of Fig.5.14 */ 

#include <stdio.h>

typedef struct NODE *pNODE;

struct NODE {
    char nodeLabel;
    pNODE leftmostChild, rightSibling;
};

void postorder(pNODE n) {
    pNODE c; /* a child of node n */

    c = n->leftmostChild;
    while (c != NULL) {
        postorder(c);
        c = c->rightSibling;
    }
    printf("/%c\n", n->nodeLabel);
}