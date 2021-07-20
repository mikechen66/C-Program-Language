
/* Auxiliary Functions for Dijkstra’s Algorithm
 * It includes the lines of code from 9.44 to 9.47 
 */

#include <stdio.h>

#define MAX 100
#define INFTY 1E30

typedef int NODE;
typedef int POTNODE;

typedef struct CELL *LIST;
struct CELL {
    NODE nodeName;
    float nodeLabel;
    LIST next;
};

typedef struct {
    float dist;
    LIST successors;
    POTNODE toPOT;
} GRAPH[MAX];

typedef NODE POT[MAX+1];

GRAPH graph;
POT potNodes;
POTNODE last;

/* Fig.9.44 Function to swap two nodes of the partially ordered tree */

void swap(POTNODE a, POTNODE b, GRAPH G, POT P) {
    NODE temp; /* used to swap POT nodes */

    temp = P[b];
    P[b] = P[a];
    P[a] = temp;
    G[P[a]].toPOT = a;
    G[P[b]].toPOT = b;
}


/* Figure 9.45 Bubbling nodes up and down the partially ordered tree */

float priority(POTNODE a, GRAPH G, POT P) {
    return G[P[a]].dist;
}

void bubbleUp(POTNODE a, GRAPH G, POT P) {
    if ((a > 1) &&
            (priority(a, G, P) < priority(a/2, G, P))) {
        swap(a, a/2, G, P);
        bubbleUp(a/2, G, P);
    }
}

void bubbleDown(POTNODE a, GRAPH G, POT P, int last) {
    POTNODE child;

    child = 2*a;
    if (child < last &&
            priority(child+1, G, P) < priority(child, G, P))
        ++child;
    if (child <= last &&
            priority(a, G, P) > priority(child, G, P)) {
        swap(a, child, G, P);
        bubbleDown(child, G, P, last);
    }
}

/* Fig.9.46 Initialization for Dijkstra’s algorithm */

void initialize(GRAPH G, POT P, int *pLast) {
    int i; /* we use i as both a graph and a tree node */

    for (i = 0; i < MAX; i++) {
        G[i].dist = INFTY;
        G[i].toPOT = i+1;
        P[i+1] = i;
    }
    G[0].dist = 0;
    (*pLast) = MAX;
}

/* Fig.9.47 The main function for Dijkstra’s algorithm */

void Dijkstra(GRAPH G, POT P, int *pLast) {
    NODE u, v; /* v is the node we select to settle */
    LIST ps;   /* ps runs down the list of successors of v;
                * u is the successor pointed to by ps */

    initialize(G, P, pLast);
    while ((*pLast) > 1) {
        v = P[1];
        swap(1, *pLast, G, P);
        --(*pLast);
        bubbleDown(1, G, P, *pLast);
        ps = G[v].successors;
        while (ps != NULL) {
            u = ps->nodeName;
            if (G[u].dist > G[v].dist + ps->nodeLabel) {
                G[u].dist = G[v].dist + ps->nodeLabel;
                bubbleUp(G[u].toPOT, G, P);
            }
            ps = ps->next;
        }
    }
}