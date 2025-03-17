#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void upper(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = toupper(a[i]);
	}
}

void lower(char a[]){
	for(int i = 0; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
} 

void swap(char a[]){
	for(int i = 0; i<strlen(a)/2; i++){
		int temp = a[i];
		a[i] = a[strlen(a) - i - 1];
		a[strlen(a) - i - 1] = temp;
	}
}

int main(){
    char a[10000];
    scanf("%s", a);
    
    swap(a);
    printf("%s\n", a);
    
    swap(a);
    lower(a);;
    printf("%s\n", a);
    
    upper(a);
    printf("%s\n", a);
    return 0;
}

