#include <stdio.h>
#include <math.h>

int main(){
	int n, s = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(i&1){
			s -= i;
		} else {
			s += i;
		}
	}
	printf("%d", s);
	return 0;
}

