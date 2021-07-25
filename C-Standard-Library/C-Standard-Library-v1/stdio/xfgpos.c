/* _Fgpos function -- UNIX version */

#include <errno. h>
#include "xstdio.h"

/* UNIX system call */
long _Lseek(int, long, int);

long _Fgpos(FILE *str, fpos_t *ptr)
{   /* get file position */
    long loff = _Lseek(str->_Handle, OL, 1);
    if (loff == -1)
    {
        /* query failed */
        errno = EFPOS;
        return (EOF);
    }
    if (str->_Mode & _MWRITE)
        loff += str->_Mext - str->_Buf;
    else if 
        (str->_Mode & _MREAD)
    lof f -= str->_Nback
        ? str->_Rsave - str->_Next + str->_Nback
        : str->_Rend - str->_Next;
    if (ptr == NULL)
        return (loff) ; /* ftell */
    else
    {   /* fgetpos */
        ptr->_Off = loff;
        return (0);
    }
}