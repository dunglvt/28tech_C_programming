#include <stdio.h>

int main(){
	long long n, u1, d;
	scanf("%lld%lld%lld", &n, &u1, &d);
	
	long long s = n*u1 + n*(n-1)*d/2;
	
	printf("%lld", s);
	return 0;
}

