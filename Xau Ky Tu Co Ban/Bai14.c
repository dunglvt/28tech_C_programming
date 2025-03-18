#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void lower(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

int main(){
    char a[10001];
    fgets(a, 10001, stdin);
    char *token = strtok(a, " ");
    
    int dem = 0;
    while(token != NULL){
    	lower(token);
    	if(strcmp(token, "28tech") == 0){
    		++dem;
		}
		token = strtok(NULL, " ");
	}
	printf("%d", dem);
    return 0;
}

