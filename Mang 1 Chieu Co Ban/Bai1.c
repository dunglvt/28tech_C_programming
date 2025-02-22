#include <stdio.h>
#include <math.h>

void chanLe(int a[], int n){
	int c = 0;
	int l = 0;
	int cnt = 0;
	int res = 0;
	for(int i = 1;i<=n;i++){
		if(a[i]&1){
			++l;
			cnt += a[i];
		} else {
			++c;
			res += a[i];
		}
	}
	printf("%d\n%d\n%d\n%d", c, l, res, cnt);
} 

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i<= n; i++){
    	scanf("%d", &a[i]);
	}
    chanLe(a, n);
    return 0;
}

