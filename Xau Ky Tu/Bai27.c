#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[100001];

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

int main()
{
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';

    int length = 1;
    int maxLength = 1;
    int pos = 0;
    int posCurrent = 0;
    // strcat(a, "@");
    for (int i = 1; i < strlen(a); i++)
    {
        if (a[i] != a[i - 1])
        {
            ++length;
        }
        else
        {
            if (length > maxLength || (length == maxLength && strncmp(&a[posCurrent], &a[pos], length) > 0))
            {
                maxLength = length;
                pos = posCurrent;
            }
            length = 1;
            posCurrent = i;
        }
        // printf("i: %d pos: %d length %d maxlenght: %d ky tu: %c \n", i, pos, length, maxLength, a[i]);
    }
    if (length > maxLength || (length == maxLength && strncmp(&a[posCurrent], &a[pos], length) > 0))
    {
        maxLength = length;
        pos = posCurrent;
    }

    for (int i = pos; i < pos + maxLength; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}