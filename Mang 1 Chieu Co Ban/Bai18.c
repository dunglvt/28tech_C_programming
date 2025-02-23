#include <stdio.h>
#include <math.h>

#define ll long long

void kiemTra(ll a[], int n){
	for(int i = 0; i<n;i++){
		if(i==0){
			if(a[0]*a[1] < 0) {
				printf("%lld ", a[0]);
			}
		} else if(i == n-1){
			if(a[n-1]*a[n-2] < 0) {
				printf("%lld", a[n-1]);
			}
		} else {
			if(a[i]*a[i+1] < 0 || a[i]*a[i-1] < 0){
				printf("%lld ", a[i]);
			} 
		}
	}
}

int main(){
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
    }
    kiemTra(a, n);
    return 0;
}

