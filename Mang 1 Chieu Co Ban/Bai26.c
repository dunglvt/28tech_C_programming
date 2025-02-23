#include <stdio.h>
#include <math.h>

int M[1000001] = {0};

void mangDanhDau(int a[], int n){
	int res = 0;
	for(int i = 0; i<n;i++){
		if(M[a[i]] == 0){
			M[a[i]] = 1;
			++res;
		} else {
			++M[a[i]];
		}
	}
	printf("%d ", res);
} 

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    mangDanhDau(a, n);
    return 0;
}

