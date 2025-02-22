#include <stdio.h>
#include <math.h>

void tanSuat(int a[], int n){
	for(int i = 0; i < n; i++){
		int check = 0;
		for(int j = 0; j<i;j++){
			if(a[j] == a[i]){
				check = 1;
				break;
			}
		}
		if(check == 0){
			int res = 1;
			for(int k = i+1; k<n;k++){
				if(a[k] == a[i]){
					++res;
				}
			}
			printf("%d %d\n", a[i], res);
		}
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    tanSuat(a, n);
    return 0;
}

