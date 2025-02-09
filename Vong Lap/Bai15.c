#include <stdio.h>

int main(){
	unsigned int n;
	long long gt = 1;
	scanf("%u", &n);
	for(int i = n; i>= 1; i--){
		gt *= i;
	}
	printf("%lld", gt);
	return 0;
	
}

