{
    int a = 1;
    int b = 1;
    int res = a+b;
    int n = 10;
    while (n>0) {
        res = b + a;
        a = b;
        b = res;   
        n = n - 1;
    }
}