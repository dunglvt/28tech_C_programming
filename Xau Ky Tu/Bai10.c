#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}

char a[100001], b[100001][100], c[100001][100];

int main(){
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';
    
    int n = 0;
    char *token = strtok(a, " ");
    while(token != NULL){
    	int check1 = 1;
    	for(int i = 0; i < n; i++){
    		if(strcmp(b[i], token) == 0){
    			check1 = 0; break;
			}
		}
		if(check1){
			strcpy(b[n], token);
			strcpy(c[n], token);
			++n;
		}
    	token = strtok(NULL, " ");
	}
	qsort(b, n, sizeof(b[0]), cmp);
	
	for(int i = 0; i<n; i++){
		printf("%s ", b[i]);
	}
	printf("\n");
	
	for(int i = 0; i<n; i++){
		printf("%s ", c[i]);
	}

	return 0;
}

