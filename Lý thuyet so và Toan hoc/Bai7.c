#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i =1;i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}	
	
int gcd(int a, int b){
	while( b!= 0){
		int res = a%b;
		a = b;
		b = res;
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int  i = a;i<b;i++){
		for(int j = i+1; j<=b; j++){
			if(gcd(i, j) == 1){
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	return 0;
}

