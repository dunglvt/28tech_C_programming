#include <stdio.h>
#include <math.h>

#define ll long long

void traiSangPhai(ll n){
	if(n>9){
		traiSangPhai(n/10);
	}
	if(n<10){
		printf("%lld ", n);
		return;
	}
	printf("%lld ", n%10);
}

void phaiSangTrai(ll n){
	printf("%lld ", n%10);
	if(n<10){
		return;
	}
	if(n>9){
		phaiSangTrai(n/10);
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    traiSangPhai(n);
    printf("\n");
    phaiSangTrai(n);
    return 0;
}

