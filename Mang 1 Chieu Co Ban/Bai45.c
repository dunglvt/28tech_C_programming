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

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    int cnt = 0;
    for(int i =0; i<n;i++){
    	int sum = 0;
    	for(int j = i; j<n;j++){
    		sum += a[j];
    		if(isPrime(sum)){
    			++cnt;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}

