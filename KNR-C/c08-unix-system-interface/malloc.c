typedef long Align; /* for alignment to long boundary */

union header {      /* block header: */
    struct {
        union header *ptr;  /* next block if on free list */
        unsigned size;      /* size of this block */
    } s;
    Align x;        /* force alignment of blocks */
};

typedef union header Header;


static Header base;     /* empty list to get started */
static Header *freep = NULL;    /* start of free list */

/* malloc: general-purpose storage allocator */
void *malloc(unsigned nbytes)
{
    Header *p, *prevp;
    Header *morecore(unsigned);
    unsigned nunits;

    nunits = (nbytes+sizeof(Header)-1) / sizeof(Header) + 1;
    if ((prevp = freep) == NULL) {  /* no free list yet */
        base.s.ptr = freep = prevp = &base;
        base.s.size = 0;
    }
    for (p = prevp->s.ptr; ; prevp = p, p = p->s.ptr) {
        if (p->s.size >= nunits) {  /* big enough */
            if (p->s.size == nunits)    /* exactly */
                prevp->s.ptr = p->s.ptr;
            else {          /* allocate tail end */
                p->s.size -= nunits;
                p += p->s.size;
                p->s.size = nunits;
            }
            freep = prevp;
            return (void *)(p+1);
        }
        if (p == freep)     /* wrapped around free list */
            if ((p = morecore(nunits)) == NULL)
                return NULL;    /* none left */
    }
}

#define NALLOC 1024 /* minimum units to request */

/* morecore: ask system for more memory */
static Header *morecore(unsigned nu)
{
    char *cp, *sbrk(int);
    Header *up;

    if (nu < NALLOC)
        nu = NALLOC;
    cp = sbrk(nu * sizeof(Header));
    if (cp == (char *) - 1) /* no space at all */
        return NULL;
    up = (Header *) cp;
    up->s.size = nu;
    free((void *)(up+1));
    return freep;
}

/* free: put block ap in free list */
void free(void *ap)
{
    Header *bp, *p;

    bp = (Header *)ap - 1;
    for (p = freep; !(bp > p && bp < p->s.ptr); p = p->s.ptr)
        if (p >= p->s.ptr && (bp > p || bp < p->s.ptr))
            break;

    if (bp + bp->s.size == p->s.ptr) {
        bp->s.size += p->s.ptr->s.size;
        bp->s.ptr = p->s.ptr->s.ptr;
    } else
        bp->s.ptr = p->s.ptr;

    if (p + p->s.size == bp) {
        p->s.size += bp->s.size;
        p->s.ptr = bp->s.ptr;
    } else
        p->s.ptr = bp;
    freep = p;
}



/* 
 * Output
 * 
 * $gcc -o main *.c
 * main.c:15:24: error: ‘NULL’ undeclared here (not in a function)
 */
// static Header *freep = NULL;    /* start of free list */
/*                        ^~~~
 * main.c:18:7: warning: conflicting types for built-in function ‘malloc’ [-Wbuiltin-declaration-mismatch]
 * void *malloc(unsigned nbytes)
 *      ^~~~~~
 * main.c:50:16: error: static declaration of ‘morecore’ follows non-static declaration
 * static Header *morecore(unsigned nu)
 *               ^~~~~~~~
 * main.c:21:13: note: previous declaration of ‘morecore’ was here
 *    Header *morecore(unsigned);
             ^~~~~~~~
 * main.c: In function ‘morecore’:
 * main.c:62:5: warning: implicit declaration of function ‘free’ [-Wimplicit-function-declaration]
 *    free((void *)(up+1));
 *    ^~~~
 * main.c:62:5: warning: incompatible implicit declaration of built-in function ‘free’
 * main.c:62:5: note: include ‘<stdlib.h>’ or provide a declaration of ‘free’
 */