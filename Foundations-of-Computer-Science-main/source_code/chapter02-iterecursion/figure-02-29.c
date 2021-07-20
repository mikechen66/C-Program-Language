
/* Fig.2.29 The merge sort algorithm */

LIST MergeSort(LIST list) {
    LIST SecondList;
    if (list == NULL) 
        return NULL;
    else if (list->next == NULL)
        return list;
    else {
        /* at least two elements on list */
        SecondList = split(list);
        /* Note that as a side effect, half the */
        /* elements are removed from list */
        return merge(MergeSort(list), MergeSort(SecondList));
    }
}