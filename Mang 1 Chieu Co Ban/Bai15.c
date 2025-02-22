#include <stdio.h>
#include <math.h>

void timSo(int a[], int n){
	int max1 = -1e9;
	int max2 = -1e9;
	int cnt = 0;
	for(int i = 0; i<n; i++){
		if(max1 < a[i]){
			max1 = a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(max1 == a[i]){
			++cnt;
			a[i] = 0;
		}
	}
	if(cnt == 1){
		for(int i = 0; i<n; i++){
			if(max2 < a[i]){
				max2 = a[i];
			}
		}
	} else {
		max2 = max1;
	}
	printf("%d %d", max1, max2);
	return;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    timSo(a, n);
    return 0;
}

