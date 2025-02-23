#include <stdio.h>
#include <math.h>

void mangCongDon(int a[], int n){
	int F[n];
	int sum = 0;
	for(int i = 0; i<n;i++){
		sum += a[i];
		F[i] = sum;
	}
	for(int i = 0; i<n;i++){
		printf("%d ", F[i]);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    mangCongDon(a, n);
    return 0;
}

