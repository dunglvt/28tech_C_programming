#include <stdio.h>
#include <math.h>

void selectionSort(int a[], int n){
	int min_idx;
	int k = 1;
	for(int i = 0; i<n-1;i++){
		min_idx = i;
		for(int j = i+1; j <n;j++){
			if(a[j] <  a[min_idx]){
				min_idx = j;
			}
		}
		int tmp = a[min_idx];
		a[min_idx] = a[i];
		a[i] = tmp;
			printf("Buoc %d: ", k);
			for(int u = 0; u<n; u++){
    			printf("%d ", a[u]);
			}
			++k;
			printf("\n");
	}
} 

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    selectionSort(a, n);
	return 0;
}

