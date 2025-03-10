#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp);
    int min = 1e9;
	for(int i = 1; i<n;i++){
    	if((a[i] - a[i-1]) < min){
    		min = a[i] - a[i-1];
		}
	}
	printf("%d", min);
	return 0;
}

