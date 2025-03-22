#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cnt[256] = {0};

int main()
{
    char a[100001];
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        ++cnt[(unsigned char)a[i]];
    }
    long long dem = strlen(a);
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i])
        {
            dem += 1ll * cnt[i] * (cnt[i] - 1) / 2;
        }
    }

    printf("\n%lld", dem);
    return 0;
}