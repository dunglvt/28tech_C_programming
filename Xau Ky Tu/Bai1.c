#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10001];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';
    
    int digit = 0, alpha = 0, res = 0;
    for(int i = 0; i < strlen(a); i++){
    	if(isdigit(a[i])){
    		++digit;
		} else if(isalpha(a[i])){
			++alpha;
		} else {
			++res;
		}
	}
	printf("%d %d %d", alpha, digit, res);
	return 0;
}

