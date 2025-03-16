#include <stdio.h>
#include <math.h>

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2}; 

int n, a[100][100];
int s, t, u, v;

void loang(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k<8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1){
			loang(i1, j1);
		}
	}
}

int main(){
    scanf("%d", &n);
    scanf("%d%d%d%d", &s, &t, &u, &v);
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
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

