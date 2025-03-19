#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void sort(char a[])
{
    int min_index;
    for (int i = 0; i < strlen(a) - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < strlen(a); j++)
        {
            if (a[min_index] > a[j])
            {
                min_index = j;
            }
        }
        char temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

void sort1(char a[])
{
    int min_index;
    for (int i = 0; i < strlen(a) - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < strlen(a); j++)
        {
            if (a[min_index] < a[j])
            {
                min_index = j;
            }
        }
        char temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}


int main()
{
    char a[10001];
    scanf("%s", a);
    sort(a);
    printf("%s", a);
    printf("\n");
    sort1(a);
    printf("%s", a);
    return 0;
}
