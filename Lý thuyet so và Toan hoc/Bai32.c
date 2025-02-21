#include <stdio.h>
#include <math.h>

void kt(int n, int k){
	int res = 0;
	for(int i = 2; i<= sqrt(n);i++){
		while(n%i==0){
			++res;
			if(res == k){
				printf("%d", i);
				return;
			}
			n /= i;
		}
	}
	if(n != 1){
		++res;
	}
	if(res == k){
			printf("%d", n);
		} else {
			printf("-1");
		}
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    kt(n, k);
    return 0;
}

