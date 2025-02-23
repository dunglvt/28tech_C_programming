#include <stdio.h>
#include <math.h>

void kiemTra(int a[], int n){
	for(int i = 0; i<n;i++){
		if(i==0 || i == n-1){
			continue;
		} else {
			if(a[i] > a[i-1] && a[i] > a[i+1]){
				printf("%d ", a[i]);
			}
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
    kiemTra(a, n);
    return 0;
}

