#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ll long long
#define FORL(i, a, b) for (int i = a; i < b; i++)
#define FORN(i, a, b) for (int i = a; i > b; i--)
#define FORLB(i, a, b) for (int i = a; i <= b; i++)
#define FORNB(i, a, b) for (int i = a; i >= b; i--)

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    if (strlen(x) == strlen(y))
    {
        return strcmp(x, y);
    }
    else
    {
        return strlen(x) - strlen(y);
    }
}

int main()
{
    char a[10001], b[1001][100];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';

    int n = 0;
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        strcpy(b[n++], token);
        token = strtok(NULL, " ");
    }
    qsort(b, n, sizeof(b[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", b[i]);
    }
    return 0;
}