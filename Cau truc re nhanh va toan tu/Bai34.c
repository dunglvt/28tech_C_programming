#include <stdio.h>

int main(){
	int c1, c2, c3, c4, c5;
	scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
	
	int res = c1 + c2 + c3 + c4 + c5; ;
	if(res % 5 == 0){
		int b = res / 5;
		if(b != 0) printf("%d", b);
		else printf("-1");
	} else {
		printf("-1");
	}
	return 0;
}

