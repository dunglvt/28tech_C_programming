#include <stdio.h>

int main(){
	int n, c;
	scanf("%d", &n);
	
	c = n / 100;
	n %= 100;
	c += n / 20;
	n %= 20;
	c += n / 10;
	n %= 10;
	c += n / 5;
	n %= 5;
	c += n / 1;
	n %= 1;
	printf("%d", c);
	return 0;
	
}

