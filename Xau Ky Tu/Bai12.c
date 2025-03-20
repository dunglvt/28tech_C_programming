#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char a[100001], b[10001][1000];
int idx[10001];

void selectionSort(char a[][1000], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (strlen(a[j]) < strlen(a[min_pos]) || (strlen(a[j]) == strlen(a[min_pos]) && idx[j] < idx[min_pos]))
			{
				min_pos = j;
			}
		}
		if (min_pos != i)
		{
			char tmp[1000];
			strcpy(tmp, a[i]);
			strcpy(a[i], a[min_pos]);
			strcpy(a[min_pos], tmp);

			int temp = idx[i];
			idx[i] = idx[min_pos];
			idx[min_pos] = temp;
		}
	}
}

int thuanNghich(char a[])
{
	int l = 0;
	int r = strlen(a) - 1;
	while (l <= r)
	{
		if (a[l] != a[r])
		{
			return 0;
		}
		++l, --r;
	}
	return 1;
}

int main()
{
	fgets(a, 100001, stdin);
	a[strlen(a) - 1] = '\0';

	int n = 0;
	int pos = 0;
	char *token = strtok(a, " ");
	while (token != NULL)
	{
		if (thuanNghich(token))
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
				strcpy(b[n], token);
				idx[n] = pos;
				++n;
			}
		}
		token = strtok(NULL, " ");
		++pos;
	}
	selectionSort(b, n);
	for (int i = 0; i < n; i++)
	{
		printf("%s ", b[i]);
	}
	return 0;
}
