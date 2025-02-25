#include <stdio.h>
#include <math.h>

int M[1000001] = {0};

int main(){
    int n, x, t;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		M[a[i]]++;
    }
    scanf("%d", &t);
    while(t--){
    	scanf("%d", &x);
    	for(int i = 0; i<n;i++){
    		if(M[x] != 0){
    			printf("YES\n");
    			break;
			} else {
				printf("NO\n");
				break;
			}
		}
	}
	return 0;
}

