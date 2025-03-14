#include <stdio.h>
#include <math.h>

#define ll long long
#define MAX 10000 

int main(){
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    ll a[50][50], b[50][50], c[50][50];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%lld", &a[i][j]);
		}
    }
    for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			scanf("%lld", &b[i][j]);
		}
    }
    for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			c[i][j] = 0;
			for(int k = 0; k<m;k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
    }
    for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			printf("%lld ", c[i][j]);
		}
		printf("\n");
    }
    return 0;
}

