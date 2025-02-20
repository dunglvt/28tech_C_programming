#include <stdio.h>
#include <math.h>

void sphenic(long long n){
	int count = 0;
	long long temp = n; 
	int sqrt_temp = sqrt(temp); 
	for(int i = 2;i <= sqrt_temp; i++){
		int res = 0;
		if(n%i==0){
			while(n%i==0){
				++res;
				n /= i;
			if(res >= 2){
				printf("0");
			return;
				}
			}
		++count;	
		}
	} 
	if(n>1){
		++count;
	}
	printf(count == 3? "1":"0"); 
}

int main(){
    long long n;
    scanf("%lld", &n);
    sphenic(n);
}

