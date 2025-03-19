#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void lower(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}

int main(){
    char a[10001], b[10001][100];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';
    char *token = strtok(a, " ");
    int n = 0;
    while(token != NULL){
    	lower(token);
    	strcpy(b[n++], token);
    	token = strtok(NULL, " ");
	}
	qsort(b, n, sizeof(b[0]), cmp);
	
	int dem = 1;
	for(int i = 1 ; i<n; i++){
		if(strcmp(b[i], b[i-1]) != 0){
			++dem;
		}
	}
	printf("%d", dem);
	return 0;
}

