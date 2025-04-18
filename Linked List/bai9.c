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
    int data;
    int fre;
    struct node *next;
    struct node *prev;
} node;

node *makeNode(int x)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = x;
    newNode->fre = 1;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void pushFront(node **head, int x)
{
    node *newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}

void pushBack(node **head, int x)
{
    node *newNode = makeNode(x);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    node *tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

void duyet(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int kiemTra(node *head, int x)
{
    int check = 0;
    for (node *i = head; i != NULL; i = i->next)
    {
        if (i->data == x)
        {
            check = 1;
        }
    }
    return check;
}

void tanSuat(node **head, int x)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        if (i->data == x)
        {
            (i->fre)++;
        }
    }
}

int main()
{
    int n, x;
    node *head = NULL;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        if (kiemTra(head, x))
        {
            tanSuat(&head, x);
        }
        else
        {
            pushBack(&head, x);
        }
    }
    duyet(head);
    return 0;
}