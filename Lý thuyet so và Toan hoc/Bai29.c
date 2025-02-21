#include <stdio.h>
#include <math.h>

int thuanNghich(int n){
	int  x = 0;
	int temp = n;
	while(n){
		x = x*10 + n%10;
		n /= 10;
	}
	return x == temp;
}

int tong(int n){
	int sum = 0;
	int kt = 0;
	while(n){
		if(n%10 == 6) {
			kt = 1;
		}
		sum += n%10;
		n /= 10;
	}
	return kt && sum%10 == 8;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = a; i<=b; i++){
    	if(thuanNghich(i) && tong(i)){
    		printf("%d ", i);
		}
	}
	return 0;
}

