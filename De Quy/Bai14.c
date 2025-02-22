#include <stdio.h>
#include <math.h>

#define ll long long
int cnt = 0;
void dem(ll n){
	if(n>10){
		dem(n/10);
	}
	n /= 10;
	++cnt;
}

int main(){
    ll n;
    scanf("%lld", &n);
    dem(n);
    printf("%d", cnt);
}

