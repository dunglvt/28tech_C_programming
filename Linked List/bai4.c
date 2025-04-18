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

void pushBack(node **head, int x)
{
    node *newNode = makeNode(x);
    if ((*head) == NULL)
    {
        *head = newNode;
        return;
    }
    node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void popFront(node **head)
{
    node *temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void front(node *head)
{
    if (head == NULL)
    {
        printf("EMPTY\n");
    }
    else
    {
        printf("%d\n", head->data);
    }
}

int main()
{
    int n;
    char c[100];
    node *head = NULL;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", c);
        if (strcmp(c, "push") == 0)
        {
            int x;
            scanf("%d", &x);
            pushBack(&head, x);
        }
        else if (strcmp(c, "pop") == 0)
        {
            if (head != NULL)
            {
                popFront(&head);
            }
        }
        else if (strcmp(c, "front") == 0)
        {
            front(head);
        }
    }
    return 0;
}