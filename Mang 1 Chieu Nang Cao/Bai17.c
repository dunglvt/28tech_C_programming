#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, q, l, r;
    scanf("%d %d", &n, &q);
    int a[n+1];
	ll F[n+1];
	F[0] = 0;
    for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		F[i] = F[i-1] + a[i];
    }
    while(q--){
    	scanf("%d %d", &l, &r);
		printf("%lld\n", F[r] - F[l-1]);
	}
	return 0;
}

