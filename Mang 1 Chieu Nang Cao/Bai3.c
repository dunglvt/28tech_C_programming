#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    for(int i = 0; i<n;i++){
    	int check = 0;
    	for(int j = 0; j<i;j++){
    		if(a[j] >= a[i]){
    			check = 1;
    			break;
			}
		}
		if(check == 0){
			printf("%d ", a[i]);
		}
	}
	return 0;
}

