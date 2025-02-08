#include <stdio.h>

int main(){
	unsigned int a, b, c, n, res;
	scanf("%u %u %u %u", &a, &b, &c, &n);
	
	res = (a + b + c + n) ;
	if(res % 3 == 0){
		if(a <= (res / 3) && b <= (res / 3) && c <= (res / 3)){
			printf("YES");
		} else {
		printf("NO");
	}
	} else {
		printf("NO");
	}
	return 0;
}

