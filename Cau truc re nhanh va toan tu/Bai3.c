// doi nhiet do C sang do F

#include <stdio.h>

int main(){
	unsigned int c;
	scanf("%d", &c);
	
	float f = (1.0 * c * 9 / 5) + 32;	
	printf("%.2f", f);
	return 0;
}
