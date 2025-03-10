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
	int ans = 0;
	int index = 0;
	int count = 1;
    for(int i = 1; i<n;i++){
    	if(a[i] == a[i-1]){
    		++count;
		} else {
			if(count > ans){
    			ans = count;
    			index = i-1;
			}
			count = 1;
		}
	}
	if(count > ans){
		ans = count;
		index = n-1;
	}
	printf("%d %d", a[index], ans);
    return 0;
}

