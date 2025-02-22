#include <stdio.h>
#include <math.h>

int kiemTra(int a[], int n, int k){
	int res = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i] + a[j] == k){
				++res;
			}
		}
	}
	return res;
}

int main(){
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    scanf("%d", &k);
	printf("%d", kiemTra(a, n, k));
	return 0;
}

