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

typedef struct node
{
    int bac;
    int heso;
    struct node *next;
} node;

node *makeNode(int a, int b)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->bac = a;
    newNode->heso = b;
    newNode->next = NULL;
    return newNode;
}

void pushFront(node **head, int a, int b)
{
    node *newNode = makeNode(a, b);
    newNode->next = *head;
    *head = newNode;
}

int kiemTra(node *head, int x)
{
    int check = 0;
    for (node *i = head; i != NULL; i = i->next)
    {
        if (i->bac == x)
        {
            check = 1;
            break;
        }
    }
    return check;
}

void sum(node **head, int a, int b)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        if (i->bac == a)
        {
            i->heso += b;
            return;
        }
    }
}

void sapXep(node **head)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        node *max = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (max->bac < j->bac)
            {
                max = j;
            }
        }
        int res = i->bac;
        i->bac = max->bac;
        max->bac = res;

        int tmp = i->heso;
        i->heso = max->heso;
        max->heso = tmp;
    }
}

void duyet(node *head)
{
    while (head != NULL)
    {
        printf("%dx^%d", head->heso, head->bac);
        if (head->next != NULL)
        {
            printf(" + ");
        }
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    char c[100];
    while (scanf("%s", c) != -1)
    {
        if (strstr(c, "x^") != NULL)
        {
            int heso = c[0] - '0';
            int bac = c[strlen(c) - 1] - '0';
            if (kiemTra(head, bac))
            {
                sum(&head, bac, heso);
            }
            else
            {
                pushFront(&head, bac, heso);
            }
        }
    }
    sapXep(&head);
    duyet(head);
    return 0;
}