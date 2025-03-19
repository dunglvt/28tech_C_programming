#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return *x - *y;
}

int main(){
    char a[1000];
    scanf("%s", a);
    qsort(a, strlen(a), sizeof(char), cmp);
    int k = 0;
    while(a[k] == '0' && k < strlen(a) - 1){
    	++k;
	}
    for(int i = k; i<strlen(a); i++){
    	printf("%c", a[i]);
	}
    return 0;
}

