#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[100001], b[100001][50];

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}

int cmp1(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	if(strlen(x) != strlen(y)){
		return strlen(x) - strlen(y);
	} else {
		return strcmp(x, y);
	}
}

int main(){
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';
    
    int n = 0;
    char *token = strtok(a, " ");
    while(token != NULL){
    	strcpy(b[n], token);
    	++n;
    	token = strtok(NULL, " ");
	}
	qsort(b, n, sizeof(b[0]), cmp);
	for(int i = 0; i < n; i++){
		printf("%s ", b[i]);
	}
	printf("\n");
	qsort(b, n, sizeof(b[0]), cmp1);
	for(int i = 0; i < n; i++){
		printf("%s ", b[i]);
	}
	return 0;
}

