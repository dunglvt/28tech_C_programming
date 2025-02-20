//#include <stdio.h>
//#include <math.h>
//
//int isPrime(int n){
//	if(n==1) return 1;
//	for(int i = 2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return i;
//		}
//	}
//	return n;
//}
//
//void uocSoNTMin(int n){
//	for(int i = 1;i<=n; i++){
//			printf("%d\n", isPrime(i));
//	}
//}
//
//int main(){
//	int n;
//	scanf("%d", &n);
//	uocSoNTMin(n);
//}
//
//

#include <stdio.h>
#include <math.h>

int prime[1000001];
void sieve(int N) {
    for (int i = 1; i <= N; i++) {
        prime[i] = i;
    }
    for (int i = 2; i <= sqrt(N); i++) {
        if (prime[i] == i) { 
            for (int j = i * i; j <= N; j += i) {
                if (prime[j] == j) { 
                    prime[j] = i;  
                }
            }
        }
    }
}
int main() {
    int N;
    scanf("%d", &N);
    sieve(N);
    for (int i = 1; i <= N; i++) {
        printf("%d\n", prime[i]);
    }

    return 0;
}

