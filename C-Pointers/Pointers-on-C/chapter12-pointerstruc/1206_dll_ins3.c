    /*
    ** Add the new node to the list. It is not a complete program.
    */

    newnode->fwd = next;

    if( this != rootp ){
        this->fwd = newnode;
        newnode->bwd = this;
    }
    else {
        rootp->fwd = newnode;
        newnode->bwd = NULL;
    }
    if( next != NULL )
        next->bwd = newnode;
    else
        rootp->bwd = newnode;
