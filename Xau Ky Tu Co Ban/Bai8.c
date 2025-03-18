#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10000], b[10000];
    scanf("%s", a);
    int check = 1;
    int k = 0;
    for(int i = 0; i<strlen(a);i++){
    	if(a[i] == '2' || a[i] == '8' || a[i] == 't' || a[i] == 'e' || a[i] == 'c' || a[i] == 'h'){
    		continue;
		} else {
			b[k++] = a[i];
			check = 0;
		}
	}
	b[k] = '\0';
	if(check == 0){
		printf("%s", b);
	} else {
		printf("EMPTY");
	}
	return 0;
}

