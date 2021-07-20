
/* Fig.9.27 The recursive depth-first search function */

enum MARKTYPE {VISITED, UNVISITED}; 
typedef struct {
    enum MARKTYPE mark;
    LIST successors;
      } GRAPH[MAX];

/* where LIST is an adjacency list, defined in the 
 * customary manner:
 */
typedef struct CELL *LIST; 
struct CELL {
    NODE nodeName;
    LIST next; 
};


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


