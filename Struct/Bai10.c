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

    for (int i = 0; i < n; i++)
    {
        int dem = 0; // gia tri 2
        char b[100] = "";
        strcpy(b, a[i].ngaySinh);
        char *token = strtok(b, "/");
        while (token != NULL)
        {
            ++dem;
            if (dem == 2 && ((strcmp(token, "4") == 0) || (strcmp(token, "04") == 0)))
            {
                in(a[i]);
                break;
            }
            token = strtok(NULL, "/");
        }
    }
    return 0;
}