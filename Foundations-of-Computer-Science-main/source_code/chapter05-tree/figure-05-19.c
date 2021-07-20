
/* Fig.5.19 Evaluating an arithmetic expression */

typedef struct NODE *pNODE;
struct NODE {
    char op;
    int value;
    pNODE leftmostChild, rightSibling;
};

int eval(pNODE n) {
    int val1, val2; /* values of first and second subtrees */

    if (n->op == 'i') /* n points to a leaf */
        return n->value;
    else { 
        /* n points to an interior node */
        val1 = eval(n->leftmostChild);
        val2 = eval(n->leftmostChild->rightSibling);
        switch (n->op) {
            case '+': return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/': return val1 / val2;
        }
    }
}