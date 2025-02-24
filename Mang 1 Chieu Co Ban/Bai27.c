#include <stdio.h>
#include <math.h>

int M[1000001] = {0};

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		M[a[i]]++;
    }
    for(int i = 0; i<=1000000;i++){
    	if(M[i] > 0){
    		printf("%d %d\n", i, M[i]);
		}
	}
    return 0;
}



