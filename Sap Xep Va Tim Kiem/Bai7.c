#include <stdio.h>
#include <math.h>

void inSectionSort(int a[], int n){
	int k = 1;
	for(int i = 1; i<n;i++){
		int pos = i-1;
		int value = a[i];
		while(pos >= 0 && value < a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1] = value;
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
    inSectionSort(a, n);
    return 0;
}

