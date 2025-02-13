#include <stdio.h>
#include <math.h> 

int isPrime(int n){
	int temp = sqrt(n);
	for(int i = 2;i<=temp;i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int ktra(int n){
	int sum = 0;
	while(n){
		int digit = n%10;
		if(digit != 2 && digit != 3 && digit != 5 && digit != 7){
			return 0;
		}
		sum += n%10;
		n /= 10;
	}
	return isPrime(sum);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	int count = 0; 
	for(int i = a;i<=b;i++){
		if(ktra(i) && isPrime(i)){
			++count;
		}
	}
	printf("%d", count);
	return 0;
}

