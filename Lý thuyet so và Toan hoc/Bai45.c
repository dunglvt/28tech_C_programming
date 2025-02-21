#include <stdio.h>
#include <math.h>

int bieuDien(int n){
	return (n%111)%11 == 0;
}

int main(){
    int n;
    scanf("%d", &n);
    printf(bieuDien(n) ? "YES" : "NO");
    return 0;
}

