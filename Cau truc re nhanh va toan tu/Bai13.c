// doi ngay -> nam, tuan, ngay

#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int nam = n / 365;
	int tuan = (n % 365) / 7;
	int ngay = (n % 365) % 7;
	
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
		
}

