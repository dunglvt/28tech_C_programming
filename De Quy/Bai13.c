#include <stdio.h>
#include <math.h>

#define ll long long

int tong(ll n){
	if(n==0) return 0;
	return n%10 + tong(n/10);
}

int main(){
    ll n;
    scanf("%lld", &n);
    printf("%d", tong(n));
    return 0;
}

