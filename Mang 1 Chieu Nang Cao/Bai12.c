#include <stdio.h>
#include <math.h>

int main(){
	int n, k = 0;
	int a[10000];
	int dem3 = 0, dem5 = 0, dem2 = 0, dem7 = 0, dem11 = 0; 
    while(scanf("%d", &n) != -1){
    	a[k++] = n;
	}
	if(dem2 != 0){
		printf("2 %d\n", dem2);
	}
	if(dem3 != 0){
		printf("2 %d\n", dem3);
	}
	if(dem5 != 0){
		printf("2 %d\n", dem5);
	}
	if(dem7 != 0){
		printf("2 %d\n", dem7);
	}
	if(dem11 != 0){
		printf("2 %d\n", dem11);
	}
	return 0;
}

