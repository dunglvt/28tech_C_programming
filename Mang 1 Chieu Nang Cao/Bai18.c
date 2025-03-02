#include <stdio.h>
#include <math.h>

int M[1000001] ={0}; 

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		M[a[i]]++;
    }
    long long count = 0;
    for(int i = 1; i<1000001; i++){
    	if(M[i] >= 2){
    		count += 1ll*M[i]*(M[i]-1)/2;
		}
	}
	printf("%lld", count);
	return 0;
}

