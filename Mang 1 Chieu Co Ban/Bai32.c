#include <stdio.h>
#include <math.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    k = k%n;
    for(int i = k; i<n;i++){
    	printf("%d ", a[i]);
	}
	for(int i = 0;i<k;i++){
		printf("%d ", a[i]);
	}
    return 0;
}

