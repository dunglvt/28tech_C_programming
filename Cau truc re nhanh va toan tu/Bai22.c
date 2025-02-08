#include <stdio.h>

int main(){
	long long n, s, t;
	scanf("%lld %lld", &n, &s);
	if(s % n == 0){
		t = s / n;
	} else {
		t = s / n + 1;
	}
	printf("%lld", t);
	return 0;
}

