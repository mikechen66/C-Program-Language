
/* Fig.6.14 Function that does lookup using binary search */

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

BOOLEAN binsearch(int x, int A[], int low, int high) {
    int mid;

    if (low > high)
        return FALSE;
    else {
        mid = (low + high)/2;
        if (x < A[mid])
            return binsearch(x, A, low, mid-1);
        else if (x > A[mid])
            return binsearch(x, A, mid+1, high);
        else 
            /* x == A[mid] */
            return TRUE;
    }
}