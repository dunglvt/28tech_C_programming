#include <stdio.h>
#include <math.h>

#define ll long long

ll gcd(ll a, ll b){
	while(b){
		ll r = a%b;
		a = b;
		b = r;
	}         
	return a;    
}

ll lcm(ll a, ll b){
	return a/gcd(a, b)*b;
}

int main(){
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld %lld", gcd(a, b), lcm(a, b));
    return 0;
}

