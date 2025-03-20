#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cnt[10001] = {0}; // dem so lan xuat hien
int idx[10001];       // luu chi so cac xau khac nhau
char a[1000001], b[10001][100], c[10001][100];

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

int main()
{
    fgets(a, 1000001, stdin);
    a[strlen(a) - 1] = '\0';

    int n = 0, pos = 0, j = 0; // bien pos de luu vi tri co xau ky tu trung vs token
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i], token) == 0)
            {
                check = 0;
                j = i;
                break;
            }
        }
        if (check)
        {
            strcpy(b[n], token);
            cnt[n] = 1;
            idx[n] = pos;
            ++n;
        }
        else
        {
            ++cnt[j];
        }
        token = strtok(NULL, " ");
        ++pos;
    }

    int min_value = 1e9, max_value = -1e9;
    char min[100], max[100];
    for (int i = 0; i < n; i++)
    {
        if (min_value > cnt[i] || (min_value == cnt[i] && strcmp(min, b[i]) < 0))
        {
            min_value = cnt[i];
            strcpy(min, b[i]);
        }
        if (max_value < cnt[i] || (max_value == cnt[i] && strcmp(max, b[i]) < 0))
        {
            max_value = cnt[i];
            strcpy(max, b[i]);
        }
    }

    printf("%s %d\n%s %d", max, max_value, min, min_value);
    return 0;
}

// mảng b chứa các ký tự khác nhau và đã đc xắp xếp
// mảng c chưa các ký tự khác nhau nhưng chưa sort
// mảng cnt tần suất xuất hiện theo chỉ số mảng mảng c chưa sắp xếp