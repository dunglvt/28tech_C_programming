#include <stdio.h>

int main(){
	long long a, b, k;
	scanf("%lld %lld %lld", &a, &b, &k);
	
	if(k&1){
		printf("%lld", a * (k+1)/2 - b * (k-1)/2);
	} else {
		printf("%lld", (k/2) * (a-b));
	}
	return 0;
}

