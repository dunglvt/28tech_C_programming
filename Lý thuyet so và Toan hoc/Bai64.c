#include <stdio.h>
#include <math.h>

#define ll long long

int kt(ll n){
	if(n == 0 || n == 1) return 1;
	ll f1 = 1, f2 = 1;
	for(int i = 2; i<=10000; i++){
		ll fn = f1 + f2;
		if(fn == n){
			return 1;
		}
		f1 = f2;
		f2 = fn;
	}
	return 0;
}

int main(){
    ll n;
    scanf("%lld", &n);
    if(kt(n)){
    	printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

