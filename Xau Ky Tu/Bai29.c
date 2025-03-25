#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[100001], b[10001][100];
#define ll long long

int main()
{
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';

    ll sum = 0;
    int n = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (isdigit(a[i]))
        {
            char tmp[2] = {a[i], '\0'};
            strcat(b[n], tmp);
        }
        else
        {
            ++n;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        sum += atoll(b[i]);
    }
    printf("%lld", sum);
    return 0;
}