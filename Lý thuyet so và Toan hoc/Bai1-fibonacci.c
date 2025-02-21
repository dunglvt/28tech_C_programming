#include <stdio.h>
#include <math.h>

#define ll long long

ll f[1000001];

void fibonacci(int n){
	f[0] = 0;
	f[1] = 1;
	printf("1\n");
	for(int i = 2;i <= n;i++){
		f[i] = f[i-1] + f[i-2];
		printf("%lld\n", f[i]);
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    fibonacci(n);
    return 0;
}

