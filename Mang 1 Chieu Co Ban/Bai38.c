#include <stdio.h>
#include <math.h>

void tongDaySo(int a[], int n){
	for(int i = 1; i<n;i++){
		int sum = a[i];
		sum = a[i] + a[i-1];
		printf("%d ", sum);
		sum = a[0];
	}
	printf("\n");
	for(int i = 2; i<n;i++){
		int sum1 = a[i];
		sum1 = a[i] + a[i-1] + a[i-2];
		printf("%d ", sum1);
		sum1 = a[0];
	}
	printf("\n");
	for(int i = 3; i<n;i++){
		int sum2 = a[i];
		sum2 = a[i] + a[i-1] + a[i-2] + a[i-3];
		printf("%d ", sum2);
		sum2 = a[0];
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    tongDaySo(a, n);
    return 0;
}

