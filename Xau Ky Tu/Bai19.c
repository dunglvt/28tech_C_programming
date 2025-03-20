#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[1000001], b[10001][100], c[1000001], d[10001][100], temp[1000001];
char save[10001][100];
int idx = 0;

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
        memset(a, '\0', sizeof(a));
        memset(b, '\0', sizeof(b));
        memset(c, '\0', sizeof(c));
        fgets(a, 1000001, stdin);
        a[strlen(a) - 1] = '\0';

        int n = 0;
        char *token = strtok(a, " ");
        while (token)
        {
            strcpy(b[n++], token);
            token = strtok(NULL, " ");
        }

        lower(b[n - 2]);
        strcat(c, b[n - 2]);
        for (int i = 0; i < n - 2; i++)
        {
            lower(b[i]);
            char tmp[2] = {b[i][0], '\0'};
            strcat(c, tmp);
        }

        int count = 1;
        strcpy(temp, c);
        for (int i = 0; i < idx; i++)
        {
            char *prt = strstr(save[i], temp);
            if (prt != NULL)
            {
                ++count;
            }
        }

        if (count > 1)
        {
            char res[30];
            sprintf(res, "%d", count);
            strcat(c, res);
        }

        strcat(c, "@xyz.edu.vn");

        printf("%s\n", c);      // output email
        strcpy(save[idx++], c); // luu email vo mang save

        int k = 0;
        char *token1 = strtok(b[n - 1], "/");
        while (token1 != NULL)
        {
            strcpy(d[k++], token1);
            token1 = strtok(NULL, "/");
        }
        for (int i = 0; i < k; i++)
        {
            if (atoi(d[i]) < 10)
            {
                d[i][0] = d[i][1];
                d[i][1] = '\0';
            }
            printf("%s", d[i]); // output password
        }
        printf("\n");
    }
}
