#include <stdio.h>
#include <math.h>

void bubbleSort(int a[], int n){
	int k = 1;
	for(int i = 0; i<n-1; i++){
		for(int j = 0 ;j < n-i-1; j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		printf("Buoc %d: ", k++);
		for(int i = 0; i<n;i++){
			printf("%d ", a[i]);
		}
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
    bubbleSort(a, n);
    return 0;
}

