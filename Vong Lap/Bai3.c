#include <stdio.h>

int main(){
	int n;
	long long sum = 0;
	scanf("%d", &n);
	for(int i = 3; i<= n;i+=3){
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}

