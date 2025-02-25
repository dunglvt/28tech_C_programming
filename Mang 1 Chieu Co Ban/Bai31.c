#include <stdio.h>
#include <math.h>

int main(){
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int a[n];
    int b[m];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
    }
	if(n==p){
		for(int i = 0 ;i<n;i++){
			printf("%d ", a[i]);
		}
		for(int i = 0; i<n;i++){
			printf("%d ", b[i]);
		}
	} else if(p != n){
		   for(int i = 0; i < n; i++){
				if(i == p){ 
					for(int j = 0; j<m;j++){
					printf("%d ", b[j]);
			}
		}
			printf("%d ", a[i]);
    	}
	}
    return 0;
}

