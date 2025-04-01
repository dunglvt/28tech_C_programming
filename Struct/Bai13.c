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

typedef struct word
{
    char data[10000];
    int ts;
    int index;
} word;

int soDoiXungChan(char c[])
{
    char temp[10000];
    strcpy(temp, c);
    int check = 0, check1 = 1;
    for (int i = 0; i < strlen(temp) / 2; i++)
    {
        char tmp = temp[i];
        temp[i] = temp[strlen(temp) - i - 1];
        temp[strlen(temp) - i - 1] = tmp;
    }
    if (strcmp(temp, c) == 0)
    {
        check = 1;
    }
    for (int i = 0; i < strlen(c); i++)
    {
        int res = c[i] - '0';
        if (res & 1)
        {
            check1 = 0; // so le
            break;
        }
    }
    return check == 1 && check1 == 1;
}

word a[10000];
int n = 0;
int pos = -1;

int findPos(char c[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].data, c) == 0)
        {
            pos = i;
            return 1; // da xuat hien tu truoc
        }
    }
    return 0; // chua xuat hien lan nao
}

void selectionSorT(word c[], int k)
{
    int min_index;
    for (int i = 0; i < k - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < k; j++)
        {
            if (c[j].ts > c[min_index].ts)
            {
                min_index = j;
            }
        }
        word temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

int cmp(const void *a, const void *b)
{
    word *x = (word *)a;
    word *y = (word *)b;

    if (x->ts != y->ts)
    {
        return y->ts - x->ts; // Sắp xếp tần suất giảm dần
    }
    return x->index - y->index; // Nếu tần suất bằng nhau, giữ nguyên thứ tự xuất hiện
}

int main()
{
    char c[10000];
    int idx = 0;
    while (scanf("%s", c) != -1)
    {
        if (soDoiXungChan(c))
        {
            if (findPos(c) == 0)
            {
                strcpy(a[n].data, c);
                a[n].ts = 1;
                a[n].index = idx;
                ++n;
                ++idx;
            }
            else
            {
                ++a[pos].ts;
            }
        }
    }

    // selectionSorT(a, n);
    qsort(a, n, sizeof(word), cmp);

    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", a[i].data, a[i].ts);
    }

    return 0;
}