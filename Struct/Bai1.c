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
    int tu, mau;
} phanSo;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

phanSo toigian(phanSo a)
{
    phanSo res;
    int uocChung = gcd(abs(a.tu), abs(a.mau));
    res.tu = a.tu / uocChung;
    res.mau = a.mau / uocChung;
    return res;
}

phanSo tong(phanSo a, phanSo b)
{
    phanSo res;
    int mauChung = lcm(a.mau, b.mau);
    res.mau = mauChung;
    res.tu = mauChung * a.tu / a.mau + mauChung * b.tu / b.mau;
    return toigian(res);
}

phanSo hieu(phanSo a, phanSo b)
{
    phanSo res;
    int mauChung = lcm(a.mau, b.mau);
    res.mau = mauChung;
    res.tu = mauChung * a.tu / a.mau - mauChung * b.tu / b.mau;
    return toigian(res);
}

int main()
{
    phanSo a, b;
    scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
    a = toigian(a);
    b = toigian(b);
    printf("%d/%d\n%d/%d\n", a.tu, a.mau, b.tu, b.mau);
    phanSo t = tong(a, b);
    phanSo h = hieu(a, b);
    printf("%d/%d\n%d/%d", t.tu, t.mau, h.tu, h.mau);
    return 0;
}