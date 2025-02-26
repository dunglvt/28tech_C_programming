#include <stdio.h>
#include <math.h>

int check(int a[], int n, int i, int j){
	int even = 0;
	int odd = 0;
	for(int k = i; k<=j;k++){
		if(a[k]&1){
			++odd;
		} else {
			++even;
		}
	}
	return even == odd;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    int res = 0;
    for(int i = 0; i<n;i++){
    	for(int j=i;j<n;j++){
    		if(check(a,n,i,j)){
    			++res;
			}
		}
	}
	printf("%d", res);
	return 0;
}

