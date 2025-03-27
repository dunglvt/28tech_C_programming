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

typedef struct phanSo
{
    int tuSo;
    int mauSo;
} phanSo;

phanSo nhap()
{
    phanSo a;
    scanf("%d", &a.tuSo);
    scanf("%d", &a.mauSo);
    return a;
}

void in(phanSo a)
{
    printf("%d %d\n", a.tuSo, a.mauSo);
}

int main()
{
    phanSo a[2];
    for (int i = 0; i < 2; i++)
    {
        a[i] = nhap();
    }
    for (int i = 0; i < 2; i++)
    {
        in(a[i]);
    }

    return 0;
}