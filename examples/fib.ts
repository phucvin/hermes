function fib(n: number) {
    if (n < 2) return 1;
    return fib(n - 2) + fib(n - 1);
}