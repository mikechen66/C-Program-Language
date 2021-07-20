
/* Fig.9.36 Function to determine whether a graph G is acyclic  */

BOOLEAN testAcyclic(GRAPH G) {
    NODE u, v;  /* u runs through all the nodes */
    LIST p;     /* p points to each cell on the adjacency list
                 * for u; v is a node on the adjacency list */

    dfsForest(G); 
    for(u = 0; u < MAX; u++) {
        p = G[u].successors; 
        while (p != NULL) {
            v = p->nodeName;
            if (G[u].postorder <= G[v].postorder)
                return FALSE;
            p = p->nex
        }
    }
    return TRUE;
}