#include <stdio.h>

int main(){
	unsigned long long a, b;
	scanf("%llu%llu", &a, &b);
	long long gt = 1;
	if(a>b){
		for(int i = 1;i<=b;i++){
			gt *= i;
		}
	} else {
		for(int i = 1;i<=a;i++){
			gt *= i;
		}
	}
	printf("%lld", gt);
	return 0;
}

