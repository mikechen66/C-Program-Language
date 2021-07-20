
/* Fig.3.25 The function merge */

LIST merge(LIST list1, LIST list2) {
    if (list1 == NULL) 
        return list2;
    else if (list2 == NULL) 
        return list1;
    else if (list1->element <= list2->element) {
        list1->next = merge(list1->next, list2);
        return list1;
    }
    else { 
        /* list2 has smaller first element */
        list2->next = merge(list1, list2->next);
        return list2;
    }
}