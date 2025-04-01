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
    char data[100];
    int ts;
} word;

word a[100];
int n = 0;
int pos = -1;

int checkPos(char c[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].data, c) == 0)
        {
            pos = i;
            return 1; // da xuat hien roi
        }
    }
    return 0; // chua xuat hien lan nao
}

int cmp(const void *a, const void *b)
{
    word *x = (word *)a;
    word *y = (word *)b;
    return strcmp(x->data, y->data);
}

int main()
{
    char c[100];
    while (scanf("%s", c) != -1)
    {
        if (checkPos(c) == 0)
        {
            strcpy(a[n].data, c);
            a[n].ts = 1;
            ++n;
        }
        else if (checkPos(c) == 1)
        {
            ++a[pos].ts;
        }
    }

    int max = -1e9;
    for (int i = 0; i < n; i++)
    {
        if (a[i].ts > max)
        {
            max = a[i].ts;
        }
    }

    qsort(a, n, sizeof(word), cmp);

    for (int i = 0; i < n; i++)
    {
        if (a[i].ts == max)
        {
            printf("%s\n", a[i].data);
            break;
        }
    }

    return 0;
}