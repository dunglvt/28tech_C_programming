#include <stdio.h>
#include <math.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
    }
    
    int i = 0, j = 0, index = 0, c[n+m];
    while(i<n && j<m){
    	if(a[i] < b[j]){
    		printf("%d ", a[i++]);
		} else if(a[i] > b[j]){
			printf("%d ", b[j++]);
		} else {
			printf("%d ", a[i]);
			c[index++] = a[i];
			++i;
			++j;
		}
	}
	while(i<n){
		printf("%d ", a[i++]);
	}
	while(j<m){
		printf("%d ", b[j++]);
	}
	
	printf("\n");
	for(int k = 0; k<index;k++){
		printf("%d ", c[k]);
	}
	return 0;
}

