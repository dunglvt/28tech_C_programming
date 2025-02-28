#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int check = 0;
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
     for(int i = 1; i < n; i++){
		if(a[i] - a[i-1] <= 0){
			check = 1;
			break;
		}
    }
    if(check == 0){
    	printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

