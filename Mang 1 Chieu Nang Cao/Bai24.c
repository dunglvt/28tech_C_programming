#include <stdio.h>
#include <math.h>

int max(int a, int b){
	return a > b ? a : b;
}

int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    
    int min_Index = 0, max_Index = 0;
    int check = 0;
    for(int i = 0; i<n;i++){
    	if(x == a[i]){
    		min_Index = i+1;
    		check = 1;
    		break;
		}
	}
	for(int i = n-1; i>=0 ;i--){
		if(x == a[i]){
			max_Index = i+1;
			check = 1;
			break;
		}
	}
	if(check){
		if(max_Index == min_Index){
			printf("%d %d", min_Index, max_Index);
		} else if(max_Index != min_Index){
			if(max_Index == 0 || min_Index == 0){
				int tmp = max(min_Index, max_Index);
				printf("%d %d", tmp, tmp);
			} else {
				printf("%d %d", min_Index, max_Index);
			}
		}
	} else {
		printf("-1 -1");
	}
	return 0;
}

