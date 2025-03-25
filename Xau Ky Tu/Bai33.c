#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int tn(char a[])
{
    for (int i = 0; i < strlen(a) / 2; i++)
    {
        if (a[i] != a[strlen(a) - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[100001];
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';

    int check = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '6')
        {
            check = 1;
        }
    }
    if (tn(a) == 1 && check == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}