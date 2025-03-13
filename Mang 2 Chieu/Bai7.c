#include <stdio.h>
#include <math.h>

int main(){
    int n, u, v;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
    }
    scanf("%d%d", &u, &v);
    for(int i = 0; i < n; i++){
		if(i == u-1){
			for(int j = 0; j < n ; j++){
				int tmp = a[u-1][j];
				a[u-1][j] = a[v-1][j];
				a[v-1][j] = tmp;
			}
			break;
		}
    }
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
    }
    return 0;
}

