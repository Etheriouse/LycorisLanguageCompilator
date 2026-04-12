int fibo(int n) {

    int x = 0;

    x = 2;

    if(n == 1) return n;

    return fibo(n-1, 76) + fibo(n-2);
}