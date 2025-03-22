#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    char xy[10001], yx[10001];
    strcpy(xy, x);
    strcat(xy, y);
    strcpy(yx, y);
    strcat(yx, x);
    return strcmp(yx, xy);
}

int main()
{
    int n;
    scanf("%d", &n);
    char a[n][100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s", a[i]);
    }
    return 0;
}