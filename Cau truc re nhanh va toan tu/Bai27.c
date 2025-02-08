#include <stdio.h>

int main(){
	float a;
	scanf("%f", &a);
	
	float b = a - (int) a;
	if(b >= 0.5){
		printf("%d", (int)a + 1);
	} else {
		printf("%d", (int)a);
	}
	return 0;
}

