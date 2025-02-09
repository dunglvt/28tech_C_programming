#include <stdio.h>

int main(){
	int n, a, m = 0;
	scanf("%d\n", &n);
	for(int i = 1; i <= n;i++){
		scanf("%d ", &a);
		if(a == 2022){
			m = 1;
		}
	}
	if(m){
		printf("YES");
	} else {
		printf("NO");
		}
	return 0;
}

