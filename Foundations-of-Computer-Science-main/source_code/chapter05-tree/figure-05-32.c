
/* Fig.5.32 Preorder listing of binary trees */

typedef struct NODE *TREE;
struct NODE {
    char nodeLabel;
    TREE leftChild, rightChild;
};

void preorder(TREE t) {
    if (t != NULL) {
        printf("%c\n", t->nodeLabel);
        preorder(t->leftChild);
        preorder(t->rightChild);
    }
}