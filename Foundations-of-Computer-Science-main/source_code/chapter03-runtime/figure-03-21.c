
/* Fig.3.21 Program illustrating nonrecursive function calls */

#include <stdio.h>

int bar(int x, int n);
int foo(int x, int n);

main() {
    int a, n;

    scanf("%d", &n);
    a = foo(0,n);
    printf("%d\n", bar(a,n));
}

int bar(int x, int n) {
    int i;
    for (i = 1; i <= n; i++)
        x += i;
    return x;
    }

int foo(int x, int n) {
    int i;
    
    for (i = 1; i <= n; i++)
        x += bar(i,n);
    return x;
}