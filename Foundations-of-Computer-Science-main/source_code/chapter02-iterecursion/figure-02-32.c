
/* Fig.2.32 Two recursive functions, sum and find0 */

DefCell(int, CELL, LIST);

int sum(LIST L) {
    if (L == NULL) 
        return 0;
    else 
        return(L->element + sum(L->next));
}

int find0(LIST L) {
    if (L == NULL) 
        return FALSE;
    else if (L->element == 0) 
        return TRUE;
    else 
        return find0(L->next);
}