#include <stdio.h>
#include <math.h>

int thuanNghich(int n){
	int x = 0;
	int temp = n;
	while(n){
		x = x*10 + n%10;
		n /= 10;
	}
	return x == temp;
}

int uocNT(int n){
	int cnt = 0;
	for(int i = 2;i<=sqrt(n); i++){
		if(n%i==0){
			++cnt;
			while(n%i==0){
				n /= i;
			}
		}
	}
	if(n != 1){
		++cnt;
	}
	return cnt >= 3;
}

int main(){
    int a, b;
    int t = 0; 
    scanf("%d%d", &a, &b);
    for(int i = a; i<= b;i++){
    	if(thuanNghich(i) && uocNT(i)){
    		printf("%d ", i);
    		t = 1;
		}
	}
	if(t == 0){
		printf("-1");
	}
	return 0;
}

