#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10001];
    fgets(a, 10001, stdin);
    
    char *token = strtok(a, " .,!?");
    while(token != NULL){
    	printf("%s ", token);
    	token = strtok(NULL, " .,!?");
	}
	return 0;
}

