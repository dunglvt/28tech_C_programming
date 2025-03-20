#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cnt[10001] = {0}; // dem so lan xuat hien
int idx[10001];       // luu chi so cac xau khac nhau
char a[1000001], b[10001][100], c[10001][100];

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

int main()
{
    fgets(a, 1000001, stdin);
    a[strlen(a) - 1] = '\0';

    int n = 0, pos = 0, j = 0; // bien pos de luu vi tri co xau ky tu trung vs token
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i], token) == 0)
            {
                check = 0;
                j = i;
                break;
            }
        }
        if (check)
        {
            strcpy(b[n], token);
            cnt[n] = 1;
            idx[n] = pos;
            ++n;
        }
        else
        {
            ++cnt[j];
        }
        token = strtok(NULL, " ");
        ++pos;
    }

    for (int i = 0; i < n; i++)
    {
        strcpy(c[i], b[i]);
    }

    qsort(b, n, sizeof(b[0]), cmp);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(b[i], c[j]) == 0)
            {
                printf("%s %d\n", b[i], cnt[j]);
            }
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", c[i], cnt[i]);
    }

    return 0;
}
