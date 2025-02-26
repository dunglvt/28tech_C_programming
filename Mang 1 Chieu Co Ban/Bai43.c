#include <stdio.h>
#include <math.h>

void tong(int a[], int n){
	for(int i = 0; i<n;i++){
		int sum = 0;
		for(int j = i; j<n;j++){
			sum += a[j];
			printf("%d ", sum);
		}
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    tong(a, n);
    return 0;
}

