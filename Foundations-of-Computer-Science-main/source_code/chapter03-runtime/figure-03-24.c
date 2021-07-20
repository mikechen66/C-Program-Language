
/* Fig.3.24 C function computing the Fibonacci numbers */

int fibonacci(int n) {
    if (n <= 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}