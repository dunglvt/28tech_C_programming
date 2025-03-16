#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    int a[10000];
    scanf("%s", a);
    char b = a;
    printf("%s\n", strrev(a));
    printf("%s\n", strupr(b));
    printf("%s\n", strlwr(b));
    return 0;
}

