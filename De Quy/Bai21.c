#include <stdio.h>
#include <math.h>

int check = 1;
int a[1000];
void kiemTra(int i, int n){
	if(i > n){
		return;
	} else {
		if(check == 1){
			if(a[i] == a[n-i-1]){
				kiemTra(++i, n);
			} else {
				check = 0;
			}
		}
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

