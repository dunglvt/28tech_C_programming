#include <stdio.h>
#include <math.h>

#define ll long long

int soChinhPhuong(ll a, ll b){
	int canDuoi = ceil(sqrt(a));
	int canTren = sqrt(b);
	return canTren - canDuoi + 1;
}

int main(){
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%d", soChinhPhuong(a, b));
    return 0;
}

