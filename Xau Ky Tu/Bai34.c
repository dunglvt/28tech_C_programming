#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int tangDan(char a[])
{
    for (int i = 1; a[i] != '\0'; i++)
    {
        if (a[i] < a[i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int giamDan(char a[])
{
    for (int i = 1; a[i] != '\0'; i++)
    {
        if (a[i] > a[i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char a[100001];
    scanf("%s", a);

    if (tangDan(a) || giamDan(a))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}