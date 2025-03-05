#include <stdio.h>
#include <math.h>

#define ll long long
#define MOD 1000000007

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    int maxVal = -1e9, minVal = 1e9;
    int maxPos = -1, minPos = -1;
    int primeCount = 0;
    ll product = 1, maxProduct = -1e18;

    int max1 = -1e9, max2 = -1e9;
    int min1 = 1e9, min2 = 1e9;
    int isPalindrome = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > maxVal) {
            maxVal = a[i];
            maxPos = i;
        }
        if (a[i] < minVal) {
            minVal = a[i];
            minPos = i;
        }
        if (a[i] == minVal) {
            minPos = i; 
        }

        if (isPrime(a[i])) primeCount++;

        product = (product * a[i]) % MOD;

        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }

        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2) {
            min2 = a[i];
        }

        if (a[i] != a[n - 1 - i]) {
            isPalindrome = 0;
        }
    }

    maxProduct = (ll)max1 * max2 > (ll)min1 * min2 ? (ll)max1 * max2 : (ll)min1 * min2;

    printf("%d %d\n", maxVal, maxPos);
    printf("%d %d\n", minVal, minPos);
    printf("%d\n", primeCount);
    printf("%lld\n", maxProduct);
    printf("%s\n", isPalindrome ? "YES" : "NO");
    printf("%lld\n", product);

    return 0;
}

