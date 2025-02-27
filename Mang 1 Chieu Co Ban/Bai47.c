#include <stdio.h>
#include <math.h>

int prime[1000001];
void sang(){
	for(int i = 0; i<=1000000;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i<=1000;i++){
		if(prime[i]){
			for(int j = i*i;j<=1000000;j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    sang();
    int kyluc = 0;
    int tmp = 0;
    int maxSum = 0;
    for(int i =0;i<n;i++){
    	int dem = 0;
    	int sum = 0;
    	if(prime[a[i]]){
    		++dem;
    		sum += a[i]; 
		} else {
			if(dem > kyluc){
				kyluc = dem;
				maxSum = sum;
				tmp = i;
			} else if(dem == kyluc){
				if(sum > maxSum){
					maxSum = sum;
				} 
			}
		}
	}
	int sum1 = 0;
	for(int i = tmp; i<n;i++){
		sum1 += a[i];
		if(sum1 == maxSum){
			break;
		} else {
			printf("%d ", a[i]);
		}
	}
	return 0;
}

