// so lon nhat, nho nhat

#include <stdio.h>

int main(){
	int a, b, min, max;
	scanf("%d %d", &a, &b);
	
	max = a / b * b;
	min = (a / b + 1) * b;
	
	printf("%d %d", max, min);
	return 0;
}
