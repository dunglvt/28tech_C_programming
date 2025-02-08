// tinh chu vi va dien tich hinh tron

#include <stdio.h>

#define PI 3.14
int main(){
	int r;
	scanf("%d", &r);
	
	double chuVi = 2 * PI * r;
	double dienTich = PI * r * r;
	printf("%.4lf %.4lf", chuVi, dienTich);
	return 0;
}
