
/* Fig.6.11 Function that does lookup by linear search */

#define TRUE 1
#define FALSE 0
#define MAX 100

typedef int BOOLEAN;

typedef struct {
    int A[MAX];
    int length;
}  LIST;

BOOLEAN lookup(int x, LIST *pL) {
    int i;

    for (i = 0; i < pL->length; i++)
        if (x == pL->A[i])
            return TRUE;
    return FALSE;
}