#include <stdio.h>
#include <math.h>

#define ll long long

ll f[100];

void fibo(){
	f[0] = 0; 
	f[1] = 1;
	for(ll i = 2; i<=92;i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int fibonacci(ll n){
	fibo();
	int check = 0;
	for(ll i = 0; i<=92;i++){
		if(n == f[i]){
			check = 1;
			return 1;
		}
	}
	if(check == 0){
		return 0;
	}
}

void kiemTra(ll a[], ll n){
	ll check = 0;
	for(ll i = 0; i<n;i++){
		if(fibonacci(a[i])){
			printf("%lld ", a[i]);
			check = 1;
		}
	}
	if(check == 0){
		printf("NONE");
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(ll i = 0; i < n; i++){
		scanf("%lld", &a[i]);
    }
    kiemTra(a, n);
    return 0;
}

