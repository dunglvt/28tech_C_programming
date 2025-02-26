#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    int res = 0;
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] == 28){
			++res;
		}
    }
    int j = 0;
    if(res<n){
    	for(int i = 0; i<n;i++){
    		if(a[i] != 28){
    			b[j] = a[i];
				++j; 
			}
		}
		for(int i = 0; i<n-res;i++){
			printf("%d ", b[i]);
		}
	} else {
		printf("EMPTY");
	}
	return 0;
}

