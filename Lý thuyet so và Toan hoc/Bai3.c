#include <stdio.h>
#include <math.h>

int isPrime(int n){
	int temp = sqrt(n);
	for(int i = 2; i<=temp; i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 2; i<= n/2;i++){
			if(isPrime(i) && isPrime(n-i)){
				printf("%d %d\n", i, n-i);
				continue; 
			}
		}
	}
	return 0;
}

