#include <stdio.h>
#include <math.h>

#define ll long long

ll f[1000001];

void fibonacci(ll n){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2;i <= 1000001;i++){
		f[i] = f[i-1] + f[i-2];
		if(f[i] - n >= 0){
			printf("%lld", f[i]);
			return;
		}
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    fibonacci(n);
    return 0;
}

