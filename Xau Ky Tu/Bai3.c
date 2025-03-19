#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int cnt[256] = {0};
char a[100001];

int main(){
    scanf("%s", a);
    for(int i = 0; i<strlen(a); i++){
    	++cnt[(unsigned char)a[i]];
	}
	for(int i = 0; i<256; i++){
		if(cnt[i] != 0){
			printf("%c %d\n", i, cnt[i]);
		}
	}
	printf("\n");
	for(int i = 0; i<strlen(a); i++){
		if(cnt[(unsigned char)a[i]] != 0){
			printf("%c %d\n", a[i], cnt[(unsigned char)a[i]]);
			cnt[(unsigned char)a[i]] = 0;
		}
	}
	return 0;
}

