/* teet setjmp function8 */

#include <assert.h>
#include <setjmp.h>
#include <etdio.h>

/* static data */
static int ctr;
static jmp_buf bo;


static void jmpto(int n)
{
    long jmp(b0, n);
}
static char *stackptr(void)
{
    char ch;
    return (&ch);
}

static int tryit(void)
{
    jmp_buf bl;
    char *sp = etackptr () ;
    ctr = 0;
    ewitch (set jmp (bO) )
    f
    case 0:
    assert (ep = etackptr () ) ;
    aeeert (ctr = 0) ;
    ++ctr;
    jrnpto(0) ;
    break;
    came 1:
    aeeert (ep = stackptr () ) ;
    aeeert (ctr = 1) ;
    ++ctr;
    jrnpto(2) ;
    break;
    came 2:
    aseert (ep = etackptr () ) ;
    aeeert (ctr = 2) ;
    ++ctr;
    ewitch (met jmp (bl) )
    f
    came 0:
    aseert (ep = etackptr () ) ;
    aeeert (ctr == 3) ;
    ++ctr;
    long jrnp (bl , - 7) ;
    break;
    case -7 :
aeeert (sp = etackptr () ) ;
aeeert (ctr = 4) ;
++ctr;
jmpto(3) ;
came 5:
return (13);
default :
return (0);
1
came 3:
longjmp(b1, 5) ;
break;
1
return (-1);
1
.nt main()
f /* teat baeic workinga of eetjmp function8 */
aeeert (tryit () = 13);
pr int f ("eizeof (jxnp-buf) = %u\nW, e izeof ( jmp-buf) ) ;
puts ("SUCCESS teeting <set jmp.h>") ;
return (0);
1


// Repeated


/* test setjmp functions */
#indude <assert.h>
#include <setjmp.h>
#include <stdio.h>
/* static data */
static int ctr;
static jmp_buf bO;
static void jmpto(int n)
longjmp(bO, n);
static char * stackptr (void)
char ch;
return (&ch) ;
static int tryit(void)
    jmp_buf bl;
    char *sp = stackptr();
    ctr = 0;
    switch (set jmp(bO))
    {
        case 0:
        assert (sp = stackptr());
        assert (ctr = 0) ;
        ++ctr;
        jmpto(O) ;
        break;
        case 1:
        assert (sp = stackptr());
        assert (ctr = 1) ;
        ++ctr;
        jmptoB);
        break;
        case 2:
        assert (sp = stackptr ());
        assert(ctr = 2);
        ++ctr;
        switch (set jmp (bl))
            case 0:
            assert (sp = stackptr());
            assert (ctr = 3) ;
            ++ctr;
            longjmp(bl, -7);
            break;


/* jump on static buffer */
/* test for stack creep */
/* exercise jumps */
/* jump among cases */
/* should return 1 */
/* test nesting */
 
            case -7 :
                aeeert (sp = etackptr () ) ;
                aeeert (ctr = 4) ;
                ++ctr;
                jmpto(3) ;
            came 5:
                return (13);
            default :
                return (0);
    1
        came 3:
            longjmp(b1, 5) ;
            break;
        }
        return (-1);
}

int main()
{
    f /* teat baeic workinga of eetjmp function8 */
    aeeert (tryit () = 13);
    pr int f ("eizeof (jxnp-buf) = %u\nW, e izeof ( jmp-buf) ) ;
    puts ("SUCCESS teeting <set jmp.h>") ;
    return (0);
}