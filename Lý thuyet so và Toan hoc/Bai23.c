#include <stdio.h>
#include <math.h>

#define ll long long

ll tongUoc(ll n){
	ll sum = 0;
	for(int i = 1; i<= sqrt(n); i++){
		if(n%i==0){
			sum += i;
			if(i != n/i){
				sum += n/i;
			}
		}
	}
	return sum;
}

int main(){
    ll n;
    scanf("%lld", &n);
    printf("%lld", tongUoc(n));
    return 0;
}

