#include <stdio.h>
#include <math.h>

#define ll long long

ll cutDigit(ll n){  
	ll temp = n;
	ll tmp = temp/10;
	ll x = 0;
	while(tmp){
		x = x*10 + tmp%10;
		tmp /= 10;
	}
	return x/10;    // loai bo so dau va so cuoi cua n
}

int soThuanNghich(ll n){
	ll x = 0; 
	ll temp = n;
	while(n){
		x = x*10 + n%10;
		n /= 10;
	}
	return x == temp;
}

int kt(ll n){
	ll temp = n;
	ll soCuoi = temp%10;
	ll soDau = 0;
	while(n){
		soDau = n%10;
		n /= 10;
	}
	if((soDau == 2*soCuoi || soCuoi == 2*soDau) && soThuanNghich(cutDigit(temp))){
		return 1;
	} else {
		return 0;
	}
}

int main(){
    ll n;
    scanf("%lld", &n);
    if(kt(n)){
    	printf("YES");
	} else {
		printf("NO");
	}
    return 0;
}

