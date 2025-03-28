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

int n;
int max = -1e9;

typedef struct thongTin
{
    char ten[100];
    char ngaySinh[100];
    char diaChi[100];
    int diemToan, diemLy, diemHoa;
} thongTin;

thongTin nhap()
{
    thongTin a;
    getchar(); // Đọc ký tự newline còn lại
    fgets(a.ten, sizeof(a.ten), stdin);
    a.ten[strlen(a.ten) - 1] = '\0'; // Loại bỏ ký tự newline

    fgets(a.ngaySinh, sizeof(a.ngaySinh), stdin);
    a.ngaySinh[strlen(a.ngaySinh) - 1] = '\0'; // Loại bỏ ký tự newline

    fgets(a.diaChi, sizeof(a.diaChi), stdin);
    a.diaChi[strlen(a.diaChi) - 1] = '\0'; // Loại bỏ ký tự newline
    scanf("%d %d %d", &a.diemToan, &a.diemLy, &a.diemHoa);
    return a;
}

// thongTin nhap(thongTin a)
// {
//     getchar();
//     scanf("%s", &a.ten);
//     scanf("%s", &a.ngaySinh);
//     scanf("%s", &a.diaChi);
//     scanf("%d%d%d", &a.diemToan, &a.diemLy, &a.diemHoa);
//     return a;
// }

// thongTin nhap(thongTin a)
// {
//     getchar(); // Đọc ký tự newline còn lại từ lần nhập trước
//     fgets(a.ten, sizeof(a.ten), stdin);
//     fgets(a.ngaySinh, sizeof(a.ngaySinh), stdin);
//     fgets(a.diaChi, sizeof(a.diaChi), stdin);
//     scanf("%d%d%d", &a.diemToan, &a.diemLy, &a.diemHoa);
//     return a;
// }

thongTin x; // luu thong tin sinh vien co diem co nhat

void tongDiem(thongTin a)
{
    int tong = a.diemHoa + a.diemLy + a.diemToan;
    if (tong > max)
    {
        x = a;
        max = tong;
    }
}

int diem(thongTin a)
{
    return a.diemHoa + a.diemLy + a.diemToan;
}

int trungTuyen(thongTin a)
{
    int tong1 = a.diemHoa + a.diemLy + a.diemToan;
    if (tong1 >= 24)
    {
        return 1;
    }
    return 0;
}

void in(thongTin a)
{
    printf("%s %s %s %d", a.ten, a.ngaySinh, a.diaChi, diem(a));
    return;
}

int main()
{
    int j = 0;
    scanf("%d", &n);
    thongTin a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = nhap(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        tongDiem(a[i]);
    }
    printf("DANH SACH THU KHOA :\n");
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        if (diem(a[i]) == max)
        {
            b[j++] = a[i];
        }
    }
    for (int i = 0; i < j; i++)
    {
        in(b[i]);
        printf("\n");
    }

    printf("KET QUA XET TUYEN:\n");
    for (int i = 0; i < n; i++)
    {
        if (trungTuyen(a[i]))
        {
            in(a[i]);
            printf(" DO\n");
        }
        else
        {
            in(a[i]);
            printf(" TRUOT\n");
        }
    }

    return 0;
}