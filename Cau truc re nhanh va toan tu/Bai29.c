#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(b%a==0){
		int res = b / a;
		if(b*res == c && c*res == d){
			printf("YES");
		} else {
			printf("NO");
		}
	} else {
		printf("NO");
	} 
	return 0;
}

