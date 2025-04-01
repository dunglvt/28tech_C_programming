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

typedef struct thongTin
{
    char ten[100];
    char ngaySinh[100];
    char diaChi[100];
    double gpa;
} thongTin;

thongTin nhap(thongTin a)
{
    getchar();
    fgets(a.ten, sizeof(a.ten), stdin);
    a.ten[strlen(a.ten) - 1] = '\0';
    fgets(a.ngaySinh, sizeof(a.ngaySinh), stdin);
    a.ngaySinh[strlen(a.ngaySinh) - 1] = '\0';
    fgets(a.diaChi, sizeof(a.diaChi), stdin);
    a.diaChi[strlen(a.diaChi) - 1] = '\0';
    scanf("%lf", &a.gpa);
    return a;
}

int cmp(const void *a, const void *b)
{
    thongTin *x = (thongTin *)a;
    thongTin *y = (thongTin *)b;
    if (strcmp(x->diaChi, y->diaChi) == 0)
    {
        if (x->gpa > y->gpa)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return strcmp(x->diaChi, y->diaChi);
    }
}

void sapXep(thongTin a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1;
        thongTin x = a[i];

        while ((pos >= 0 && strcmp(x.diaChi, a[pos].diaChi) < 0) || (strcmp(x.diaChi, a[pos].diaChi) == 0 && x.gpa > a[pos].gpa))
        {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}
void in(thongTin a)
{
    printf("%s %s %s %.2lf\n", a.ten, a.ngaySinh, a.diaChi, a.gpa);
}

int main()
{
    int n;
    scanf("%d", &n);
    thongTin a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = nhap(a[i]);
    }
    qsort(a, n, sizeof(thongTin), cmp);
    // sapXep(a, n);
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }
    return 0;
}