// chuyen doi ky tu in hoa sang in thuong va nguoc lai
// neu khong phai chu cai thi khong thay doi

#include <stdio.h>

int main(){
	char a;
	scanf("%c", &a);
	if('A' <= a && a <= 'Z'){
		a += 32;
	} else if('a' <= a && a <= 'z'){
		a -= 32;
	} 
	printf("%c", a);
	return 0;
}

