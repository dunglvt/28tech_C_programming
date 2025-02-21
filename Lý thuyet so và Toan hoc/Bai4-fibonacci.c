#include <stdio.h>
#include <math.h>

#define ll long long

int isPrime(int n){
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
} 

int kt(int n){
	if(n==0 || n==1) return 1;
	int f1 = 1;
	int f2 = 1;
	for(int i = 2; i<= 92; i++){
		int fn = f1 + f2;
		if(fn == n) 
			return n;
		f2 = f1;
		f1 = fn;
	}
	return 0;
}

int kt2(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return kt(sum);
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<= n;i++){
    	if(kt2(i) && isPrime(i)){
    		printf("%d ", i);
		}
	}
	return 0;
}

