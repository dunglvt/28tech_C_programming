#include <stdio.h>
#include <math.h>

int binarySearch(int a[], int n, int x){
	int left = 0, right = n-1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x){
			return 1;
		}
		if(a[mid] > x){
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return 0;
}

int main(){
    int n, q, x;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    while(q--){
    	scanf("%d", &x);
    	if(binarySearch(a, n, x)){
    		printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

