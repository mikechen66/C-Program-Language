/* renmae function */

/* 1.rename function -- UNIX version */

#include "xstdio. h"

/* UNIX system calls */
int _Link(const char *, const char *);
int _Unlink(const char *) ;

int (rename)(const char *old, const char *new)
{ /* rename a file */ 
    return (_Link(old, new) ? -1 : _Unlink(o1d));
}


/* 2. rename function -- dummy version */

#include "xstdio.h"

int (rename)(const char *oldnm, const char *newnm)
{   /* rename a file */
    return (-1);
}