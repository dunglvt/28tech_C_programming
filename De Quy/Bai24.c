#include <stdio.h>
#include <math.h>

int check = 0;
int a[1000];

void binarySearch(int left, int right, int x){
	if(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x) {
			check = 1;
			return;
		} else if(a[mid] > x){
			left = mid + 1;
		} else {
			right = mid - 1;
		}
		binarySearch(left, right, x);
	} 
}

int main(){
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    binarySearch(0, n-1, x);
    if(check == 1) {
    	printf("1");
	} else {
		printf("0");
	}
    return 0;
}

