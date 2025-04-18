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

void popFront(node **head)
{
    if (*head == NULL)
    {
        return;
    }
    node *tmp = *head;
    *head = (*head)->next;
    free(tmp);
}

void show(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int chuyenSo(char x[])
{
    int digit = 0;
    for (int i = 0; i < strlen(x); i++)
    {
        digit = digit * 10 + (x[i] - '0');
    }
    return digit;
}

int main()
{
    int n;
    scanf("%d", &n);
    char c[100];
    node *head = NULL;
    while (n--)
    {
        scanf("%s", c);
        if (strcmp(c, "push") == 0)
        {
            int x;
            scanf("%d", &x);
            pushFront(&head, x);
        }
        else if (strcmp(c, "pop") == 0)
        {
            if (head != NULL)
            {
                popFront(&head);
            }
        }
        else if (strcmp(c, "show") == 0)
        {
            if (head != NULL)
            {
                show(head);
            }
            else
            {
                printf("EMPTY\n\n");
            }
        }
    }
    return 0;
}