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

bool Search(PNODE head, int No)
{
    bool bFlag = false;

        while (head != NULL)
        {
            if(head -> data == No)
            {
                bFlag = true;
            }

            head = head -> next;
        }

    return bFlag;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    bRet = Search(head,51);

    if(bRet)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is absent\n");
    }

    return 0;
}