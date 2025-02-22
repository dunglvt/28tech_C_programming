#include <stdio.h>
#include <math.h>

#define ll long long

void viTri(ll a[], int n){
	int tmp_Min = 0;
	int tmp_Max = 0;
	int min = 1e9;
	int max = -1e9;
	for(int i = 0; i<n;i++){
		if(min >= a[i]){
			min = a[i];
			tmp_Min = i;
		}
		if(max < a[i]){
			max = a[i];
			tmp_Max = i;
		}
	}
	printf("%d %d", tmp_Min, tmp_Max);
	return;
}

int main(){
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
    }
    viTri(a, n);
    return 0;
}

