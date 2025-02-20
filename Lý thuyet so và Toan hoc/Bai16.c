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

int sum(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int phanTich(int n){
	int s = 0;
	for(int i = 2; i <= sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				s += sum(i);
				n /= i;
			}
		}
	}
	if(n != 1){
		s += sum(n);
	}
	return s;
}

int main(){
    int n;
    scanf("%d", &n);
    
    if(!isPrime(n) && sum(n) == phanTich(n)){
    	printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

