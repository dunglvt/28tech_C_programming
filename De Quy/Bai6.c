#include <stdio.h>
#include <math.h>

int f(int n){
	if(n==1) return 0;
	if(n==2) return 1; 
	return f(n-1) + f(n-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}

