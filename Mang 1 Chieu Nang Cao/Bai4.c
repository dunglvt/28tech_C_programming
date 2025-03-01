#include <stdio.h>
#include <math.h>

int kiemTra(int a[], int n){
	int dem25 = 0;
	int dem50 = 0;
	for(int i = 0;i<n;i++){
		if(a[i] == 25){
			++dem25;
		} else if(a[i] == 50){
			if(dem25 == 0) {
				return 0;
			} else {
				--dem25;
				++dem50;
			}
		} else {
			if(dem25 == 0 || 25*dem25 + 50*dem50 <75){
				return 0;
			}
			if(dem50 != 0){
				--dem50;
				--dem25;
			} else {
				dem25 -= 3;
			}
		}
	}
	return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    if(kiemTra(a, n)){
    	printf("YES");
	} else {
		printf("NO");
	}
    return 0;
}

