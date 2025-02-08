#include <stdio.h>

int main(){
	unsigned int h, m;
	scanf("%u %u", &h, &m);
	
	printf("%u", 1440 - 60 * h - m);
	return 0;
}

