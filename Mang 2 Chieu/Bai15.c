#include <stdio.h>

#define ll long long

ll F[92];

void solve(){
	F[0] = 0, F[1] = 1;
	for(int i = 2; i <= 92; i++){
    	F[i] = F[i - 1] + F[i - 2];
    }
}

int main(){
    int n;
    scanf("%d" ,&n);
    ll a[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int dem = 0;
    
    solve();
    while(h1 <= h2 && c1 <= c2){
        for(int i = c1; i <= c2; i++){
            a[h1][i] = F[dem++];
        }
        ++h1;
        for(int i = h1; i <= h2; i++){
            a[i][c2] = F[dem++];
        }
        --c2;
        for(int i = c2; i >= c1; i--){
            a[h2][i] = F[dem++];
        }
        --h2;
        for(int i = h2; i >= h1; i--){
            a[i][c1] =F[dem++];
        }
        ++c1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
