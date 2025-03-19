#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char a[100001], b[100001][100];

int main(){
    int n = 0;
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';
    char *token = strtok(a, " ");
	while(token != NULL){
		strcpy(b[n++], token);
		token = strtok(NULL, " ");
	}
	printf("%d", n);
	return 0;
}

