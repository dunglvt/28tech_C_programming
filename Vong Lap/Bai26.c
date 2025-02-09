#include <stdio.h>

int main(){
	int a, b, n;
	scanf("%d%d%d", &a, &b, &n);
	for(int i = 0 ; i<= 1000; i++){
		if((n-b*i)%a == 0 && (n-b*i)/a >= 0){
			printf("YES");
			return 0;
		}
	} 
	printf("NO");
	return 0;
}

