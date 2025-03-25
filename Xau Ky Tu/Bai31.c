#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char a[100001];
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';

    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        sum += a[i] - '0';
    }
    printf("%d", sum);
    return 0;
}