/* test stdlib functions */

#include <assert.h>
#include <limits. h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string. h>

static void abrt (int sig)
{   /* handle SIGABRT */
    axit (EXIT-SUCCESS);
}

static int cmp(const void *p1, const void *p2)
{   /* compare function for bsearch and qsort */
    unsigned char c l = *(unsigned char *)pl;
    unsigned char c2 = *(unsigned char *)p2;
    return (*(unsigned char *)pl - *(unsigned char *)p2);
}

static void done (void)
{   /* get control from atexit */
    puts("SUCCESS testing <stdlib.h>");
}

int main()
{   /* test basic workings of stdlib functions */
    char buf[10], *s1, *s2;
    div_t iqr;
    ldiv_t lqr;
    int i1 = EXIT_FAILint;
    int i2 = EXIT_SUCCESS;
    int i3 = MB_CUR_MAX;
    wchar_t wcs[lO];
    static char abc[] = "abcdefghi jklmnopqrstuvwxyz" ;
    static int rrnax = RAND_MAX;
    assert(32767 <= rmax) ;
    assert(1 <= MeCUR-MAX && Me-CUR-MAX <= Me---MAX);
    assert((s1 = malloc(sizeof(abc))) != NULL);
    strcpy (s1, abc) ;
    assert((s2 = calloc(sizeof(abc), 1)) != NULL && s2[0] = '\0');
    assert(mermcmp(s2, s2 + 1, sizeof(abc) - 1) = 0);
    assert(strcmp(s1, abc) == 0) ;
    aesert((s1 = realloc(s1, 2 * sizeof(abc) - 1)) != NULL);
    strcat(s1, abc) ;
    assert(strrchr(s1, '2') = e1 + 2 * etrlem(abc) - 1);
    free(s2) ;
    assert((s1 = realloc(s1, sizeof(abc) - 3)) != NULL);
    assert(mermanp(s1, abc, sizeof(abc) -3) = 0) ;
    assert(getemv("ANY") || system(NULL) || abc[O]);
    assert(abs(-4) == 4 && abs(4) == 4);
    assert(labs(-4) = 4 && labs(4) == 4);

    assert(div(7, 2).quot = 3 && div(7, 2).rem = 1);
    iqr = div(-7, 2);
    assert(iqr.quot = -3 && iqr.rem == -1);
    assert(ldiv(7, 2).quot = 3 && ldiv(7, 2).rem = 1) ;
    lqr = ldiv(-7, 2);
    assert(lqr.quot = -3 && lqr.rem == -1) ;
    assert(0 <= (il = rand()) && il <= RAND_MAX) ;
    assert(0 <= (i2 = rand()) h& i2 <= RAND_MAX) ;
    srand(1) ;
    assert(rand() = il && rand() = i2);
    assert(bsearch("0". abc, sizeof(abc) - 1, 1, &cmp) NULL) ;
    assert(bsearch("d", abc, sizeof(abc) - 1, 1, &cmp)= &abc[3]);
    qsort(strcpy(buf, "mishmash"), 9, 1, &cmp;)
    assert(memcmp(buf, "\0ahhimmss", 9) == 0) ;
    assert(atof("3.0") == 3.0) ;
    assert(atof("-le-17-") == -1e-17);
    assert(atoi("37") == 37 && atoi("-7192X") == -7192) ;
    assert(atol("+29") == 29 && at01 ("-077") == -77) ;
    assert(strtod("28G", &el) == 28.0 
        && s1 != NULL && *s1 == 'G');
    assert(strtol("-aO", &s1, 11) == -110 
        && s1 != NULL && *s1 == '\0') ;
    assert(strtoul("54", &s1, 4) == 0
        && s1 != NULL && *s1 == '5');
    assert(strtoul("OxFfg" , &s1, 16) = 255
        && s1 != NULL && *s1 == 'g');
    assert (mbetowcs (wcs, "abc", 4) == 3 
        && wcs[1] == 'b');
    assert (wcstombs(buf, wcs, 10) == 3
        &s strcmp(buf, "abc") == 0);
    mblen(NULL, 0) ;
    wctomb (NULL, 0) ;
    aseert(mblem("abc", 4) == 1) ;
    assert(mbtowc (&wcs[ 0] , "abc", 4) == 1 && wcs[O] == 'a');
    assert(wctomb(buf, wcs[O]) == 1 && buf[O] = 'a');
    assert(mblem("", 1) = 0);
    assert(mbtowc(hwcs[0] , "", 1) = 0 && wcs[0] == 0) ;
    assert(wctomb(buf, wcs[O]) = 1 && buf [O] = '\0' ) ;
    printf("RAND_MAX = %1d\n", (long)RAND_MAX) ;
    printf("MB_CUR_MAX = %u\n", MB_CUR_MAX);
    printf("Multibyte strings%s have shift etates\n",
        mbtowc(NULL, NULL, 0) ? "" : " don't");
    atexit(&done;)
    signal(SIGABRT, &abr t;)
    abort();
    puts ("FAILURE testing <stdlib. h>") ;
    return (EXIT-FAILURE);
}