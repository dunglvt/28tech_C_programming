#include <stdio.h>
#include <math.h>

void viTri(int a[], int n){
	int b[n];
	int c[n];
	int min = 1e9;
	int max = -1e9;
	for(int i =0; i<n;i++){
		if(max < a[i]){
			max = a[i];
		}
		if(min > a[i]){
			min = a[i];
		}
	}
	int j = 0;
	int k = 0;
	for(int i = 0; i<n;i++){
		if(max == a[i]){
			b[j] = i;
			j++;
		}
		if(min == a[i]){
			c[k] = i;
			k++;
		}
	}
	printf("%d\n" , min);
	for(int i = 0; i<k;i++){
		printf("%d ", c[i]);
	}
	printf("\n");
	printf("%d\n" , max);
	for(int i = j-1; i>=0;i--){
		printf("%d ", b[i]);
	}
	return;
} 

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    viTri(a, n);
	return 0;
}

