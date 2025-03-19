#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
int g[256] = {0};
int h[256] = {0};

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return *x - *y;
}

int main(){
	char a[100001], b[100001];
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';
    fgets(b, 100001, stdin);
    b[strlen(b) - 1] = '\0';
    
    for(int i = 0; i < strlen(a); i++){
    	g[(unsigned char)a[i]] = 1;
    	h[(unsigned char)a[i]] = 1;
	}
	for(int i = 0; i < strlen(b); i++){
    	if(g[(unsigned char)b[i]] == 1){
    		g[(unsigned char)b[i]] = 2;
		}
		h[(unsigned char)b[i]] = 1;
	}
	for(int i = 0; i<256; i++){
		if(g[i] == 2){
			printf("%c", i);
		}
	}
	printf("\n");
	for(int i = 0; i<256; i++){
		if(h[i] == 1){
			printf("%c", i);
		}
	}
	return 0;
}

