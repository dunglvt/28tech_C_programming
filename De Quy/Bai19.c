#include <stdio.h>
#include <math.h>

#define ll long long

int key = 0;

void kt(ll n){
	if(n&1){
		key = 1;
	}
	if(n>9){
		kt(n/10);
	} 
	if(n<10){
		return;
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    kt(n);
    if(key){
    	printf("NO");
	} else {
		printf("YES");
	}
	return 0;
}

