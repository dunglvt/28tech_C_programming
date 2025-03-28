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

// int cmp(const void *a, const void *b)
// {
//     thongTin *x = (thongTin *)a;
//     thongTin *y = (thongTin *)b;
//     return y->gpa - x->gpa;
// }

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

void in(thongTin a)
{
    printf("%s %s %s %.2lf\n", a.ten, a.ngaySinh, a.diaChi, a.gpa);
}

void insectionSort(thongTin a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1;
        thongTin x = a[i];
        while (pos >= 0 && x.gpa > a[pos].gpa)
        {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}

void merge(thongTin a[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    thongTin x[n1], y[n2];
    for (int i = 0; i < n1; i++)
    {
        x[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        y[i] = a[m + i + 1];
    }
    int index = l;

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (x[i].gpa >= y[j].gpa)
        {
            a[index++] = x[i++];
        }
        else
        {
            a[index++] = y[j++];
        }
    }
    while (i < n1)
    {
        a[index++] = x[i++];
    }
    while (j < n2)
    {
        a[index++] = y[j++];
    }
}

void mergeSort(thongTin a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
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

    // qsort(a, n, sizeof(a->gpa), cmp);
    // selectionSort(a, n);

    // insectionSort(a, n);
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        in(a[i]);
    }
    return 0;
}