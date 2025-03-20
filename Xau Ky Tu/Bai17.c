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

void upper(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = toupper(a[i]);
    }
}

int main()
{
    char a[10001], b[1001][100], c[1001][100];
    fgets(a, 10001, stdin);
    a[strlen(a) - 1] = '\0';

    lower(a);
    int n = 0;
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        strcpy(b[n++], token);
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++)
    {
        strcpy(c[i], b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        b[i][0] = toupper(b[i][0]);
        c[i][0] = toupper(c[i][0]);
        if (i == n - 1)
        {
            upper(b[i]);
            upper(c[i]);
            strcat(c[i], ",");
        }
        if (i == n - 2)
        {
            strcat(b[i], ",");
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s", b[i]);
        if (i != n - 1)
        {
            printf(" ");
        }
    }

    printf("\n%s ", c[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%s", c[i]);
        if (i != n - 2)
        {
            printf(" ");
        }
    }

    return 0;
}