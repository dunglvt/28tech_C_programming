#include <stdio.h>

#define ll long long
#define MOD 1000000007

ll fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    ll f1 = 0, f2 = 1, fn;
    for (int i = 3; i <= n; i++) {
        fn = (f1 + f2) % MOD; 
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibonacci(n));
    return 0;
}

