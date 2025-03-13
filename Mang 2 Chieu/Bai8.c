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
		for(int j = 0; j < n ; j++){
			if(j == u-1){
				int tmp = a[i][u-1];
				a[i][u-1] = a[i][v-1];
				a[i][v-1] = tmp;
				break;
			}
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

