#include <stdio.h>
#include <math.h>

#define ll long long

int c = 0;
int l = 0;

int chan(ll n){
	if(n==0){
		return 0;
	}
	if(n%2==0){
		c += n%10;
	} 
	return c + chan(n/10);
}

int le(ll n){
	if(n==0){
		return 0;
	}
	if(n%2==1){
		l += n%10;
	} 
	return l + le(n/10);
}

int main(){
    ll n;
    scanf("%lld", &n);
    chan(n);
    le(n);
    printf("%d\n%d", c, l);
    return 0;
}

