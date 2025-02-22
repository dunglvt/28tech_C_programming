#include <stdio.h>
#include <math.h>

long long s(int n){
	if(n==1) return 1;
	return 1ll*n*n*n + s(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", s(n));
	return 0; 
}

