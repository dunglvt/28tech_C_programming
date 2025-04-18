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
    struct node *prev;
} node;

node *makeNode(int x)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
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
    newNode->next = NULL;
}

void delete(node **head, int x)
{
    node *current = *head;
    node *todel = NULL;
    while (current != NULL)
    {
        if (current->data == x)
        {
            todel = current;
            if (current->prev != NULL)
            {
                current->prev->next = current->next;
            }
            else
            {
                *head = current->next;
            }
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            current = current->next;
            free(todel);
        }
        else
        {
            current = current->next;
        }
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
    int n, x, a;
    node *head = NULL;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        pushBack(&head, a);
    }

    delete (&head, x);
    if (head == NULL)
    {
        printf("EMPTY");
    }
    else
    {
        duyet(head);
    }

    return 0;
}