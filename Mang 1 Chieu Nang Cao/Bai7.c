#include <stdio.h>
#include <math.h>

//giam dan
void merge(int a[], int l, int m, int r){
	int n1 = m-l+1, n2 = r-m;
	int x[n1], y[n2];
	for(int i = 0; i<n1; i++){
		x[i] = a[l+i];
	}
	for(int i = 0;i<n2;i++){
		y[i] = a[m+i+1];
	}
	int index = l;
	int i = 0, j = 0;
	while(i<n1 && j<n2){
		if(x[i] >= y[j]){
			a[index++] = x[i++];
		} else {
			a[index++] = y[j++];
		}
	}
	while(i<n1){
		a[index++] = x[i++];
	}
	while(j<n2) {
		a[index++] = y[j++];
	}
}

void mergeSort(int a[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l , m, r);
	}
}

// tang dan
void merge1(int a[], int l, int m, int r){ 
	int n1 = m-l+1, n2 = r-m;
	int x[n1], y[n2];
	for(int i = 0; i<n1; i++){
		x[i] = a[l+i];
	}
	for(int i = 0;i<n2;i++){
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
	while(j<n2) {
		a[index++] = y[j++];
	}
}

void mergeSort1(int a[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort1(a, l, m);
		mergeSort1(a, m+1, r);
		merge1(a, l , m, r);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int indexOdd = 0;
	int indexEven = 0; 
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] & 1){
			++indexOdd;
		} else {
			++indexEven;
		}
    }
    int b[indexEven]; // mang luu gia tri chan
    int c[indexOdd]; // mang luu gia tri le
    int k = 0, j = 0;
    for(int i = 0; i<n;i++){
    	if(a[i] & 1){
			c[j++] = a[i];
		} else {
			b[k++] = a[i];
		}
	}
	
	mergeSort(c, 0, indexOdd-1);
	mergeSort1(b, 0, indexEven-1);
	
	for(int i = 0; i<indexOdd; i++){
		printf("%d ", c[i]);
	}
	for(int i = 0; i<indexEven; i++){
		printf("%d ", b[i]);
	}

	return 0;
}

