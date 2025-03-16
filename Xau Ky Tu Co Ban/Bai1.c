#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[1000];
    scanf("%s", a);
    if(strlen(a) % 2 == 0) {
    	printf("NOT FOUND");
	} else {
		printf("%c", a[strlen(a) / 2]);
	}
    return 0;
}

