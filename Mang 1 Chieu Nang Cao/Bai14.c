#include <stdio.h>
#include <math.h>

int kiemTra(int n){
	int tmp = 0;
	while(n){
		int a = n%10;
		int b = (n/10)%10;
		if(a<b) {
			return 0;
		}
		n /= 10;
	}
	return 1;
}

int main(){
    int n;
    int a[100001];
    int cnt = 0;
    while(scanf("%d", &n) != -1){
    	
	}
	return 0;
}

