#include <stdio.h>
#include <math.h>

#define ll long long

int isPrime(ll n){
	for(int i =2; i <= sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int kt(ll n){
	for(int p = 1; p <= 33; p++){
        if(isPrime(p)){
            long long tmp1 = pow(2, p) - 1;
            if(isPrime(tmp1)){
                long long tmp2 = pow(2, p - 1);
                if(tmp1 * tmp2 == n){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    ll n;
    scanf("%lld", &n);
    if(kt(n)){
    	printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

