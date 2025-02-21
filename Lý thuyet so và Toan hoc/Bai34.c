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
	return a*b/gcd(a, b);
}

void kt(int x, int y, int z, int n){
	ll bcnn = lcm(lcm(x, y), z);
	ll a = (ll)pow(10, n);
	ll b = (ll)pow(10, n-1);
	ll kq = (b + bcnn - 1)/bcnn * bcnn;
	if(kq < a){
		printf("%lld", kq);
	} else {
		printf("-1");
	}
}

int main(){
    int x, y, z, n;
    scanf("%d%d%d%d", &x, &y, &z, &n);
    kt(x, y, z, n);
    return 0;
}

