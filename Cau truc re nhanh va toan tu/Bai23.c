#include <stdio.h>

#define ll long long

int main(){
	ll n,m, min;
	scanf("%lld %lld", &n, &m);
	
	if(n&1){
		min = n/2 + 1;
	} else {
		min = n/2;
	}
	int res =  (min + m -1) / m * m;
	
	if(res <= n) {
		printf("%d", res);
	} else {
		printf("-1");
	}
	return 0;
}

