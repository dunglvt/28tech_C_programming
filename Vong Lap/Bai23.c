#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int k = 1;
	for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) {
            printf("%d ", k++);
        }
        printf("\n"); 
    }
    printf("\n");
    
    int c = 1;
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) {
            printf("%d ", c++);
        }
        printf("\n"); 
        c = c-n+1;
    }
    printf("\n");
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n-i; j++) {
            printf("~");
        }
        for (int j = n; j > n-i; j--) {
            printf("%d", i);
        }
        printf("\n"); 
    }
    printf("\n"); 
    for (int i = 1; i <= n; i++) {
        int num = i;
        for (int j = 0; j < i; j++) {
            printf("%d ", num);
            num += (n - j - 1);
        }
        printf("\n");
    }
    printf("\n");
}

