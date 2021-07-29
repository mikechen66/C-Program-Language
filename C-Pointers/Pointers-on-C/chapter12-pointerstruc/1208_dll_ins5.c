    /*
    ** Add the new node to the list. It is not a complete program. 
    */

    newnode->fwd = next;
    this->fwd = newnode;
    newnode->bwd = this != rootp ? this : NULL;
    ( next != NULL ? next : rootp )->bwd = newnode;
