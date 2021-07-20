
/* Fig.10.7 Function implementing the deterministic automaton of Fig.10.4 */

void bounce() {

    char x;

    /* state a */
a:  putchar('0');
    x = getchar();
    if (x == '0') goto a; /* transition to state a */
    if (x == '1') goto b; /* transition to state b */
    goto finis;

    /* state b */
b:  putchar('0');
    x = getchar();
    if (x == '0') goto a; /* transition to state a */
    if (x == '1') goto c; /* transition to state c */
    goto finis;

    /* state 1 */
c:  putchar('0');
    x = getchar();
    if (x == '0') goto d; /* transition to state d */
    if (x == '1') goto c; /* transition to state c */
    goto finis;

    /* state d */
d:  putchar('1');
    x = getchar();
    if (x == '0') goto a; /* transition to state a */
    if (x == '1') goto c; /* transition to state c */
    goto finis;

finis:  ;

}

