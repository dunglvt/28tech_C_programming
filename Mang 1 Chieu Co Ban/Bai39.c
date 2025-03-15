#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    
    int dem1 = 0;
   	for(int i = 0; i<n;i++){
   		if(a[i] - 1 == 0){
   			++dem1;
		} else {
			if(dem1 != 0){
				printf("%d ", dem1);
				dem1 = 0;
			}
		}
	}
	if(a[n-1] == 1){
		printf("%d", dem1);
	}
	printf("\n");
	
	int dem0 = 0;
   	for(int i = 0; i<n;i++){
   		if(a[i] == 0){
   			++dem0;
		} else {
			if(dem0 != 0){
				printf("%d ", dem0);
				dem0 = 0;
			}
		}
	}
	if(a[n-1] == 0){
		printf("%d", dem0);
	}
    return 0;
}

