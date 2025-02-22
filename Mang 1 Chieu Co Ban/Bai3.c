#include <stdio.h>
#include <math.h>

int minM(int a[], int n){
	int min = 1e9;
	int res = 0;
	for(int i = 0; i<n;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	for(int i = 0; i< n;i++){
		if(a[i] - min == 0){
			++res;
		}
	}
	return res;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n;i++){
    	scanf("%d", &a[i]);
	}
	printf("%d", minM(a, n));
	return 0;
}

