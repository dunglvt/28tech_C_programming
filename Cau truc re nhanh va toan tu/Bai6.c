#include <stdio.h>
#include <math.h>

int yeuCau1(int n){
	return n%2==0;
}

int yeuCau2(int n){
	return n%3==0 && n%5==0;
}

int yeuCau3(int n){
	return n%3==0 && n%7!=0;
}

int yeuCau4(int n){
	return n%3==0 || n%7==0;
}

int yeuCau5(int n){
	return (n>30 && n<50) ? 1 : 0;
}

int yeuCau6(int n){
	return n >= 30 && (n%2==0 || n%3==0 || n%5==0);
}

int yeuCau7(int n){
	return (n >= 10 && n <= 99) && (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7);
}

int yeuCau8(int n){
	return n<=100 && n%23==0;
}

int yeuCau9(int n){
	return n>20 || n<10;
}

int yeuCau10(int n){
	return (n%10)%3 ==0;
}

void nhapXuat(int n){
	if(n){
		printf("YES\n");
	} else 
		printf("NO\n");
}

int main(){
	int n;
	scanf("%d", &n);
	
	nhapXuat(yeuCau1(n));
	nhapXuat(yeuCau2(n));
	nhapXuat(yeuCau3(n));
	nhapXuat(yeuCau4(n));
	nhapXuat(yeuCau5(n));
	nhapXuat(yeuCau6(n));
	nhapXuat(yeuCau7(n));
	nhapXuat(yeuCau8(n));
	nhapXuat(yeuCau9(n));
	nhapXuat(yeuCau10(n));
	return 0;
}
