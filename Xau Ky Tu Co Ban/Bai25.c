#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int kiemTra(char a[]){
	if(strlen(a) == 10 || strlen(a) == 11){
    	for(int i = 0; i<strlen(a); i++){
    		if(isalpha(a[i])){
    			return 0;
    			break;
			}
		}
		return 1;
	} else {
		return 0;
	}
}

int main(){
    char a[10001], b[10001][100];
    int t, n = 0;
    scanf("%d", &t);
    
    while(t--){
    	scanf("%s", a);
    	strcpy(b[n++], a);
	}
	for(int i = 0; i<n; i++){
		if(kiemTra(b[i])){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

