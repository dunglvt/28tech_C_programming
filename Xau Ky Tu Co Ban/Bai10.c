#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10005];
    scanf("%s", a);
    int cnt[256] = {0};
	for(int i = 0; i<strlen(a); i++){
    	if(cnt[(unsigned char)a[i]] != 0){
    		printf("%c", a[i]);
    		return 0;
		}
		cnt[(unsigned char)a[i]] = 1;
	}
	printf("NONE");
}

