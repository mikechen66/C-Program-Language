
/* Fig.8.3 Types for a hash table as primary index structur */

typedef struct TUPLE *TUPLELIST; 
struct TUPLE {
    int StudentId; 
    char Name[30]; 
    char Address[50]; 
    char Phone[8]; 
    TUPLELIST next;
};
typedef TUPLELIST HASHTABLE[1009];