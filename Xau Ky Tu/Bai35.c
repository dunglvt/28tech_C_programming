#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sumDigit(char a[])
{
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        sum += a[i] - '0';
    }
    if (sum % 3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char a[100001];
    scanf("%s", a);

    int b = a[strlen(a) - 1] - '0';
    if (b & 1)
    {
        printf("NO");
    }
    else
    {
        if (sumDigit(a))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}