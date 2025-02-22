#include <stdio.h>
#include <math.h>

int isPrime(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int thuanNghich(int n){
	int x = 0;
	int tmp = n;
	while(n){
		x = x*10 + n%10;
		n /= 10;
	}
	return x== tmp;
}

int chinhPhuong(int n){
	int tmp = sqrt(n);
	return tmp*tmp == n;
}

int phanTich(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

void lietKe(int a[], int n){
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	int cnt4 = 0;
	for(int i=0;i<n;i++){
		if(isPrime(a[i])){
			++ cnt1;
		}
		if(thuanNghich(a[i])){
			++cnt2;
		}
		if(chinhPhuong(a[i])){
			++cnt3;
		}
		if(isPrime(phanTich(a[i]))){
			++cnt4;
		}
	}
	printf("%d\n%d\n%d\n%d", cnt1, cnt2, cnt3, cnt4);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
    lietKe(a, n);
    return 0;
}

