#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char s[100001], t[100001];

    fgets(s, 100001, stdin);
    fgets(t, 100001, stdin);
    s[strlen(s) - 1] = '\0';
    t[strlen(t) - 1] = '\0';
    char *pos = strstr(s, t);
    if (pos != NULL)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}