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
    return strcmp(x->diaChi, y->diaChi);
}

void in(thongTin a)
{
    printf("%s\n", a.diaChi);
}

int main()
{
    int n, max = -1e9;
    scanf("%d", &n);
    thongTin a[n];
    char b[1000][100];
    for (int i = 0; i < n; i++)
    {
        a[i] = nhap(a[i]);
    }

    qsort(a, n, sizeof(thongTin), cmp);

    int count = 1, j = 0;

    for (int i = 1; i < n; i++)
    {
        if (strcmp(a[i].diaChi, a[i - 1].diaChi) == 0)
        {
            ++count;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 1;
        }
    }

    if (count > max)
    {
        max = count;
    }

    count = 1;
    for (int i = 1; i < n; i++)
    {
        if (strcmp(a[i].diaChi, a[i - 1].diaChi) == 0)
        {
            ++count;
        }
        else
        {
            if (count == max)
            {
                strcpy(b[j++], a[i - 1].diaChi);
            }
            count = 1;
        }
    }

    if (count == max)
    {
        strcpy(b[j++], a[n - 1].diaChi);
    }

    for (int i = 0; i < j; i++)
    {
        printf("%s\n", b[i]);
    }

    return 0;
}