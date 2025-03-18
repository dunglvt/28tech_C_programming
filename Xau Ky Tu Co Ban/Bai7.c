#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10000], b[10000], c[10000];
    scanf("%s", a);
    int u = 0, v = 0;
    for(int i = 0; i<strlen(a); i++){
    	if(isdigit(a[i])){
    		b[u++] = a[i];
		} 
		if(isalpha(a[i])){
			c[v++] = a[i];
		}
	}
	b[u] = '\0';
	c[v] = '\0';
	printf("%s", b);
	printf("\n");
	printf("%s", c);
	return 0;
}

