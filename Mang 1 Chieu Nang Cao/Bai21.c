#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int chan = 0;
	int le = 0;
	int count = 0;
	while(scanf("%d", &n) != -1){
		if(n & 1){
			++le;
		}
		else {
			++chan;
		}
		++count;
	}
	if((chan > le && count%2==0) || (chan < le && count%2!=0)){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}

