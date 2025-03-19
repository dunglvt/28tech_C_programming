#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10001];
    scanf("%s", a);
    for(int i = 0; i < strlen(a); i++){
    	printf("%c", a[i]);
	}
	return 0;
}

