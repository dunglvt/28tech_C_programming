#include <stdio.h>
#include <math.h>

#define ll long long

int digit(ll n){
	if(n<10){
		return n;
	}
	return digit(n /= 10);
}

int main(){
    ll n;
    scanf("%lld", &n);
    printf("%d", digit(n));
    return 0;
}

