#include <stdio.h>
#include <math.h>

int a[1000];

void inMang(int i, int n){
	if(i > n-1){
		return;
	} else {
		printf("%d ", a[i]);
		inMang(++i, n);
	}
}

void inMang1(int i, int n){
	if(i > n-1){
		return;
	} else {
		printf("%d ", a[n-i-1]);
		inMang1(++i, n);
	}
}

int main(){
	int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    int i = 0;
    inMang(i, n);
    printf("\n");
    inMang1(i, n);
    return 0;
}

