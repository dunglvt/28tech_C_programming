#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[20001], b[1000], c[1000][100], d[1000][100];

void lower(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
    }
}

int main()
{
    fgets(a, 20001, stdin);
    fgets(b, 1000, stdin);
    a[strlen(a) - 1] = '\0';
    b[strlen(b) - 1] = '\0';

    lower(a);

    int n = 0;
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        strcpy(c[n++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++)
    {
        c[i][0] = toupper(c[i][0]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s ", c[i]);
    }

    printf("\n");
    int k = 0;
    char *word = strtok(b, "/");
    while (word != NULL)
    {
        if (strlen(word) < 2)
        {
            strcat(d[k], "0");
        }
        strcat(d[k++], word);
        word = strtok(NULL, "/");
    }

    for (int i = 0; i < k; i++)
    {
        printf("%s", d[i]);
        if (i != k - 1)
        {
            printf("/");
        }
    }
    return 0;
}