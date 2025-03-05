#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i = 2; i <= sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	int n = 0;
	int a[10000];
	int tmp;
	while(scanf("%d", &tmp) != -1){
		a[n++] = tmp;
	}
	for(int i = 0; i<n;i++){
		int check = 1;
		for(int j = 0; j<i;j++){
			if(a[i] == a[j]){
				check = 0;
				break;
			}
		}
		if(check){
			if(isPrime(a[i])){
				int count = 1;
				for(int j = i+1; j<n;j++){
					if(a[i] == a[j]){
						++count;
					}
				}
				printf("%d %d\n", a[i], count);
			}
		}
	}
	return 0;
}

