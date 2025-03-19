#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void lower(char a[]){
	for(int i = 0 ; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

int cnt[256] = {0};

int main(){
    char a[100001];
    scanf("%s", a);
    lower(a);

	int check = 1;
	for(int i = 0; i < strlen(a); i++){
		cnt[(unsigned char)a[i]] = 1;
	}
	for(int i = 97; i < 123; i++){
		if(cnt[i] == 0){
			check = 0;
			break;
		}
	}
	
	if(check == 1){
		printf("YES");
	} else {
		printf("NO");
	}
    return 0;
}

