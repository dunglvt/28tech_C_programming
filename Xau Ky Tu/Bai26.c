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

    int ans = 0;
    int count = 1;
    char temp = a[0];
    // strcat(a, "@");

    for (int i = 1; i <= strlen(a); i++)
    {
        if (a[i] == a[i - 1])
        {
            ++count;
        }
        else
        {
            if (count > ans)
            {
                ans = count;
                temp = a[i - 1];
            }
            else if (count == ans)
            {
                if (a[i - 1] > temp)
                {
                    temp = a[i - 1];
                }
            }
            count = 1;
        }
        // if (a[strlen(a) - 1] == a[strlen(a) - 2])
        // {
        //     ans = count;
        //     temp[0] = a[strlen(a) - 1];
        // }
    }

    for (int i = 0; i < ans; i++)
    {
        printf("%c", temp);
    }
    return 0;
}