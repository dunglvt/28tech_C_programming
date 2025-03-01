#include <stdio.h>
#include <math.h>

void merge(int a[], int b[], int n, int m){
	int i = 0, j = 0, c[n+m], index = 0;
	while(i<n && j<m){
		if(a[i] <= b[j]){
			c[index++] = a[i++];
		} else {
			c[index++] = b[j++];
		}
	}
	while(i<n){
		c[index++] = a[i++];
	}
	while(j<m){
		c[index++] = b[j++];
	}
	for(int k = 0;k<n+m;k++){
		printf("%d ", c[k]);
	}
	return;
} 

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
    merge(a, b, n, m);
    return 0;
}

