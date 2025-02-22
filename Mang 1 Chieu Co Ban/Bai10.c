#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
} 

void lietKe(int a[], int n){
	for(int i = 1; i<n-1;i++){
		int sP = 0;
		int sT = 0;
		for(int j = i+1; j<n;j++){
			sP += a[j];
		}
		for(int k = 0; k<i;k++){
			sT += a[k];
		}
		if(isPrime(sP) && isPrime(sT)){
			printf("%d ", i);
		}
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    lietKe(a, n);
    return 0;
}

