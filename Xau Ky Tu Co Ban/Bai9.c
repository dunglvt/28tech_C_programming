#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10000];
    int k ;
    scanf("%s", a);
    scanf("%d", &k);
	for(int i = 0; i< strlen(a); i++){
		if(i == k){
			printf("28tech%c", a[i]);
		} else {
			printf("%c", a[i]);
		}
	}
	return 0;
} 

