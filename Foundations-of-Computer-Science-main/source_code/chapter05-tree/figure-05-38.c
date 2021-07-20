
/* Fig.5.38 Function deletemin(pT) removes and returns the smallest element from T*/

ETYPE deletemin(TREE *pT) {
    ETYPE min;

    if ((*pT)->leftChild == NULL) {
        min = (*pT)->element;
        (*pT) = (*pT)->rightChild;
        return min;
    }
    else
        return deletemin(&((*pT)->leftChild));
}