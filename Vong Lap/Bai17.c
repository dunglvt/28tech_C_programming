#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int s = 0;

	while(n){
		s += n%10;
		n /= 10;
	}
	printf("%d", s);
	return 0;
}

