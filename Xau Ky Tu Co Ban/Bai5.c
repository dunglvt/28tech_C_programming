#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void lat(char a[]){
	for(int i = 0; i<strlen(a)/2; i++){
		int temp = a[i];
		a[i] = a[strlen(a)-i-1];
		a[strlen(a)-i-1] = temp;
	}
}

int main(){
    char a[1000], b[1000];
    scanf("%s", a);
    int dem = 0;
    int j = 0;
	for(int i = strlen(a) - 1; i >= 0; i--){
		++dem;
		b[j++] = a[i];
		if(dem % 3 == 0 && i != 0){
			b[j++] = ',';
			dem = 0;
		}
	}
	b[j] = '\0';

	lat(b);
	printf("%s", b);
	return 0;
}

