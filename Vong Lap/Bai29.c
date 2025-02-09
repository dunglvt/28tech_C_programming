#include <stdio.h>

int main(){
	int n, a;
	long long sum = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &a);
		if(a%2==0) sum += a; 
	}
	printf("%lld", sum);
	return 0;
}

