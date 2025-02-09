#include <stdio.h>

int main(){
	int t, n;
	scanf("%d", &t);
	for(int i = 1; i<= t;i++){
		scanf("%d", &n);
		if(n&1){
			printf("ODD\n");
		} else  {
			printf("EVEN\n");
		}
	}	
}
