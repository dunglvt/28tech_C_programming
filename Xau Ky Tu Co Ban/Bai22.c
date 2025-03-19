#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[10001], b[10001];
    int t = 0;
    scanf("%d", &t);
    while(t--){
    	scanf("%s", a);
    	strcat(b, a);
	}
	printf("%s", b);
	return 0;
}

