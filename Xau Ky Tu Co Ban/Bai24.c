#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char a[100001], b[100001][100];

int main(){
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';
    char *token = strtok(a, " ");
    int n = 0;
    while(token != NULL){
    	strcpy(b[n++], token);
    	token = strtok(NULL, " ");
	}
	for(int i = 0; i<n; i++){
		printf("%s ", b[i]);
	}
	return 0;
}

