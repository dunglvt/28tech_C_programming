#include <stdio.h>
#include <math.h>

int isPrime(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
												
int main(){
	long long n;
	scanf("%lld", &n);
	int cnt = 0;
	for(int i = 1; i<=sqrt(n);i++){
		if(isPrime(i)){
			++cnt;
		}
	}
	printf("%d", cnt);
	return 0;
}

