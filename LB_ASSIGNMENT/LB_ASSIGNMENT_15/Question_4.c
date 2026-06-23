#include<stdio.h>
#include<stdlib.h>


void Check(int Arr[], int iLength,int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0,iCnt = 0,iBegin =0,iLast = 0;
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

    printf("Enter Start : ");
    scanf("%d",&iBegin);

    printf("Enter End : ");
    scanf("%d",&iLast);

    Check(p, iSize,iBegin,iLast);
    
    free(p);
    
    return 0;
}