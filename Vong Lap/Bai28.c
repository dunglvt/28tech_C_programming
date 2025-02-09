#include <stdio.h>

#define ll long long

int main(){
	int n;
	scanf("%d", &n);

	ll sum = 0;
	for(int i = 1; i<=n;i++){
		ll gt = 1;
		for(int j = 1; j<= i; j++){
			gt *= j;
		}
		sum += gt;
	}
	printf("%lld", sum);
	return 0;
}

