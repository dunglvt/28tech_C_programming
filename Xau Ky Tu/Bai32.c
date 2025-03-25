#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int solve(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}

int main()
{
    char a[100001];
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';

    int sum = 0;
    int check1 = 1;
    for (int i = 0; i < strlen(a); i++)
    {
        if (solve(a[i] - '0') != 1)
        {
            check1 = 0;
        }
        sum += a[i] - '0';
    }
    if (check1 == 1 && solve(sum))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}