#include <stdio.h>

int min(int a, int b){
	if(a>b){
		return b;
	} else {
		return a;
	}
}

int main(){
	int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);
	
	int s1 = d1 + d2 + d3;
	int s2 = d1 * 2 + d2 *2;
	int s3 = d1 * 2 + d3 *2;
	int s4 = d2 *2 + d3 * 2;
	printf("%d", min(min(min(s1, s2), s3), s4));
	return 0;
}

