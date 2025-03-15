#include <stdio.h>
#include <math.h>

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1 ,1, 0};

int n, m;
int a[100][100];


void loang(int i, int j){
	a[i][j] = 0;
	
	for(int k = 0; k<4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
			loang(i1, j1);
		}
	}
}

int main(){
	int s, t, u, v;
    scanf("%d%d", &n, &m);
    scanf("%d%d%d%d", &s, &t, &u, &v);
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
    }
    
   	loang(s-1, t-1);
   	
	if(a[u-1][v-1] == 0){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

