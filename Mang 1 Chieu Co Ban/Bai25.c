#include <stdio.h>
#include <math.h>

#define ll long long

int chan = 0;	
int le = 0;
int main(){
	int n;
   	while((scanf("%d", &n)) == 1){
		if(n & 1){
			++le;
		} else {
			++chan;
		}
	}
	if(chan>le){
		printf("CHAN");
	} else if(le>chan){
		printf("LE");
	} else {
		printf("CHANLE");
	}
    return 0;
}

