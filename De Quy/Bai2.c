#include <stdio.h>
#include <math.h>

int sum(int n){
	if(n==1) return 1;
	return n*n + sum(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}

