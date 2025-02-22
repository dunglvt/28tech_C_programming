#include <stdio.h>
#include <math.h>

#define ll long long

ll gcd(ll a, ll b){
	while(b){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int gcdMang(int a[], int n){
	ll tmp = gcd(a[0], a[1]);
	for(int i = 0;i<n-2;i++){
		tmp = gcd(tmp, a[i+2]);
	}
	return tmp;
}

int main(){
	int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    printf("%d", gcdMang(a, n));
    return 0;
}

