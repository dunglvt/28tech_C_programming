#include <stdio.h>
#include <math.h>

void winK(int a[], int n, int k){
	int sum = 0;
	int tmp = 0;
	while(k<=n){
		for(int i = tmp; i<k;i++){
			sum += a[i];
		}
		printf("%d ", sum);
		sum = 0;
		++tmp;
		++k;
	}
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    winK(a, n, k);
    return 0;
}

