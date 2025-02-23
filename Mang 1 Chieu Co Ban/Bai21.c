#include <stdio.h>
#include <math.h>

void chenMang(int a[], int n, int x, int k){
	--k;
	for(int i = n; i>k;i--){
		a[i] = a[i-1];
	}
	a[k] = x;
	++n;
	for(int i = 0; i<n;i++){
		printf("%d ", a[i]);
	}
}

int main(){
    int n, x, k;
    scanf("%d%d%d", &n, &x, &k);
    int a[n+1];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    chenMang(a, n, x, k);
    return 0;
}

