#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
    }
    
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(isPrime(a[i][j])){
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
    }
    
	return 0;
}
