#include <stdio.h>
#include <math.h>

#define ll long long

void merge(int a[], int l, int m, int r){
	int n1 = m-l+1, n2 = r-m;
	int x[n1], y[n2];
	for(int i = 0; i<n1;i++){
		x[i] = a[l+i];
	}
	for(int i = 0; i<n2;i++){
		y[i] = a[m+i+1];
	}
	int index = l;
	int i = 0, j = 0;
	while(i<n1 && j<n2){
		if(x[i] <= y[j]){
			a[index++] = x[i++];
		} else {
			a[index++] = y[j++]; 
		}
	}
	while(i<n1){
		a[index++] = x[i++];
	}
	while(j<n2){
		a[index++] = y[j++];
	}
}

void mergeSort(int a[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l, m, r);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);
    ll x = 0, y = 0;
	for(int i = 0; i<n;i++){
		if(i & 1){
			y = y*10 + a[i];
		} else {
			x = x*10 + a[i];
		}
	}
	printf("%lld", x + y);
	return 0;
}

