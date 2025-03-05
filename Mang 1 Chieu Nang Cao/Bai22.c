#include <stdio.h>
#include <math.h>

int M[1000001] ={0};

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int res = 0;
    int check = 0;
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(M[a[i]] == 0){
			M[a[i]] = 1;
		} else {
			if(check == 0){
				res = a[i];
				check = 1;
			}
		}
    }
    if(check){
    	printf("%d", res);
	} else {
		printf("-1");
	}
	return 0;
}

