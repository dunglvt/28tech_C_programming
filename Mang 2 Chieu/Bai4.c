#include <stdio.h>
#include <math.h>

int thuanNghich(int n){
	int tmp = n;
	int x = 0;
	while(n){
		x = x*10 + n%10;
		n /= 10;
	}
	return x == tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
    }
    
    int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(thuanNghich(a[i][j])){
				++count;
			}
		}
    }
    printf("%d", count);
    return 0;
}

