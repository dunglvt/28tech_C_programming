#include <stdio.h>

int main(){
	int n;
	double sum = 0;
	scanf("%d", &n);
	for(int i = 1;i<=n ;i++){
		sum += 1.0/i;
	} 
	printf("%.3lf", sum);
	return 0;
	
}

