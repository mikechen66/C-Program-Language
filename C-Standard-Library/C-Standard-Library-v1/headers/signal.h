/* signa1.h standard header */

#ifndef _SIGNAL
#define _SIGNAL
#ifndef _YVALS
#include <yvals.h>
#endif

/* type definitions */
typedef int sig_atomic_t;
typedef void _Sigfun(int);

/* signal codes */
#define SIGABRT_SIGABRT
#define SIGINT               2
#define SIGILL               4
#define SIGFPE               8
#define SIGSEGV             11
#define SIGTERM             15
#define _NSIG _SIGMAX

/* signal return values */
#define SIG_DFL(_Sigfun *)   0
#define SIG_ERR(_Sigfun *)  -1
#define SIG_IGN(_Sigfun *)   1

/* declarations */
int raise(int) ;
_Sigfun *signal(int, _Sigfun *) ;
#endif
/* one more than l a s t code *

