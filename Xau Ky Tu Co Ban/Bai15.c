#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void lat(char a[]){
	for(int i = 0; i < strlen(a)/2; i++){
		int temp = a[i];
		a[i] = a[strlen(a) - i - 1];
		a[strlen(a) - i - 1] = temp;
	}
}

int main(){
    char a[10001];
    fgets(a, 10001, stdin);
    char *token = strtok(a, " ");
    int i = 1;
    while(token != NULL){
    	if(i&1){
    		printf("%s ", token);
		} else {
			lat(token);
			printf("%s ", token);
		}
		++i;
		token = strtok(NULL, " ");
	}
	return 0;
}

