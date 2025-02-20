#include <stdio.h>
#include <math.h>

int soDep1(int n){
	for(int i = 2; i<= sqrt(n); i++){
		int res = 0;
		while(n%i==0){
			++res;
			n /= i;	
		}
		if(res == 1) return 0;
	}
	if(n>1){
		return 0;
	}
	return 1;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i =a; i<= b; i++){
    	if(soDep1(i) == 1){
    		printf("%d ", i);
		}
	}
	return 0;
}

