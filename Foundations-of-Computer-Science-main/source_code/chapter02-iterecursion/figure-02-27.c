
/* Fig.2.27 Splitting a list into two equal pieces */

LIST split(LIST list) {
    LIST pSecondCell;

    if (list == NULL) 
        return NULL;
    else if (list->next == NULL) 
        return NULL;
    else { 
        /* there are at least two cells */
        pSecondCell = list->next;
        list->next = pSecondCell->next;
        pSecondCell->next = split(pSecondCell->next);
        return pSecondCell;
    }
}