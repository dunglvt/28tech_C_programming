#include <stdio.h>
#include <math.h>

#define ll long long

int kt(ll n){
	if(n == 0 || n == 1) return 1;
	int f1 = 1, f2 = 1;
	for(int i = 2; i<=100; i++){
		ll fn = f1 + f2;
		if(fn == n){
			return 1;
		}
		f1 = f2;
		f2 = fn;
	}
	return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    	ll n;
    	scanf("%lld", &n);
    	if(kt(n)){
    		printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

