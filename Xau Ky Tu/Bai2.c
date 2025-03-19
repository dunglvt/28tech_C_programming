#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void lower(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

void upper(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = toupper(a[i]);
	}
}

int main(){
    char a[10001], b[10001][100];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';
    
    char *token = strtok(a, " ");
    
    int n = 0;
    while(token != NULL){
    	strcpy(b[n++], token);
    	token = strtok(NULL, " "); 
	}
	for(int i = 0; i<n; i++){
		upper(b[i]);
		printf("%s ", b[i]);
	}
	printf("\n");
	for(int i = 0; i<n; i++){
		lower(b[i]);
		printf("%s ", b[i]);
	}
	return 0;
}

