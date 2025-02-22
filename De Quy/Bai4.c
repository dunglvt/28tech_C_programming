#include <stdio.h>
#include <math.h>

int s(int n){
	if(n==1) return -1;
	if(n&1) return -1*n + s(n-1);
	if(n%2==0) return n + s(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", s(n));
    return 0;
}

