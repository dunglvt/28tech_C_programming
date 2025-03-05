#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, d;
    scanf("%d%d", &n, &d);
    ll a[n];
    for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
    }
    ll cnt = 0;
    int q;
    for(int i = 1;i < n;i++){
    	if(a[i] <= a[i-1]){
    		ll tmp = a[i-1] - a[i] + 1;
    		if(tmp%d==0){
    			q = tmp/d;
			} else {
				q = tmp/d + 1;
			}
			cnt += q;
			a[i] += q*d;
		}
	}
	printf("%lld", cnt);
	return 0;
}

