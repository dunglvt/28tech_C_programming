#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void lower(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char a[10001], b[1001][100], c[10001], d[1001][100];
        memset(a, '\0', sizeof(a)); // Đặt toàn bộ mảng `a` về rỗng
        memset(b, '\0', sizeof(b)); // Reset toàn bộ mảng `b`
        memset(c, '\0', sizeof(c)); // Reset chuỗi `c`
        memset(d, '\0', sizeof(d)); // Reset mảng `d`

        fgets(a, 10001, stdin);
        a[strlen(a) - 1] = '\0';

        int n = 0;
        char *token = strtok(a, " ");
        while (token != NULL)
        {
            strcpy(b[n++], token);
            token = strtok(NULL, " ");
        }

        lower(b[n - 2]);
        strcat(c, b[n - 2]);
        for (int i = 0; i < n - 2; i++)
        {
            b[i][0] = tolower(b[i][0]);
            char tmp[2] = {b[i][0], '\0'};
            strcat(c, tmp);
        }
        strcat(c, "@xyz.edu.vn");

        int k = 0;
        char *word = strtok(b[n - 1], "`/");
        while (word != NULL)
        {
            strcpy(d[k++], word);
            word = strtok(NULL, "/");
        }

        for (int i = 0; i < k; i++)
        {
            if (d[i][0] == '0')
            {
                d[i][0] = d[i][1];
                d[i][1] = '\0';
            }
        }
        printf("%s\n", c);
        for (int i = 0; i < k; i++)
        {
            printf("%s", d[i]);
        }
        printf("\n");
    }
    return 0;
}