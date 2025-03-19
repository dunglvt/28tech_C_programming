#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int doiXung(char a[]){
	char temp[100001];
	strcpy(temp, a);
	for(int i = 0; i < strlen(a)/2; i++){
		char tmp = a[i];
		a[i] = a[strlen(a) - i - 1];
		a[strlen(a) - i - 1] = tmp;
	}
	return strcmp(temp, a);
} 

int main(){
    char a[100001];
    scanf("%s", a);
    if(doiXung(a) == 0){
    	printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

