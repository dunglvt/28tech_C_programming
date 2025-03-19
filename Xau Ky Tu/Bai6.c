#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100001], b[100001];
    int A[256] = {0}, B[256] = {0};
    scanf("%s", a);
    scanf("%s", b);
  	
  	for(int i = 0; i < strlen(a); i++){
  		A[(unsigned char)a[i]] = 1;
	}
	for(int i = 0; i < strlen(b); i++){
		B[(unsigned char)b[i]] = 1;
	}
	
	for(int i = 0; i < 256; i++){
		if(A[i] == 1 && B[i] == 0){
			printf("%c", i);
		}
	}
	printf("\n");
	for(int i = 0; i < 256; i++){
		if(A[i] == 0 && B[i] == 1){
			printf("%c", i);
		}
	}
	return 0;
}

