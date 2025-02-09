#include <stdio.h>

int main(){
	unsigned long long n;
	scanf("%llu", &n);
	while(n>=10){
		int s = 0;
		while(n){
			s += n%10;
			n /= 10;
		}
		n=s;
	}
	printf("%llu", n);
	return 0;
}

