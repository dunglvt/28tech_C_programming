#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char a[10001];
    scanf("%s", a);
    
    int sum = 0;
    for(int i = 0; i<strlen(a); i++){
    	if(isdigit(a[i])){
    		sum += a[i] - '0';
		}
	}
	printf("%d", sum);
	return 0;
}

