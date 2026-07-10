#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    PNODE temp = NULL;

    while (temp != NULL)
    {
        printf("| %d | -> ",temp -> data);
        temp = temp -> next;
    }

    printf("NULL\n");
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

void Search(PNODE head)
{
        while (head != NULL)
        {
            if(head -> data % 2 == 0)
            {
                printf("%d\n",head -> data);
            }

            head = head -> next;
        }
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,10);
    InsertLast(&head,12);
    InsertLast(&head,16);
    InsertLast(&head,101);

    Search(head);

    return 0;
}