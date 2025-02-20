#include <stdio.h>
#include <math.h>

#define ll long long

int soLocPhat(ll n){
	while(n){
		if(n%10 != 0 && n%10 != 6 && n%10 != 8){
			return 0;;	
		}
		n /= 10;
	}
	return 1;
}

int main(){
    ll n;
    scanf("%lld", &n);
    if(soLocPhat(n)){
    	printf("1");
	} else {
		printf("0");
	}
	return 0;
}

