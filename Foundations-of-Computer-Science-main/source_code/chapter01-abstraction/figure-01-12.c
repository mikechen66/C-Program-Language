
/* Fig.1.12 Some C typedef declarations */

typedef int Distance;
typedef int type1[10];
typedef type1 *type2;

typedef struct {
    int field1;
    type2 field2;
} type3;

typedef type3 type4[5];