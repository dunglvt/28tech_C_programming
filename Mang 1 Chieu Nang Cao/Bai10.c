#include <stdio.h>
#include <math.h>

int M[10000001]; 
int H[10000001];
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		M[a[i]] = 1;
		H[a[i]] = 1;
    }
    for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
		if(M[b[i]] == 1) {
			M[b[i]] = 2;
		} 
		H[b[i]] = 1;
    }
   for(int i = 0; i<10000001;i++){
   		if(M[i] == 2){
   			printf("%d ", i);
		   }
   }
   printf("\n");
   for(int i = 0; i<10000001;i++){
   		if(H[i] != 0){
   			printf("%d ", i);
		}
   }
   return 0;
}

