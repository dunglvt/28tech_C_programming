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

int n;
typedef struct node
{
    int data;
    int vitri;
    struct node *next;
    struct node *prev;
} node;

node *makeNode(int x)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = x;
    newNode->vitri = n;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void pushFront(node **head, int x)
{
    node *newNode = makeNode(x);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void latNguoc(node **head)
{
    node *a = *head;
    node *b = *head;
    while (b->next != NULL)
    {
        b = b->next;
    }

    while (a != b && a->vitri < b->vitri)
    {
        int tmp = a->data;
        a->data = b->data;
        b->data = tmp;

        a = a->next;
        b = b->prev;
    }
}

void duyet(node *head)
{
    while (head->next != NULL)
    {
        head = head->next;
    }
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->prev;
    }
}

int main()
{
    int x;
    node *head = NULL;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        pushFront(&head, x);
    }
    latNguoc(&head);
    duyet(head);
    return 0;
}