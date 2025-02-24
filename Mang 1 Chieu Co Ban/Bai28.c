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
    for(int i = 0; i<n;i++){
    	if(M[a[i]] > 1){
    		printf("%d %d\n", a[i], M[a[i]]);
    		M[a[i]] = 0;
		} 
		if(M[a[i]] == 1){
			printf("%d 1\n", a[i]);
			M[a[i]] = 0;
		}
	}
	return 0;
}

