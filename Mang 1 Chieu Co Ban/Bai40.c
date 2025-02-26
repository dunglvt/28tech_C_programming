#include <stdio.h>
#include <math.h>

int B[10] = {0};

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] < 0){
			a[i] = -1*a[i];
		}
		while(a[i]){
			++B[a[i]%10];
			a[i] /= 10;
		}
    }
    for(int i = 0;i<10; i++){
    	if(B[i] != 0){
    		printf("%d %d\n", i, B[i]);
		}
	}
	return 0;
}

