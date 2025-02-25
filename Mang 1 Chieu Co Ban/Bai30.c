#include <stdio.h>
#include <math.h>

int M[1000001] = {0};

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		M[a[i]]++; // dem tan suat cua 1 so
    }
    int max = -1e9;
    
    for(int i = 0; i<n;i++){
    	if(max < M[a[i]]){
    		max = M[a[i]];
		}
	}
	for(int i = 0; i<n; i++){
		if(max == M[a[i]]){
			printf("%d %d", a[i], max);
			break;
		}
	}
	return 0;
}

