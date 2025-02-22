#include <stdio.h>
#include <math.h>

#define ll long long

void bit(ll n){
	if(n==0){
		printf("0");
		return;
	}
	if(n>1){
		bit(n/2);
	}
	printf("%lld", n%2);
}

int main(){
    ll n;
    scanf("%lld", &n);
    bit(n);
}

