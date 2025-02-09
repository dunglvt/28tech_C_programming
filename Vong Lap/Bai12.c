#include <stdio.h>

int main(){
	int n;
	long long sum = 0;
	scanf("%d", &n);
	for(int i = 2;i<=2*n;i+=2){
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}

