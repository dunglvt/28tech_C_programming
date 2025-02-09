#include <stdio.h>
#include <math.h>

int main(){
	int n;
	long long t = 1;
	scanf("%d", &n);
	for(int i = 1; i<= sqrt(n);i++){
		if(n%i==0){
			t *= i;
			if(i != n/i){
			t *= n/i;
			}
		}
	}
	printf("%lld", t);
	return 0;
}

