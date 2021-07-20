
/* Fig.7.22 Lookup for a function represented by a hash table */

#include <string.h>
#include <stdio.h>
#define B 5

typedef char APPLES[32];

enum MONTHS {Unknown, Jan, Feb, Mar, Apr, May, Jun, Jul, Aug,
            Sep, Oct, Nov, Dec};

typedef struct CELL *LIST;
struct CELL {
    APPLES variety;
    int harvested;
    LIST next;
};

typedef LIST HASHTABLE[B];

int h(APPLES x) {
    int i, sum;

    sum = 0;
    for (i = 0; x[i] != '\0'; i++)
        sum += x[i];
    return sum % B;
}

int lookupBucket(APPLES a, LIST L) {
    if (L == NULL)
        return Unknown;
    if (!strcmp(a, L->variety)) /* found */
        return L->harvested;
    else /* a not found; examine tail */
        return lookupBucket(a, L->next);
}

int lookup(APPLES a, HASHTABLE H) {
    return lookupBucket(a, H[h(a)]);
}

