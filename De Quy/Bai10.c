#include <stdio.h>
#include <math.h>

float tong(int n)
{
	if(n==1) return 1.0;
	return 1.0/n + tong(n-1);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%.3f", tong(n));
    return 0;
}

