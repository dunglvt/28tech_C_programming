#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[1000];
    fgets(a, 1000, stdin);
    a[strlen(a) - 1] = '\0';
    char *token = strtok(a, " ");
    int dem = 0;
    while(token != NULL){
    	int check = 1;
    	for(int i = 0; i<strlen(token); i++){
			if(islower(token[i])){
				check = 0;
				break;
			}	
		}
		if(check){
			++dem;
		}
		token = strtok(NULL, " ");
	}
	printf("%d", dem);
	return 0;
}

