#include <stdio.h>
#include <math.h>

int max(int a, int b){
	return a>b ? a : b;
}

int min(int a, int b){
	return a<b ? a : b;
}

int minC(int a[], int n){
	int res = 1e9;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j<n;j++){
			int temp = max(a[i], a[j]) - min(a[i], a[j]);
			if(temp < res){
				res = temp;
			}
		}
	}
	return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    printf("%d", minC(a, n));
    return 0;
}

