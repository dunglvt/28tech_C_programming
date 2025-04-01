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

int kiemTra(char c[])
{
    char *d[] = {"good", "bad", "wonderful", "terrible"};
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(d[i], c) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int findPos(char c[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].data, c) == 0)
        {
            pos = i;
            return 1; // da xuat hien roi
        }
    }
    return 0; // chua xuat hien
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
        if (kiemTra(c))
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
        if (a[i].ts != 0)
        {
            printf("%s %d\n", a[i].data, a[i].ts);
        }
    }

    return 0;
}