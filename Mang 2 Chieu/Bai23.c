#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
    }
    for(int i = 0; i<n; i++){
    	for(int j = 0; j<n; j++){
    		if(i == 0 || i == n-1){
    			printf("%d ", a[i][j]);
			} else {
				printf("%d %d ", a[i][0], a[i][n-1]);
				break;
			}
		}
	}
	return 0;
}

