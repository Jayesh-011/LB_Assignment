#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Check(int Arr[], int iLength,int iChk)
{
    int iCnt = 0;
    BOOL bResult = FALSE;

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iChk)
        {
            bResult = TRUE;
            break;
        }
    }

    return bResult;
}

int main()
{
    int iSize = 0,iCnt = 0,iNo = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter a Number to find : ");
    scanf("%d",&iNo);

    bRet = Check(p, iSize,iNo);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    free(p);
    
    return 0;
}