#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n-1];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    for(int i = 0; i < n-1; i++){
		scanf("%d", &b[i]);
    }
    int sum = a[0];
    for(int i = 0; i<n-1;i++){
    	if(b[i] == 2){
    		sum -= a[i+1];
		} else if(b[i] == 1){
			sum += a[i+1];
		}
	} 
	printf("%d", sum);
	return 0;
}

