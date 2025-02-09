#include <stdio.h>

int main(){
	long long n;
	int cnt = 0;
	scanf("%lld", &n);
	long long temp = n;
	for(;;){
		++cnt;
		temp /= 10;
		if(temp == 0){
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}

