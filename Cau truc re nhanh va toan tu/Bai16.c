// in ra ke tu ke tiep
// chu hoa -> chu thuong ke tiep
// chu thuong -> chu hoa ke tiep
// chu cai ke tiep cua Z -> A

#include <stdio.h>

int main() {
    char k;
    scanf("%c", &k);

    k = (k >= 'A' && k <= 'Y') ? k + 33 :
        (k >= 'a' && k <= 'y') ? k + 1 : 'a';

    printf("%c", k);
    return 0;
}

