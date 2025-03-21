#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void lower(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
    }
}

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

int main()
{
    char a[10001], b[10001], c[1001][100], d[1001][100];
    fgets(a, 10001, stdin);
    fgets(b, 10001, stdin);
    a[strlen(a) - 1] = '\0';
    b[strlen(b) - 1] = '\0';

    lower(a);
    lower(b);

    int n = 0;
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(c[i], token) == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            strcpy(c[n++], token);
        }
        token = strtok(NULL, " ");
    }

    int m = 0;
    char *token1 = strtok(b, " ");
    while (token1 != NULL)
    {
        int check = 1;
        for (int i = 0; i < m; i++)
        {
            if (strcmp(d[i], token1) == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            strcpy(d[m++], token1);
        }
        token1 = strtok(NULL, " ");
    }

    qsort(c, n, sizeof(c[0]), cmp);
    qsort(d, m, sizeof(d[0]), cmp);

    for (int i = 0; i < n; i++)
    {
        int check = 1;
        for (int j = 0; j < m; j++)
        {
            if (strcmp(c[i], d[j]) == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            printf("%s ", c[i]);
        }
    }
    return 0;
}