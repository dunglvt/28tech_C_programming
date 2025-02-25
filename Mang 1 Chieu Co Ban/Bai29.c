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
    int max = -1e9;
    for(int i = 0; i<n;i++){
    	if(max < M[a[i]]){
    		max = M[a[i]];
		}
	}
	for(int i = 0; i<1000001;i++){
		if(M[i] == max){
    		printf("%d %d",i, M[i]);
    		break;
		}
	}
	return 0;
}

