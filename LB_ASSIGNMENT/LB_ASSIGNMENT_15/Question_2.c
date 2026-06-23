#include<stdio.h>
#include<stdlib.h>


int Check(int Arr[], int iLength,int iChk)
{
    int iCnt = 0;
    int iResult = 0;

    for(iCnt = 0;iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == iChk)
        {
            iResult = iCnt;
            break;
        }
    }

    return iResult;
}

int main()
{
    int iSize = 0,iCnt = 0,iNo = 0;
    int iRet = 0;
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

    iRet = Check(p, iSize,iNo);

    printf("Element found at index : %d\n",iRet);
    
    free(p);
    
    return 0;
}