#include <stdio.h>
#include <math.h>

#define ll long long
void pt(ll n){
	int f = 1; 
	for(int i = 2; i<=sqrt(n); i++){
		int count = 0;
		if(n%i==0){
			while(n%i==0){
			n /= i;
			++count;
			}
			if(!f){
				printf(" * ");
			}
		printf("%d^%d", i, count);	 
		f = 0; 
		}	 
	}if(n!=1){
		if(!f){
				printf(" * ");
			}
		printf(" %lld^1", n);
	}
}

int main(){
	ll n;
	scanf("%lld", &n);
	pt(n);
}

