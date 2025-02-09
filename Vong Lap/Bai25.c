#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	float thuong = 1;
	long long gt = 1;
	for(int i = 1;i<=n-1;i++){
		gt *= i;
		thuong += 1.0/gt;
	}
	printf("%.4f", thuong);
	return 0;
}

