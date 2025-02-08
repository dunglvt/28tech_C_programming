// khoang cach euclid

#include <stdio.h>
#include <math.h>

int main(){
	int x1, x2, y1, y2;
	double d;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);    
		
	d = 1.0 * sqrt(1ll*(x1 - x2)*(x1 - x2) + 1ll*(y1 - y2)*(y1 - y2));
	printf("%.2lf", d);
	return 0;
}	
