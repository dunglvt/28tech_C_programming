#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n){
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

int main(){
    int n, k = 0;
    scanf("%d", &n);
    int a[n][n], b[n+n];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
    }
    
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(isPrime(a[i][i])){
				b[k++] = a[i][i];
			}
			if(i != n-i-1 && isPrime(a[i][n-i-1])){
				b[k++] = a[i][n-i-1];
			}
		}
    }
    
    qsort(b, k, sizeof(int), cmp);
    int count = 0;
    if(k > 0){
    	count = 1;
	} 
    for(int i = 1; i<k;i++){
    	if(b[i] != b[i-1]){
    		++count;
		}
	}
    printf("%d", count);
    return 0;
}

