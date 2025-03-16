#include <stdio.h>
#include <math.h>

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int a[500][500];
int n, m;
int ans = 0;
int dem = 0;

void loang(int i, int j){
	++dem;
	a[i][j] = 0;
	for(int k = 0; k<4;k++){
		int i1 = dx[k] + i;
		int j1 = dy[k] + j;
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
			loang(i1, j1);
		}
	}
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
    }
    for(int i = 0; i<n; i++){
    	for(int j = 0; j<m; j++){
    		if(a[i][j]){
    			dem = 0;
    			loang(i, j);
    			ans = fmax(ans, dem);
			}
		}
	}
	printf("%d", ans);
	return 0;
}

