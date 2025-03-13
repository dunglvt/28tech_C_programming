#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
    }
    int count = 0;
    for(int i = 0; i < n; i++){
		if(isPrime(a[i][i])){
			++count;
		}
		if(i != n-i-1 && isPrime(a[i][n-i-1])){
			++count;
		}
    }
    printf("%d", count);
    return 0;
}

