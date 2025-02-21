#include <stdio.h>
#include <math.h>

int prime[10000001];

void sang(){
	for(int i = 0; i<= 10000000; i++){
		prime[i] = 1;
	}	
	prime[0] = prime[1] = 0;
	for(int i = 2; i<= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

int kt(int n){
	int temp = n;
	int lastDigit = temp%10;
	while(n){
		if(lastDigit < n%10){
			return 0;
		}
		n /= 10;
	}
	return 1;
}

int main(){
	sang();
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 2; i<= n;i++){
    	if(prime[i] && kt(i)){
    		++count;
    		printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}

