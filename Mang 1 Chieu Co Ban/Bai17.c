#include <stdio.h>
#include <math.h>

void doiXung(int a[], int n){
	for(int i = 0; i<n/2-1;i++){
		if(a[i] != a[n-i-1]){
			printf("NO");
			return;
		}
	}
	printf("YES");
	return;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    doiXung(a, n);
	return 0;
}

