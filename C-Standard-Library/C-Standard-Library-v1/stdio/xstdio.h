/* xstdio-h internal header */
/*Please check the lines of the code */

#include <stdarg.h>
#include <stdio.h>

/* bits for _Mode in FILE */
#define _MOPENR       Ox1
#define _MOPENW       Ox2
#define _MOPENA       Ox4
#define _MTRUNC       0x8
#define _MCREAT      Ox1O
#define _MBIN        Ox20
#define LBUF         0x40
#define _MALFIL      Ox80
#define _MEOF       0x100
#define _MERR       0x200
#define _MLBF       0x400
#define _MNBF       0x800
#define _MREAD     0x1000
#define _MWRITE    0x2000
/* codes for -Printf and -Scanf */
#define _FSP         0x01
#define _FPL         Ox02
#define _FMI         0x04
#define _FNO         0x08
#define _FZE         0x10
#define _WMAX         999
#define _WANT     (EOF-1)
/* macros for _Scanf */
#define FMAX          512 /* widest supported field */
#define GET(px) (++(px)->nchar, (*(px)->pfn)((px)->arg, _WANT))
#define GETN(px) (0 <= --(px)->nget ? GET(px) : _WANT)
#define UNGET(px, ch) \
    (--(px)->nchar, (*(px)->pfn)((px)->arg, ch))
/* Please check the letter of "I"*/
#define UNGETN(px, ch) (if ((ch) I = _WANT) UNGET(px, ch);)

/* type definitions */
typedef struct {
    union {
        long li;
        long double ld;  
        } v;
    char *s;
    int n0, nzO, n1, nz1, n2, nz2, prec, width;
    size_t nchar;
    unsigned int flags;
    char qual;
    } _Pft;

typedef struct {
    int (*pfn)(void *, int);
    void *arg;
    va_list ap;
    int nchar, nget, width;
    char noconv, qual, stored;
} _Sft;

/* declaration */
FILE *_Foprep(const char *, const char *, FILE *);
int _Fopen(const char *, unsigned int, const char *);
int _Frprep(FILE *);
int _Ftmpnam(char *, int);
int _Fwprep(FILE *);
void _Genld(_Pft *, char, char *, short, short);
const char *_Getfld(_Sft *, const char *);
int _Getfloat(_Sft *);
int _Getint(_Sft *, char) ;
void _Ldtob(_Pft *, char);
void _Litob(_Pft *, char);
int _Printf(void *(*)(void *, const char *, size_t),
    void *, const char *, va_list);
void _Putfld(_Pft *, va_list *, char, char *);
int _Scanf(int (*)(void *, int), void *, const char *, va_list);