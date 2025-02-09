#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int tmp = n/2;
	if(n==1){
		printf("-1");
	} else {
		printf("%d\n", tmp);
		while(tmp){
			if(n==3){
				printf("3");
				--tmp;
				n -= 3;
			} else if(n != 3){
					printf("2 ");
					--tmp;
					n -= 2;
				}
			}
		}		
	return 0;
}

