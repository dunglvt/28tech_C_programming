#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n+1];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    a[n] = a[n-1];
    int count = 1;
    int sum = a[0];
    int ans = 1, kyluc_Sum = a[0];
    int index = 0;
    for(int i =1; i<=n;i++){
    	if(a[i] != a[i-1]){
    		++count;
			sum += a[i];	
		} else {
			if(count > ans){
				ans = count;
				index = i - count;
				kyluc_Sum = sum;
			}
			else if(count == ans){
				if(sum > kyluc_Sum){
					index = i - count;
					kyluc_Sum = sum;
				}
			}
			count = 1; 
			sum = a[i];
		}
	}
	printf("%d\n", ans);
	for(int i = 0; i<ans;i++){
		printf("%d ", a[index + i]);
	}
}

