#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    for(int i = 0;i<n;i++){
    	int found = -1;
    	for(int j = i+1; j<n;j++){
    		if(a[j]> a[i]){
    			found = a[j];
    			break;
			}
		}
		printf("%d ", found);
	} 
    return 0;
}

