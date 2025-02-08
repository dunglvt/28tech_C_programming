#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	long long s = 1ll * a * (b + c) + 1ll * b * (a + c); 
	printf("%lld", s);
	return 0; 
}
