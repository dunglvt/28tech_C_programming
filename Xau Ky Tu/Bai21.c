#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char s[10001], t[10001], b[1001][100], c[1001][100], d[1001][100];
char a[10001], e[10001];

void lower(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
    }
}

int cmp(const void *a, const void *b)
{
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

int main()
{
    fgets(s, 10001, stdin);
    fgets(t, 10001, stdin);

    s[strlen(s) - 1] = '\0';
    t[strlen(t) - 1] = '\0';

    lower(s);
    lower(t);

    strcpy(a, s); // mang a copy mang s
    strcpy(e, t); // mang e copy mang t

    strcat(s, " "); // them ky tu space vao cuoi mang s
    strcat(s, t);   // noi mang t voi mang s

    // mang b chua cac xau ky tu khac nhau
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i], token) == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            strcpy(b[n++], token);
        }
        token = strtok(NULL, " ");
    }

    qsort(b, n, sizeof(b[0]), cmp); // sort mang b theo thu tu tu dien

    // mang c chua cac xau ky tu mang s (a)
    int k = 0;
    char *token1 = strtok(a, " ");
    while (token1 != NULL)
    {
        strcpy(c[k++], token1);
        token1 = strtok(NULL, " ");
    }

    // mang d chua cac xau ky tu mang e (t)
    int h = 0;
    char *token2 = strtok(e, " ");
    while (token2 != NULL)
    {
        strcpy(d[h++], token2);
        token2 = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
    {
        int check1 = 0, check2 = 0;
        for (int j = 0; j < k; j++)
        {
            if (strcmp(b[i], c[j]) == 0)
            {
                check1 = 1;
                // strcpy(c[j], "1"); // luu xau c[j] bang ky tu " "
            }
        }
        for (int z = 0; z < h; z++)
        {
            if (strcmp(b[i], d[z]) == 0)
            {
                check2 = 1;
                // strcpy(d[z], "1"); // luu xau d[z] bang ky tu " "
            }
        }
        if (check1 == 1 && check2 == 1)
        {
            printf("%s ", b[i]);
        }
    }
    return 0;
}