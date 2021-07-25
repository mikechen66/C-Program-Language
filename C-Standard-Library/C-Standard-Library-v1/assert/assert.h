/* assert-h standard header */

/* remove existing definition */
#undef assert 

#ifdef NDEBUG
    #define assert(test) ((void)0)
#else  /* NDEBUG not defined */
    void _Assert(char *);
    /* macros */
    #define _STR(x) _VAL(x)
    #define _VAL(x) #x
    #define assert(test) ((test) ? (void)0 \
        : _Assert(_FILE_":"_STR(_LINE_) " " #test))
#endif