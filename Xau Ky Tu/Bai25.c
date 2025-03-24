#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void lat(char a[])
{
    int l = 0;
    int r = strlen(a) - 1;
    while (l <= r)
    {
        char tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l, --r;
    }
}

int main()
{
    int m, s;
    scanf("%d%d", &m, &s);
    char a[101] = ""; // xau a de luu so nho nhat
    char b[101] = ""; // xau b de luu so lon nhat

    if ((s == 0 && m > 1) || s > 9 * m)
    {
        printf("NOT FOUND");
    }
    else
    {
        if (m == 1)
        {
            char res[30];
            sprintf(res, "%d", s);
            strcat(a, res);
            strcat(b, res);
        }
        else
        {
            int s1 = s - 1;
            for (int i = m - 2; i >= 0; i--)
            {
                if (s1 > 9)
                {
                    strcat(a, "9");
                    s1 -= 9;
                }
                else
                {
                    char res[30];
                    sprintf(res, "%d", s1);
                    strcat(a, res);
                    s1 = 0;
                }
            }
            char res[30];
            sprintf(res, "%d", s1 + 1);
            strcat(a, res);

            for (int i = 0; i < m; i++)
            {
                if (s > 9)
                {
                    strcat(b, "9");
                    s -= 9;
                }
                else if (s <= 9 && s > 0)
                {
                    char res[30];
                    sprintf(res, "%d", s);
                    strcat(b, res);
                    s = 0;
                }
                else if (s == 0)
                {
                    strcat(b, "0");
                }
            }
        }

        lat(a);
        printf("%s\n", a);
        printf("%s", b);
    }

    return 0;
}