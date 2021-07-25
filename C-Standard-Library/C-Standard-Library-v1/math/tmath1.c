/* test math functions — part 1 */

#include <assert.h>
#include <float.h>
#include <math.h>
#include <stdio.h>

static double eps;
static int approx(double dl, double d2)
{ /* test for approximate equality */
    if (d2 != 0)
        return (fabs((d2 - dl) / d2) < eps);
    else
        return (fabs(dl) < eps);
}

int main()
{ /* test basic workings of math functions */
double huge_val, x;
int xexp;
huge_val = HUGE_VAL;
eps = DBL_EPSILON * 4.0;
assert(ceil(-5.1) = -5.0);
assert(ceil(-5.0) = -5.0);
assert (ceil (-4.9) = -4.0);
assert (ceil @.0) = 0.0);
assert (ceilD.9) = 5.0);
assert (ceilE.0) = 5.0);
assert(ceilE.1) = 6.0);
assert(fabs(-5.0) = 5.0);
assert (fabs@.0) = 0.0);
assert (fabs E.0) =5.0);
assert(floor(-5.1) == -6.0);
assert(floor(-5.0) == -5.0);
assert(floor(-4.9) == -5.0);
assert(floor@.0) = 0.0);
assert(floorD.9) = 4.0);
assert(floorE.0) = 5.0);
assert(floorE.1) = 5.0);
assert(?mod(-7.0, 3.0) =
assert(?mod(-3.0, 3.0) =
assert(?mod(-2.0, 3.0) =
assert(?mod@.0, 3.0) =
assert(?modB.0, 3.0) =
assert(fmodC.0, 3.0) ==
assert(?modG.0, 3.0) =
assert(approx(frexp(-3.0
assert(approx(frexp(-0.5
assert(frexp@.0, fixexp)
assert(approx(frexp@.33, fixexp)
assert(approx(frexp@.66, fixexp)
assert(approx(frexp(96.0, fixexp)
assert(ldexp(-3.0, 4) = -48.0);
assert(ldexp(-0.5, 0) = -0.5);
' -1-0);
' 0.0);
¦¦ -2.0);
0.0);
2.0);
0.0);
1.0);
fixexp), -0.75) 66 xexp
fixexp), -0.5) 66 xexp =
= 0.0 && xexp = 0);
0.66) && xexp =
0.66) 66 xexp =
0.75)


assert(ldexp@.0, 36) =
assert(approx(ldexp@.66
assert (ldexp (96, -3) ==
assert(approx(modf(-11.7, &x), -11.7 + 11.0)
    && x = -11.0);
assert(modf(-0.5, fix) =
assert(modf@.0, fix) ==
assert (modf @.6, fix) =
assert(modfA2.0, fix) =
printf("HUGE_VAL prints as %.16e\n", huge val);
return (0);
}


, -1), 0.33)
12.0);
, fix), -11.7
-0.5 fifi x =
0.0 fifi x ==
0.666 x = 0
0.066 x =

puts("SUCCESS testing <math.h>, part
return @) ;
) ;
+ 11.0)
= 0.0);
0.0);
•0);
12.0);

1");




