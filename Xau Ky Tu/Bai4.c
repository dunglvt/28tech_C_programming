#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cnt[256] = {0};
char a[100001];

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return *x - *y;
}

int main(){
    scanf("%s", a);
    int min_Value = 1e9, max_Value = -1e9;
    for(int i = 0; i<strlen(a); i++){
    	++cnt[(unsigned char)a[i]];
	}
	for(int i = 0; i<strlen(a); i++){
    	min_Value = fmin(min_Value, cnt[(unsigned char)a[i]]);
    	max_Value = fmax(max_Value, cnt[(unsigned char)a[i]]);
	}
	qsort(a, strlen(a), sizeof(char), cmp);
	for(int i = strlen(a)-1; i >= 0; i--){
		if(cnt[(unsigned char)a[i]] == max_Value){
			printf("%c %d\n", a[i], max_Value);
			break;
		}
	}
	for(int i = strlen(a)-1; i >= 0; i--){
		if(cnt[(unsigned char)a[i]] == min_Value){
			printf("%c %d", a[i], min_Value);
			break;
		}
	}
	return 0;
}

