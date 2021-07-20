
/* Fig.5.8 Definition of an alphabetic tree */

typedef struct NODE *pNODE;

struct NODE {
    char letter;
    int isWord;
    pNODE children[BF];
};