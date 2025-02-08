// neu chu hoa -> UPPER
// chu thuong -> LOWER
// chu so -> DIGIT
// ky tu dac biet -> SPECIAL

#include <stdio.h>

int main() {
    char c;
    scanf ("%c", &c);
    if ('a' <= c && c <= 'z')
        printf ("LOWER");
    else if (48 <= c && c <= 57)
        printf ("DIGIT");
    else if ('A' <= c&& c <= 'Z')
        printf ("UPPER");
    else
        printf ("SPECIAL");
    return 0;
}
