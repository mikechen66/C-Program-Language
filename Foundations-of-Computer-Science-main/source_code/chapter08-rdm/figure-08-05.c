
/* Fig.8.5 Types for a primary and a secondary index */

typedef struct TUPLE *TUPLELIST; 
struct TUPLE {
    int StudentId; 
    char Name[30]; 
    char Address[50]; 
    char Phone[8]; 
    TUPLELIST next;
};

typedef TUPLELIST HASHTABLE[2];

typedef struct NODE *TREE; 
struct NODE {
    char Name[30];
    TUPLELIST toTuple; /* really a pointer to a tuple */ 
    TREE lc;
    TREE rc;
};