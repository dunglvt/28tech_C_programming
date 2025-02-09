#include <stdio.h>
#include <math.h>	
		
int main(){
	unsigned long long n;
	int cnt = 0;
	scanf("%llu", &n);
	while(n){
		unsigned long long tmp = n%10;
		if(tmp == 2 || tmp == 3 || tmp == 5  || tmp == 7 ){
			++cnt;
		}
		n /= 10;
	}
	printf("%d", cnt);
	return 0;
}

