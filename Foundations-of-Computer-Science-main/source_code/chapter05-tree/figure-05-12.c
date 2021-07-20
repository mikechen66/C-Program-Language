
/* Fig.5.12 Finding the child for a desired letter */

pNODE seek(char let, pNODE n) {
    c = n->leftmostChild;
    while (c != NULL)
        if (c->letter == let)
            break;
        else
            c = c->rightSibling;
    return c;
}