#include <stdio.h>
#include <math.h>

void kiemTra(int a[], int n){
	int key = 0;
	for(int i = 0; i < n; i += 2){
		if(a[i] % 2 == 0){
			key = 1;
			printf("%d ", a[i]);
		}
	}
	if(key == 0){
		printf("NONE");
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    kiemTra(a, n);
    return 0;
}

