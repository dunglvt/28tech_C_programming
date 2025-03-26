#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[100001], b[100001][100];

void kiemTra(char a[]) // hàm tách số 0 ở đầu
{
    int j = 0;
    char temp[100001] = "";
    while (a[j] == '0')
    {
        ++j;
    }
    if (j == strlen(a))
    {
        strcpy(a, "0");
        return;
    }
    int k = 0;
    for (int i = j; a[i] != '\0'; i++)
    {
        temp[k++] = a[i];
    }
    temp[k] = '\0'; // Đảm bảo kết thúc chuỗi

    strcpy(a, temp);
}

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    char xy[10001], yx[10001];
    strcpy(xy, x);
    strcat(xy, y);
    strcpy(yx, y);
    strcat(yx, x);
    return strcmp(yx, xy);
}

int main()
{
    fgets(a, 100001, stdin);
    a[strlen(a) - 1] = '\0';

    int n = 0; // số hàng
    int k = 0; // số cột
    for (int i = 0; i < strlen(a); i++)
    {
        if (isdigit(a[i]))
        {
            b[n][k++] = a[i];
        }
        else
        {
            if (k > 0) // Đang xây dựng số
            {
                b[n][k] = '\0';
                ++n;
                k = 0;
            }
        }
    }
    if (k > 0) // Xử lý số ở cuối chuỗi
    {
        b[n][k] = '\0';
        ++n;
    }
    for (int i = 0; i <= n; i++)
    {
        kiemTra(b[i]);
    }
    qsort(b, n, sizeof(b[0]), cmp);

    for (int i = 0; i < n; i++)
    {

        printf("%s", b[i]);
    }

    return 0;
}