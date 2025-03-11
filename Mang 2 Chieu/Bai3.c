#include <stdio.h>
#include <math.h>

int max(int a, int b){
	return a > b ? a : b;
}

int min(int a, int b){
	return a < b ? a : b;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    int max_Value = -1e9;
    int min_Value = 1e9;
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
			min_Value = min(min_Value, a[i][j]);
			max_Value = max(max_Value, a[i][j]);
		}
    }
    
    printf("%d\n", min_Value);
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == min_Value){
				printf("%d %d\n", i + 1, j + 1);
			}
		}
    }
    printf("%d\n", max_Value);
     for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == max_Value){
				printf("%d %d\n", i + 1, j + 1);
			}
		}
    }
    return 0;
}

