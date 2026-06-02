#include<stdio.h>
#include<stdlib.h>

void Maximum(int Arr[], int iLength)
{
    int iCnt = 0,iNum = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        iNum = Arr[iCnt];
        int iDigit = 0;

        while (iNum != 0)
        {
            iDigit++;
            iNum = iNum / 10;
        }

        if(iDigit == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
    printf("\n");
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Maximum(p, iSize);

    free(p);

    return 0;
}