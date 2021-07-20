/* Fig.9.19 Auxiliaryfunctionsfindandmerge. It includes both 
 * the lines of code in 9.19 and 9.20
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 13

typedef int NODE;

typedef struct EDGE *EDGELIST;
struct EDGE {
    NODE node1, node2;
    EDGELIST next;
};

typedef struct TREENODE *TREE;
struct TREENODE {
    int height;
    TREE parent;
};

TREE find(NODE a, TREE nodes[]);
void merge(TREE x, TREE y);
EDGELIST makeEdges();

/* return the root of the tree containing the tree node x
 * corresponding to graph node a 
 */
TREE find(NODE a, TREE nodes[]) {
    TREE x;

    x = nodes[a];
    while (x->parent != NULL)
        x = x->parent;
    return x;
}

/* merge the trees with roots x and y into one tree, by making 
 * the root of the lower a child of the root of the higher
 */
void merge(TREE x, TREE y) {
    TREE higher, lower;

    if (x->height > y->height) {
        higher = x;
        lower = y;
    }
    else {
        higher = y;
        lower = x;
    }
    lower->parent = higher;
    if (lower->height == higher->height)
        ++(higher->height);
}


main(){
    NODE u;
    TREE a, b;
    EDGELIST e;
    TREE nodes[MAX];

    /* initialize nodes so each node is in a tree by itself */
    for (u = 0; u < MAX; u++) {
        nodes[u] = (TREE) malloc(sizeof(struct TREENODE));
        nodes[u]->parent = NULL;
        nodes[u]->height = 0;
    }

    /* initialize e as the list of edges of the graph */
    e = makeEdges();

    /* examine each edge, and if its ends are in different
     * components, then merge them 
     */
    while (e != NULL) {
        a = find(e->node1, nodes);
        b = find(e->node2, nodes);
        if (a != b)
            merge(a, b);
        e = e->next;
    }
}
