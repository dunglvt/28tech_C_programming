#include <stdio.h>
#include <math.h>

//int partition(int a[], int l, int r){
//	int i = l-1, pivot = a[r];
//	for(int j = l; j<r;j++){
//		if(a[j] <= pivot){
//			++i;
//			int tmp = a[i];
//			a[i] = a[j];
//			a[j] = tmp;
//		}
//	}
//	++i;
//	int tmp = a[i];
//	a[i] = a[r];
//	a[r] = tmp;
//	return i;
//}
//
//void quickSort(int a[], int l, int r){
//	if(l<r){
//		int pos = partition(a, l, r);
//		quickSort(a, l, pos - 1);
//		quickSort(a, pos+1, r);
//	}
//}

void merge(int a[], int l, int m, int r){
	int n1 = m-l+1, n2 =r-m;
	int x[n1], y[n2];
	for(int i = 0; i<n1;i++){
		x[i] = a[l+i];
	}
	for(int i = 0; i<n2;i++){
		y[i] = a[m+i+1];
	}
	int index = l;
	int j = 0, i =0;
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
		int m =(l+r)/2;
		mergeSort(a, l ,m);
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
    
    int min = 1e9;
    int count = 0;
    for(int i = 1; i<n;i++){
    	if(a[i] - a[i-1] < min){
    		min = a[i] - a[i-1];
		}
	}
	for(int i = 1; i<n;i++){
    	if(a[i] - a[i-1] == min){
			++count;
		}
	}
	printf("%d %d", min, count);

//	for(int i = 0;i<n;i++){
//		printf("%d ", a[i]);
//	}
	return 0;
}

