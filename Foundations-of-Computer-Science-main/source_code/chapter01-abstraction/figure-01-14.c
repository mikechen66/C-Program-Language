
/* Fig.1.14 A macro for defining list cells */

#define DefCell(EltType, CellType, ListType) 

typedef struct CellType *ListType; 

struct CellType { 
    EltType element; 
    ListType next; 
}