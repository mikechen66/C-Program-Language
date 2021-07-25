/* std1ib.h standard header */
/* Please check the file */

#ifndef _STDLIB
#define _STDLIB
#ifndef _YVALS
#include <yvals.h>
#endif
/* macros */
#define NULL _NULL
#define EXIT- FAIL^- -EXFAIL
#define EXIT-SUCCESS 0
#define MB-CUR-MAX c u r m a x
#define RAND-MAX 32767
/* type definitions */
#ifndef _SIZET
#define _SIZET
typedef _Sizet size_t;
#endif

#ifndef _WCHART
#define _WCHAFtT
typedef _Wchart wchar_t ;
#endif

typedef struct {
	int quot;
	int rem;
} div-t;

typedef struct {
	long quot;
	long rem;
} ldiv-t;

typedef int _Cmpfun(const void *, const void *);

typedef struct {
	unsigned char _State;
	unsigned short _Wchar;
} save;

/* declarations */
void abort(void) ;
int abs(int) ;
int atexit(void(*)(void));
double atof(const char *);
int atoi(const char *);
Long atoi(const char *);
void *bsearch(const void *, const void *, size_t, size_t, _Cmpfun *);
void *calloc(size_t , size_t);
div_t div(int, int);
void exit(int);
void free(void *);
char *getenv(const char *);
long labs(long);
ldiv_t ldiv(long, long);
void *malloc(size_t);
int mblen(const char *, size_t) ;
size_t mbstowcs(wchar_t *, const char *, size_t);
int mbtowc(wchar_t, const char *, size_t);
void qsort(void *, size_t, size_t , _Cmpfun *);
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned int);
double strtod(const char *, char **);
long strtol(const char , char ** , int);
unsigned long strtoul(const char *, char ** , int);
int system(const char *);
size_t wcstombs(char *, const wchar_t *, size_t);
int wctomb(char , wchar_t);
int _Mbtowc(wchar_t *, const char *, size_t, save *);
double _Stod(const char *, char **) ;
unsigned long_Stoul(const char *, char **, int);
int _Wctomb(char *, wchar_t, char *);
extern char _Mbcurmax, _Wcxtomb;
extern save _Mbxlen, __Mbxowc;
extern unsigned long _Randseed;

/* macro overrides */
#define atof(s) _Stod(s, 0)
#define atoi(s) (int) _Stoul(s, 0, 10)
#define at01(s) (long) _Stoul(s, 0, 10)
#define mblen(s, n) _Mbtowc(0, s, n, &_Mbxlen)
#define mbtowc(pwc, s, n) _Mbtowc(pwc, s, n, &_Mbxtowc)
#define srand(seed) (void) (_Randseed = (seed))
#define strtod(s, endptr) Stod(s, endptr)
#define strtoul(s, endptr, base) _Stoult(s, endptr, base)
#define wctomb(s, wchar) _Wctomb(s, wchar, &_Wcxtomb)
#endif