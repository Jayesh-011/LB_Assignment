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

int CountGreater(PNODE head, int X)
{
    int iCount = 0;
    while (head != NULL)
    {
        if(head -> data > X)
        {
            iCount++;
        }
        head = head -> next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertLast(&head,10);
    InsertLast(&head,21);
    InsertLast(&head,23);
    InsertLast(&head,101);

    iRet = CountGreater(head,20);

    printf("Number greater are : %d\n",iRet);
    
    return 0;
}