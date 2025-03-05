#include <stdio.h>
#include <math.h>

int M[3] = {0};

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		++M[a[i]];
    }
    for(int i = 0; i<3; i++){
    	while(M[i] != 0){
    		printf("%d ", i);
    		--M[i];
		}
	}
	return 0;
}

