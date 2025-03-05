#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    ll dem = 0;
    for(int i = 1;i <n;i++){
    	if(a[i] <= a[i-1]){
    		dem += a[i-1] + 1 - a[i];
    		a[i] = a[i-1] + 1;
		}
	}
	printf("%lld", dem);
	return 0;
}

