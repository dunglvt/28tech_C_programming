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
    struct node *next;
} node;

node *makeNode(int x)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void pushFront(node **head, int x)
{
    node *newNode = makeNode(x);
    newNode->next = *head;
    *head = newNode;
}

void selectionSort1(node **head)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        node *min = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (j->data < min->data)
            {
                min = j;
            }
        }
        int tmp = i->data;
        i->data = min->data;
        min->data = tmp;
    }
}

void selectionSort2(node **head)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        node *min = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (j->data > min->data)
            {
                min = j;
            }
        }
        int tmp = i->data;
        i->data = min->data;
        min->data = tmp;
    }
}

void duyet(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    int n;
    node *head = NULL;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        pushFront(&head, x);
    }

    selectionSort1(&head);
    duyet(head);

    printf("\n");
    selectionSort2(&head);
    duyet(head);
    return 0;
}