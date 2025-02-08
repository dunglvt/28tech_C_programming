//xep loai hoc sinh

#include <stdio.h>

int main(){
	float a, b, c, d, t;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	t = ( a + b + c*2 + d*3 ) / 7;
	
	if(t >= 8){
		printf("GIOI");
	} else if(t < 8 && t >= 6.5){
		printf("KHA");
	} else if(t < 6.5 && t >= 5){
		printf("TRUNG BINH");
	} else {
		printf("YEU");
	}
	return 0;
}

