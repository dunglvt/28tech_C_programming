// Mua nuoc
// cho n lit nuoc can mua, trong shop co 2 chai nuoc loai 1 lit va 2 lit
// voi chai 1 lit co gia a, chai 2 lit co gia b
// can mua toi thieu bao nhieu tien

#include <stdio.h>
int main(){
	long long n,a,b;
	scanf("%lld %lld %lld", &n, &a, &b);
	
	if(a <= (b/2.0)){
		printf("%lld", a*n);
	} else {
		if(n&1){
			printf("%lld", n/2*2*b/2+a); 
		} else {
			printf("%lld", n*b/2); 
		}
	}
	return 0;
}

