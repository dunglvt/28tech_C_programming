#include <stdio.h>
#include <math.h>

int check = 1;
int a[1000];

void kiemTra(int i, int n){
	if(check == 1){
		if(i > n){
			return;
		}
		if(a[i] & 1){
			check = 0;
		}
		kiemTra(++i, n);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int i = 0;
	kiemTra(i, n);
	if(check == 1){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

