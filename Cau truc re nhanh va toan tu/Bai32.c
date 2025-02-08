#include <stdio.h> 

int main(){
	unsigned long long k2, k3, k5, k6, min;
	scanf("%llu %llu %llu %llu", &k2, &k3, &k5, &k6);
	min = k2;
	if(min > k5){
		min = k5;
	}
	if(min > k6){
		min = k6;
	}
	if(k2 - min > k3){
		printf("%llu", min * 256 + k3 * 32);
	}
	else{
		printf("%llu", min * 256 + (k2 - min) * 32);
	}
	return 0;
}

