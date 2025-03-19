#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int thuanNghich(char a[]){
	char temp[100];
	strcpy(temp, a);
	for(int i = 0; i<strlen(a)/2; i++){
		char tmp = a[i];
		a[i] = a[strlen(a) - i - 1];
		a[strlen(a) - i - 1] = tmp;
	}
	return strcmp(temp, a);
}

void sort(char a[][100], int n){
	for(int i = 0; i < n-1 ; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(strcmp(a[min_index], a[j]) > 0){
				min_index = j;
			}
		}
		char temp[100];
		strcpy(temp, a[min_index]);
		strcpy(a[min_index], a[i]);
		strcpy(a[i], temp);
	}
}

int main(){
    char a[10001], b[10001][100];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';
    char *token = strtok(a, " ");
    
    int n = 0;
    while(token != NULL){
    	if(thuanNghich(token) == 0){
    		strcpy(b[n++], token);
		}
    	token = strtok(NULL, " ");
	}
	sort(b, n);
	for(int i = 0; i<n; i++){
		printf("%s ", b[i]);
	}
	return 0;
}

