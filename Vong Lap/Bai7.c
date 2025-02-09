#include <stdio.h>
#include <math.h>

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	
	for(int i = 1; i*i<=n; i++){
		if(n%i==0){
			cnt += 2;
			if(i * i == n){
				cnt -= 1;
			}
		}
	}
	printf("%d\n", cnt);
	for(int i = 1; i<=n; i++){
		if(n%i==0){
			printf("%d ", i);
		}
	}
	return 0;
}

