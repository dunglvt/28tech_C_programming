#include <stdio.h>
#include <math.h>

#define ll long long

void merge(ll a[], int l, int m, int r){
	int n1 = m-l+1, n2 = r-m;
	int x[n1], y[n2];
	for(int i =0; i<n1;i++){
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
	while(j<n2){
		a[index++] = y[j++];
	}
}

void mergeSort(ll a[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l, m, r);
	}
}

int binarySearch(ll a[], int n, ll x){
	int left = 0, right = n-1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x){
			return 1;
		} else if(a[mid] < x) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
	ll b[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[i] = 1ll*a[i]*a[i];
    }
    mergeSort(b, 0, n-1);
    int check = 0;
    for(int i = 0; i<n-1;i++){
    	for(int j = i+1; j<n;j++){
    		if(binarySearch(b, n, b[i] + b[j])){
    			check = 1;
    			break;
			}
		}
	}
	if(check == 1) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

