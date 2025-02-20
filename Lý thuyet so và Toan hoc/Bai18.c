#include <stdio.h>
#include <math.h>

//int prime[1000001];
//
//void sang(){
//	for(int i = 1; i<= 1000000;i++){
//		prime[i] = i;
//	}
//	for(int i = 2; i<= 1000; i++){
//		if(prime[i] == i){
//			for(int j = i*i; j<= 1000000; j += i){
//				if(prime[j] == j){
//					prime[j] = i;
//				}
//			}
//		}
//	}
//}
//
//void soDep(int a, int b){
//	for(int i = a; i<= b; i++){
//		int res = prime[i]*prime[i];
//		if(i%prime[i]==0 && i%res==0){
//			printf("%d ", i);
//		}
//	}
//}
//
//int main(){
//	sang();
//    int a, b;
//    scanf("%d %d", &a, &b);
////    soDep(a, b);
//    for(int i =a; i<= b; i++){
//    	printf("%d ", prime[i]);
//	}
//}

int soDep1(int n){
	int max = 0;
	for(int i = 2; i<= sqrt(n); i++){
		int res = 0;
		while(n%i==0){
			++res;
			n /= i;	
		}
		if(res >= max) {
			max = res;
		}
		if(max >= 2) return 1;
	}
	return 0;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i =a; i<= b; i++){
    	if(soDep1(i)){
    		printf("%d ", i);
		}
	}
	return 0;
}










