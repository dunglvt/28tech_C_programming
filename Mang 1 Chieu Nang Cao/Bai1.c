#include <stdio.h>
#include <math.h>

#define ll long long

int isPrime(int n){
	for(int i = 2;i <= sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int partition(int a[], int l, int r){
	int i = l-1, pivot = a[r];
	for(int j = l; j<r;j++){
		if(a[j] <= pivot){
			++i;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	++i;
	int tmp = a[i];
	a[i] = a[r];
	a[r] = tmp;
	return i; 
}

void quickSort(int a[], int l, int r){
	if(l<r){
		int pos = partition(a, l, r);
		quickSort(a, l, pos - 1);
		quickSort(a, pos + 1, r);
	}
}

int kt(int b[], int n){
	int h[n];
	int i = 0;
	if(n%2!=0){
		h[n/2] = b[n/2];
	}
	while(i<n/2){
		h[n-i-1] = b[i];
		++i;
	}
	for(int i = 0; i<n;i++){
		if(h[i] != b[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
    int n, res = 0;
    ll tich = 1;
    scanf("%d", &n);
    int a[n], b[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[i] = a[i];
		tich *= a[i];
		if(isPrime(b[i])){
			++res;
		}
    }
    quickSort(a, 0, n-1);
	
	//Dong 1 
	int tmp1 = a[n-1];
	int i = n-1, j = i-1;
    while(a[i] == a[j]){
    	tmp1 = j;
    	--i;
	}
	printf("%d %d\n", a[tmp1], tmp1);
	
	//Dong 2 
	int tmp2 = a[0];
	int k = 0, u = k+1;
	while(a[k] == a[u]){
    	tmp2 = u;
    	++k;
	}
    printf("%d %d\n", a[tmp2], tmp2);
    
    //Dong 3 
    printf("%d\n", res); // so luong so nguyen to
    
    //Dong 4 
    ll max = -1e9;
    for(int i = 0; i<n-1;i++){
    	for(int j = i+1; j<n; j++){
    		if(max < 1ll*a[i]*a[j]){
    			max = 1ll*a[i]*a[j];
			}
		}
	}
    printf("%lld\n", max);
    
    //Dong 5 
	if(kt(b, n)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	//Dong 6 
	printf("%lld", tich%(1000000007));
	return 0;
}

