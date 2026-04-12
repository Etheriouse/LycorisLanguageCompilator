int fibo(int n) {

    if(n == 1) return n;

    return fibo(n-1) + fibo(n-2);
}

int main() {

    const int n = 10;
    int result = fibo(n);

    return result;
}