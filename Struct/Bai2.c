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

typedef struct soPhuc
{
    int thuc, ao;
} soPhuc;

soPhuc tong(soPhuc a, soPhuc b)
{
    soPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

soPhuc hieu(soPhuc a, soPhuc b)
{
    soPhuc res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

soPhuc tich(soPhuc a, soPhuc b)
{
    soPhuc tich;
    tich.thuc = a.thuc * b.thuc - a.ao * b.ao;
    tich.ao = a.thuc * b.ao + a.ao * b.thuc;
    return tich;
}

int main()
{
    soPhuc a, b;
    scanf("%d%d%d%d", &a.thuc, &a.ao, &b.thuc, &b.ao);
    soPhuc t, h, ti;
    t = tong(a, b);
    h = hieu(a, b);
    ti = tich(a, b);
    printf("%d %d\n%d %d\n%d %d", t.thuc, t.ao, h.thuc, h.ao, ti.thuc, ti.ao);
    return 0;
}