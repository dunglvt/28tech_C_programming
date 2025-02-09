#include <stdio.h>
#include <math.h>

int main(){
	long long n, sum = 0;
	scanf("%lld", &n);
	
	for(int i = 1; i<= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != n/i){
				sum += n/i;
			}
		}
	}
	printf("%lld", sum);
	return 0;
}

