//tong, hieu, tich, thuong

#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	int tong = a + b;
	int hieu = a - b;
	long long tich = 1ll * a * b;
	
	printf("%d\n", tong);
	printf("%d\n", hieu);
	printf("%lld\n", tich);
	
	if(b==0){
		printf("INVALID");
	} else 
		printf("%.4lf", 1.0 * a / b);
	return 0;
}
