#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	long long A = 1ll * x * x * x + 3ll * x * x + x + 1; 
	printf("%lld", A);
	return 0;
}
