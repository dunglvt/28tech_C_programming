#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    ll sum = 0;
	for(int i = 0;i<k;i++){
		sum += a[i];
	}
	ll res = sum, pos = 0;
	for(int i = 1; i<=n-k;i++){
		sum = sum - a[i-1] + a[i+k-1];
		if(sum > res){
			res = sum;
			pos = i;
		}
	} 
	printf("%lld\n", res);
	for(int i = 0; i<k;i++){
		printf("%d ", a[pos + i]);
	}
	return 0;
}

