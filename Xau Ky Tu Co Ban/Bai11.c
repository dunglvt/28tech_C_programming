#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int dem(int n){
	int count = 0;
	while(n!=0){
		++count;
		n /= 10;
	}
	return count;
} 
int main(){
    char a[1000],b[1000] = {};
    scanf("%s", a);
    char *token = strtok(a,"/");
    while(token != NULL){
    	if(dem(atoi(token)) == 1){
    		strcat(b, "0");
		}
		strcat(b, token);
    	strcat(b, "/");
    	token = strtok(NULL, "/");
	}
	b[strlen(b) - 1] = '\0';
	printf("%s", b);
	return 0;
}

