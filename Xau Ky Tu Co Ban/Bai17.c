#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//void sort1(char a[][100], int n){
//	int min_index;
//	for(int i = 0; i<n-1; i++){
//		min_index = i;
//		for(int j = i + 1; j < n; j++){
//			if(strcmp(a[j], a[min_index]) < 0){
//				min_index = j;
//			}
//		}
//		char temp[100];
//		strcpy(temp, a[min_index]);
//		strcpy(a[min_index], a[i]);
//		strcpy(a[i], temp);
//	}
//}
//
//void sort2(char a[][100], int n){
//	int min_index;
//	for(int i = 0; i<n-1; i++){
//		min_index = i;
//		for(int j = i + 1; j < n; j++){
//			if(strcmp(a[j], a[min_index]) > 0){
//				min_index = j;
//			}
//		}
//		char temp[100];
//		strcpy(temp, a[min_index]);
//		strcpy(a[min_index], a[i]);
//		strcpy(a[i], temp);
//	}
//}
//

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}
	
int cmp1(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(y, x);
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
//	sort1(b, n);
	qsort(b, n, sizeof(b[0]), cmp);
	for(int i = 0; i < n; i++){
		printf("%s ", b[i]);
	}
	printf("\n");
//	sort2(b, n);
	qsort(b, n, sizeof(b[0]), cmp1);
	for(int i = 0; i < n; i++){
		printf("%s ", b[i]);
	}
	return 0;
}

