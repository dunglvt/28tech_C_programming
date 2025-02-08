// domino 
// nhap kich thuoc mxn, xep domino kich thuoc 2x1 sao cho vua khit 

#include <stdio.h>

int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(a&1){
		printf("%lld", a / 2 * b + ( b / 2 ));
	} else {
		printf("%lld", a / 2 * b);
	}
	return 0;
}

