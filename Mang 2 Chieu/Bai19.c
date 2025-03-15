#include <stdio.h>
#include <math.h>

#define ll long long

int n ,m;
ll a[100][100], f[100][100] = {0};

ll max(ll a, ll b){
	return a > b ? a : b;
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%lld", &a[i][j]);
		}
    }
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		if(i == 0 && j == 0){
    			f[i][j] = a[i][j];
			} else if(i==0){
				f[i][j] = f[i][j-1] + a[i][j];
			} else if(j == 0){
				f[i][j] = f[i-1][j] + a[i][j];
			} else {
				f[i][j] = max(f[i][j-1], f[i-1][j]) + a[i][j];
			}
		}
	}
	printf("%lld", f[n-1][m-1]);
	return 0;
}

