#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

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
	for(int i = 0; i<n-1; i++){
		int min_index = i;
		for(int j = i + 1; j<n; j++){
			if(strlen(b[min_index]) > strlen(b[j])){
				min_index = j;	
			} else if(strlen(b[min_index]) == strlen(b[j])){
				if(strcmp(b[j], b[min_index]) < 0){
					min_index = j;
				}
			}
		}
		char temp[100];
		strcpy(temp, b[min_index]);
		strcpy(b[min_index], b[i]);
		strcpy(b[i], temp);
	}
	for(int i = 0; i<n; i++){
		printf("%s ", b[i]);
	}
	return 0;
}

