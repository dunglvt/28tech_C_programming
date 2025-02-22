#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

double tong(int a[], int n){
	int sum = 0;
	int res = 0;
	for(int i = 1;i<=n;i++){
		if(isPrime(a[i])){
			sum += a[i];
			++res;
		}
	}
	return 1.0*sum/res;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i <= n; i++){
    	scanf("%d", &a[i]);
	}
	printf("%.3lf", tong(a, n));
	return 0;
}

