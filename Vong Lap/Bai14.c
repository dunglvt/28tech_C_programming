#include <stdio.h>

int main(){
	int n;
	long long s = 0;
	scanf("%d", &n);
	for(int i = 1; i<=n;i++){
		s += 1ll*i*i*i;
	}
	printf("%lld", s);
	return 0;
}

