#include <stdio.h>
#include <math.h>

void latNguoc(int a[], int n){
	for(int i = n-1; i>=0;i--){
		printf("%d ", a[i]);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    latNguoc(a, n);
    return 0;
}

