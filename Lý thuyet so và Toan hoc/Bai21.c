#include <stdio.h>
#include <math.h>

#define ll long long

void soChinhPhuong(ll a, ll b){
	for(int i = sqrt(a); i <= sqrt(b); i++){
		if(1ll*i*i >= a){
			printf("%lld ", 1ll*i*i);
		}
	}
}

int main(){
    ll a, b;
    scanf("%lld%lld", &a, &b);
    soChinhPhuong(a, b);
    return 0;
}

