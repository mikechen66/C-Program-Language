/* P276stdio.h standard header */

#ifndef _STDIO
#define _STDIO
#ifndef _YVALS
#include <yvals.h>
#endif

/* macros */
#define NULL _NULL
#define _IOFBF              0
#define _IOLBF              1
#define _IONBF              2
#define BUFSIZ            512
#define EOF      -1
#define FILENAME_MAX  _FNAMAX
#define FOPEN_MAX     _FOPMAX
#define L_tmpnam      _TNAMAX
#define TM_MAX             32
#define SEEK_SET            0
#define SEEK_CUR            1
#define SEEK_END            2
#define stdin       _Files[0]
#define stdout      _Files[1]
#define stderr      _Files[2]
/* type definitions */
#ifndef _SIZET
#define _SIZET

typedef _Sizet size_t;
#endif

typedef struct {
    unsigned long _Off;
} fpos_t;

typedef struct {
    unsigned short _Mode;  /* system dependent */
    short _Handle;
    unsigned char *_Buf, *_Bend, *_Next;
    unsigned char *_Rend, *_Rsave, *_Wend;
    unsigned char _Back[2], _Cbuf, _Nback;
    char *_Tmpnam;
} FILE;

/* declarations */
void clearerr(FILE *) ;
int fclose(F1LE *);
int feof(FILE *);
int ferror(F1LE *);
int fflush(F1LE *);
int fgetc(F1LE *);
int fgetpos(F1LE *, fpos_t *);
char *fgets(char *, int, FILE *) ;
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *) ;
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(F1LE *);
int getchar (void);
char *gets(char *);
void perror(const char *);
int printf(const char *, ...);
int putc(int, FILE *);
int putchar(int);
int puts(const char * );
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
int scanf(const char *, ...);
void setbuf (FILE *, char *) ;
int setvbuf (FILE *, char *, int, size_t);
int sprintf (char *, const char *, . . . ) ;
int sscanf (const char *, const char *, ...);
FILE *tmpfile(void) ;
char *tmpnam(char * ) ;
int ungetc(int, FILE *) ;
int vfprintf(FILE *, const char *, char *);
int vprintf(const char *, char *);
int vsprintf(char * , const char * , char *) ;
long _Fgpos(FILE *, fpos_t *) ;
int _Fspos(FILE *, const fpos_t *, long, int) ;
extern FILE *_Files[FOPEN_MAX];

/* macro overrides */
#define fgetpos(str, ptr) (int) _Fgpos(str, ptr)
#define fseek(str, off, way) _Fspos(str, _NULL, off, way)
#define fsetpos(str, ptr) _Fspos(str, ptr, OL, 0)
#define ftell(str) _Fgpos(str, _NULL)
#define getc(str)((str)->-Next < (str)->-Rend \
    ? * (str)->_Next++ : (getc)(str))
#define getchar()(_Files[0]->-Next<-Files[0]->-Rend \
    ? *_Files[0]->-Next++: (getchar)())
#define putc(c, str)((str)->-Next<(str)->-Wend \
    ? (* (str)- >_Next++ = c): (putc)(c, str))
#define putchar(c)(-Files[1]->_Next < _Files[1]->_Wend \
    ? (*-Files[1]->-Next++ = c) : (putchar)(c))
#endif