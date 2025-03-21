#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char a[10001];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';

    char temp[10001] = "python";
    int i = 0, j = 0;
    while (i < strlen(a) && j < strlen(temp))
    {
        if (a[i] == temp[j])
        {
            ++i;
            ++j;
        }
        else
        {
            ++i;
        }
    }
    if (j == 6)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}