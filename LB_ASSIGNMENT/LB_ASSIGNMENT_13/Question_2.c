#include <stdio.h>
#include <stdlib.h>


int Display(int ptr[],int iLength)
{
    int iCnt = 0;

    printf("The elements divisible by 5 are :\n");
    for(iCnt == 0;iCnt < iLength;iCnt++)
    {
        if(ptr[iCnt] % 5 == 0)
        {
            printf("%d\n",ptr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elememts :\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}