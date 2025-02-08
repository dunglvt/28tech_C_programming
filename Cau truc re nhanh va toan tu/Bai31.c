#include <stdio.h>

int main(){
	int a1,a2,a3,b1,b2,b3,n, r1, r2;
	scanf("%d%d%d%d%d%d\n", &a1,&a2,&a3,&b1,&b2,&b3);
	scanf("%d", &n);
	
	int s1 = a1+a2+a3;
	int s2 = b1+b2+b3; 
	
	if(s1 % 5 == 0){
		r1 = s1/5;
	} else {
		r1 = s1/5 + 1;
	}
	
	if(s2 % 10 == 0){
		r2 = s2/10;
	} else {
		r2 = s2/10 + 1;
	}
	
	if(r1 + r2 <= n){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

