#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    ll res = 0;
   	for(int i = 9; i>=0;i--){
   		if(n >= a[i]){
   			res += n/a[i];
   			n %= a[i];
		}
		if(n==0){
			break;
		}
	}
	printf("%lld", res);
	return 0;
}

