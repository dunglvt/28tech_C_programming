#include <stdio.h>
#include <math.h>

#define ll long long

int soChinhPhuong(ll n){
	int tmp = sqrt(n);
	if(1ll*tmp*tmp == n){
		return 1;
	} else {
		return 0;
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    if(soChinhPhuong(n)){
    	printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

