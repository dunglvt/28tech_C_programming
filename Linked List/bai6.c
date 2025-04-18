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
    char data[100];
    int fre;
    struct node *next;
} node;

node *makeNode(char c[])
{
    node *newNode = (node *)malloc(sizeof(node));
    strcpy(newNode->data, c);
    newNode->fre = 1;
    newNode->next = NULL;
    return newNode;
}

void pushBack(node **head, char a[])
{
    node *newNode = makeNode(a);
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
}

void duyet(node *head)
{
    while (head != NULL)
    {
        printf("%s %d\n", head->data, head->fre);
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    char a[100];
    while (scanf("%s", a) != -1)
    {
        int check = 0;
        for (node *i = head; i != NULL; i = i->next)
        {
            if (strcmp(i->data, a) == 0)
            {
                ++(i->fre);
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            pushBack(&head, a);
        }
    }
    duyet(head);
    return 0;
}