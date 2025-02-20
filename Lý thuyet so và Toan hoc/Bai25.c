#include <stdio.h>
#include <math.h>

#define ll long long

int kt(ll n){
	int a = sqrt(n);
	return 1ll*a*a == n;
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

