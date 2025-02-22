#include <stdio.h>
#include <math.h>

void minMaxValue(int a[], int n, int x){
	int res1 = 0;
	int res2 = 0;
	for(int i = 0;i<n;i++){
		if(a[i] < x){
			++res2;
		}
		if(a[i] > x){
			++res1;
		}
	}
	printf("%d\n%d", res2, res1); 
}

int main(){
    int n, x;
    scanf("%d", &n);
    int a[n];
    for(int i =0;i<n;i++){
    	scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	minMaxValue(a, n, x);
	return 0;
}

