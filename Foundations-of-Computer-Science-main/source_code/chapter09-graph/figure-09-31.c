
/* Fig.9.31 Exploring a graph by exploring as many trees as necessary */

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
}  GRAPH[MAX];

void dfs(NODE u, GRAPH G) {
    LIST p; /* runs down the adjacency list of u */
    NODE v; /* the node in the cell pointed to by p */

    G[u].mark = VISITED;
    p = G[u].successors;
    while (p != NULL) {
        v = p->nodeName;
        if (G[v].mark == UNVISITED)
            dfs(v, G);
        p = p->next;
    }
}

void dfsForest(GRAPH G) {
    NODE u;

    for (u = 0; u < MAX; u++)
        G[u].mark = UNVISITED;
    for (u = 0; u < MAX; u++)
        if (G[u].mark == UNVISITED)
            dfs(u, G);
}

