#include <stdio.h>
#include <math.h>

#define ll long long

void he16(ll n){
	if(n>=16){
		he16(n/16);
	}
	if(n%16>9){
		switch(n%16){
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;
	}
	} else {	
	printf("%lld", n%16);
}
}

int main(){
    ll n;
    scanf("%lld", &n);
    he16(n);
    return 0;
}

