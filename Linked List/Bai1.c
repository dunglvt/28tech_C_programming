#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ll long long
#define FORN(i, a, b) for (int i = a; i < b; i++)
#define FORL(i, a, b) for (int i = a; i > b; i--)
#define FORNB(i, a, b) for (int i = a; i <= b; i++)
#define FORLB(i, a, b) for (int i = a; i >= b; i--)

typedef struct thongTin
{
    char mssv[100];
    char name[100];
    double gpa;
    struct thongTin *next;
} thongTin;

thongTin *makeNewThongTin()
{
    thongTin *newSV = (thongTin *)malloc(sizeof(thongTin));
    getchar();
    fgets(newSV->mssv, sizeof(newSV->mssv), stdin);
    newSV->mssv[strlen(newSV->mssv) - 1] = '\0';

    fgets(newSV->name, sizeof(newSV->name), stdin);
    newSV->name[strlen(newSV->name) - 1] = '\0';

    scanf("%lf", &newSV->gpa);
    newSV->next = NULL;
    return newSV;
}

void pushFront(thongTin **head)
{
    thongTin *newSV = makeNewThongTin();
    newSV->next = *head;
    *head = newSV;
}

void pushBack(thongTin **head)
{
    thongTin *newSV = makeNewThongTin();
    if (*head == NULL)
    {
        newSV->next = *head;
        *head = newSV;
        return;
    }
    thongTin *tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newSV;
    newSV->next = NULL;
}

int count(thongTin *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        ++cnt;
        head = head->next;
    }
    return cnt;
}

void insert(thongTin **head, int k)
{
    int n = count(*head);
    if (k < 1 || k > n + 1)
    {
        return;
    }

    if (k == 1)
    {
        pushFront(head);
        return;
    }
    else if (k == n + 1)
    {
        pushBack(head);
        return;
    }
    thongTin *newSV = makeNewThongTin();
    thongTin *tmp = *head;
    for (int i = 1; i < k - 1; i++)
    {
        tmp = tmp->next;
    }
    newSV->next = tmp->next;
    tmp->next = newSV;
}

void duyet(thongTin *head)
{
    while (head != NULL)
    {
        printf("%s %s %.2lf\n", head->mssv, head->name, head->gpa);
        head = head->next;
    }
}

int main()
{
    int t, lc, k;
    thongTin *head = NULL;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &lc);
        if (lc == 1)
        {
            pushFront(&head);
        }
        else if (lc == 2)
        {
            pushBack(&head);
        }
        else if (lc == 3)
        {
            scanf("%d", &k);
            insert(&head, k);
        }
    }
    duyet(head);

    return 0;
}