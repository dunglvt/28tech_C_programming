#include <stdio.h>
#include <math.h>

int min(int a, int b){
	if(a<b){
		return a;
	} 
	return b;
}


int thaoTac(int n){
	if(n==1){
		return 0;
	} else {
		int a=1e9, b=1e9, c=1e9;
		if(n%2==0){
			a = 1+ thaoTac(n/2);
		}
		if(n%3==0){
			b =1+ thaoTac(n/3);
		}
		if(n>1){
			c = 1+ thaoTac(n-1);
		}
		return min(min(a, b), c);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    thaoTac(n);
    printf("%d", thaoTac(n));
    return 0;
}

