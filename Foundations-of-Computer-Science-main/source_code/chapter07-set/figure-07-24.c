
/* Fig.7.24 Lookup in a binary relation represented by a linked list */

#include <stdio.h>
#include <string.h>

typedef char PVARIETY[32];

typedef struct RCELL *RLIST;
struct RCELL {
    PVARIETY variety;
    PVARIETY pollinizer;
    RLIST next;
};

typedef struct PCELL *PLIST;
struct PCELL {
    PVARIETY pollinizer;
    PLIST next;
};

PLIST lookup(PVARIETY a, RLIST L) {
    PLIST P;

    if (L == NULL)
        return NULL;
    else if (!strcmp(L->variety, a)) /* L->variety == a */ {
        P = (PLIST) malloc(sizeof(struct PCELL));
        strcpy(P->pollinizer, L->pollinizer);
        P->next = lookup(a, L->next);
        return P;
    }
    else /* a not the domain value of current pair */
        return lookup(a, L->next);
}
