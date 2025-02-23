#include <stdio.h>
#include <math.h>

void xoaPhanTu(int a[], int n, int x){
	int check = 0;
	int res = 0;
	for(int i = 0; i<n;i++){
		if(x == a[i]){
			check = 1;
			res = i;
			break;
		}
	}
	if(check == 0){
		printf("NOT FOUND");
		return;
	} else {
		for(int i = res; i<n-1; i++){
			a[i] = a[i+1];
		}
		--n;
		for(int i = 0; i<n;i++){
			printf("%d ", a[i]);
		}
	}
}

int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    xoaPhanTu(a, n, x);
    return 0;
}

