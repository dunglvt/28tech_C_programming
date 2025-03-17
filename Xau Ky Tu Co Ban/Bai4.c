#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void kiemTra(char a[]){
	for(int i = 1; i<strlen(a); i++){
		if(abs(a[i] - a[i-1])!= 1){
			printf("NO");
			return;
		}
	}
	printf("YES");
}

int main(){
    char a[1000];
    scanf("%s", a);
    kiemTra(a);
    return 0;
}

