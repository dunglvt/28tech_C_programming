#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1;i<=n;i++){
		for(int j = 1; j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1;i<=n;i++){
		for(int j = n; j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	  for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

