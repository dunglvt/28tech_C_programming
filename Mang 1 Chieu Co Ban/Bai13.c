#include <stdio.h>
#include <math.h>

#define ll long long

ll tong(ll a[], int n){
	ll sum = 0;
	for(int i =0;i<n;i++){
		sum += a[i];
	}
	return sum%(1000000007);
}

ll tich(ll a[], int n){
	ll tich = 1;
	for(int i =0;i<n;i++){
		tich = (tich * a[i])%(1000000007);
	}
	return tich;
}


int main(){
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
    }
    printf("%lld\n%lld", tong(a, n), tich(a, n));
    return 0;
}

