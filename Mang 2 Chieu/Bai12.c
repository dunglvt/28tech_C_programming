#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
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
    for(int i = 0; i<n;i++){
    	for(int j = i + 1; j<n;j++){
    		swap(&a[i][j], &a[j][i]);
		}
	} 
    
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
		qsort(a[i], n, sizeof(int), cmp);
		}
    }
     for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
    }
    return 0;
}

