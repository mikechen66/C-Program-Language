
/* Fig.3.28 The merge sort algorithm */


LIST MergeSort(LIST list) {
    LIST SecondList;

    if (list == NULL) 
        return NULL;
    else if (list->next == NULL) 
        return list;
    else {
        /* at least two elements on list */
        SecondList = split(list);
        return merge(MergeSort(list), MergeSort(SecondList));
    }
}
