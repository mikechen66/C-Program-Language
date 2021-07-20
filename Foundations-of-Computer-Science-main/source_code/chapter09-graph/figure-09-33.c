
/* Fig.9.33 Procedure to number the nodes of a directed graph in postorder */

#include <stdio.h>

#define MAX 100

typedef int NODE;

typedef struct CELL *LIST;
struct CELL {
    NODE nodeName;
    LIST next;
};

enum MARKTYPE {VISITED, UNVISITED};
typedef struct {
    enum MARKTYPE mark;
    LIST successors;
    int postorder;
}  GRAPH[MAX];

int k; /* counts visited nodes */

void dfs(NODE u, GRAPH G) {
    LIST p; /* points to cells of adjacency list of u */
    NODE v; /* the node in the cell pointed to by p */

    G[u].mark = VISITED;
    p = G[u].successors;
    while (p != NULL) {
        v = p->nodeName;
        if (G[v].mark == UNVISITED)
            dfs(v, G);
        p = p->next;
    }
    ++k;
    G[u].postorder = k;
}

void dfsForest(GRAPH G) {
    NODE u;

    k = 0;
    for (u = 0; u < MAX; u++)
        G[u].mark = UNVISITED;
    for (u = 0; u < MAX; u++)
        if (G[u].mark == UNVISITED)
            dfs(u, G);
}
