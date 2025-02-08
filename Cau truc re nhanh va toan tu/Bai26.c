#include <stdio.h>

#define ll long long

ll max(ll a, ll b){
	return a > b ? a : b;
} 

ll  min(ll a, ll b){
	return a < b ? a : b;
}

int main(){
	long long a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	
	printf("%lld %lld", max(max(max(a,b),c),d), min(min(min(a,b),c),d));
	return 0;
}

