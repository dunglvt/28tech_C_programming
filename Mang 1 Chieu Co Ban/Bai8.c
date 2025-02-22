#include <stdio.h>
#include <math.h>

void lieKe(int a[], int n){
	 for(int i = 0; i < n; i++){
	 	int check = 0;
	 	 for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				check = 1;
				break;
			}
		}
		if(check == 0){
			printf("%d ", a[i]);
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
    lieKe(a, n);
    return 0;
}

