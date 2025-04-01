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

typedef struct word
{
    char data[1000];
    int ts;
} word;

word a[1000];
int n = 0;
int pos = -1;

int findPos(char c[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].data, c) == 0)
        {
            pos = i;
            return 1; // da xuat hien truoc do roi
        }
    }
    return 0; // chua xuat hien lan nao
}

int kiemTraXauCon(char c[])
{
    char tmp[] = ".com";
    char *pos = strstr(c, tmp);
    if (pos != NULL)
    {
        return 1; // tmp la xau con
    }
    else
    {
        return 0; // khong phai xau con
    }
}

int cmp(const void *a, const void *b)
{
    word *x = (word *)a;
    word *y = (word *)b;
    if (x->ts == y->ts)
    {
        return strcmp(x->data, y->data);
    }
    else
    {
        return y->ts - x->ts;
    }
}

int main()
{
    char c[1000];
    while (scanf("%s", c) != -1)
    {
        if (kiemTraXauCon(c))
        {
            if (findPos(c) == 0)
            {
                strcpy(a[n].data, c);
                a[n].ts = 1;
                ++n;
            }
            else
            {
                ++a[pos].ts;
            }
        }
    }

    qsort(a, n, sizeof(word), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i].data, a[i].ts);
    }

    return 0;
}