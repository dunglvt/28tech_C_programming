#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    for(int i = 1; i < n-1; i++){
    	if(a[i-1] > a[i] && a[i] < a[i+1]){
    		printf("%d ", a[i]);
		}
    }
    return 0;
}

