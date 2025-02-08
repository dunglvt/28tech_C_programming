// kiem tra tam giac

#include <stdio.h>
#include <math.h>

int main(){
	int a ,b ,c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		if(a==b && b==c){
			printf("1");
		} else if(a==b || b==c || a==c){
			printf("2");
		} else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			printf("3");
		} else 
			printf("4");
	} else {
		printf("INVALID");
	}
	return 0;
}

