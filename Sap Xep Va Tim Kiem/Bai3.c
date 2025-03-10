#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int tong(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(tong(*x) != tong(*y)){
		return tong(*x) - tong(*y);
	} else {
		return *x - *y;
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    for(int i = 0; i<n;i++){
    	printf("%d ", *(a+i));
	}
	return 0;
}

