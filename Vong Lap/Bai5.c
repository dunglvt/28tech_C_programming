#include <stdio.h>

int main(){
	int n;
	double sum = 0;
	scanf("%d", &n);
	for(int i = 1;i<=n ;i++){
		sum += 1.0/(2*i);
	} 
	printf("%.5lf", sum);
	return 0;
	
}

