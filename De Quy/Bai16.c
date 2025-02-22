#include <stdio.h>
#include <math.h>

#define ll long long

int max = 0;
int min = 9;

void maxMin(ll n){
	if(n%10 > max){
		max = n%10;
	}
	if(n%10 <min){
		min = n%10;
	}
	if(n<10){
		return;
	}
	if(n>10){
		maxMin(n/10);
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    maxMin(n);
    printf("%d %d", max, min);
    return 0;
}

