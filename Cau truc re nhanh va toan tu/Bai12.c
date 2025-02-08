// so ngay cua thang

#include <stdio.h>
#include <math.h>

int main(){
	int thang, nam;
	scanf("%d %d", &thang, &nam);
	if(thang>=1 && thang<=12 && nam>0){
		if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12){
			printf("31");
		}else if(thang==4 || thang==6 || thang==9 || thang==11){
			printf("30");
		} else if(thang==2){
			if(nam%400==0 || (nam%4==0 && nam%100!=0)){
				printf("29");
			} else {
				printf("28");
			}
		}
	} else {
		printf("INVALID");
	}
}

