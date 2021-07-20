
/* Fig.7.14 Inserting an element into a hash table */ 

#include <string.h>
#include <stdio.h>
#define B 5

typedef char ETYPE[32];

typedef struct CELL *LIST;
struct CELL {
    ETYPE element;
    LIST next;
};

typedef LIST HASHTABLE[B];

int h(ETYPE x) {
    int i, sum;

    sum = 0;
    for (i = 0; x[i] != '\0'; i++)
        sum += x[i];
    return sum % B;
}

void bucketInsert(ETYPE x, LIST *pL) {
    if ((*pL) == NULL) {
        (*pL) = (LIST) malloc(sizeof(struct CELL));
        strcpy((*pL)->element, x);
        (*pL)->next = NULL;
    }
    else if (strcmp((*pL)->element, x)) /* x and element
                are different */
        bucketInsert(x, &((*pL)->next));
}

void insert(ETYPE x, HASHTABLE H) {
    bucketInsert(x, &(H[h(x)]));
}

