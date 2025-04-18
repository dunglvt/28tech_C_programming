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
    char *id;
    char *name;
    double gpa;
    struct node *next;
} node;

double max_gpa = -1.0;

node *makeNode()
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->id = (char *)malloc(100);
    newNode->name = (char *)malloc(100);

    getchar();
    fgets(newNode->id, 101, stdin);
    newNode->id[strlen(newNode->id) - 1] = '\0';

    fgets(newNode->name, 101, stdin);
    newNode->name[strlen(newNode->name) - 1] = '\0';

    scanf("%lf", &newNode->gpa);
    max_gpa = fmax(max_gpa, newNode->gpa);
    newNode->next = NULL;
    return newNode;
}

void pushFront(node **head)
{
    node *newNode = makeNode();
    newNode->next = *head;
    *head = newNode;
}

void pushBack(node **head)
{
    node *newNode = makeNode();
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
        if (head->gpa == max_gpa)
        {
            printf("%s %s %.2lf\n", head->id, head->name, head->gpa);
        }
        head = head->next;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    node *head = NULL;
    while (n--)
    {
        pushBack(&head);
    }
    duyet(head);
    return 0;
}