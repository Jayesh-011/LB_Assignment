#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iSumEven = 0;

    if(iStart < 0 || iEnd < 0){
        return 0;
    }

    for(int iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSumEven = iSumEven + iCnt;
        }
    }

    return iSumEven;
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == 0){
        printf("Invalid Input");
    }else{
        printf("%d\n",iRet);
    }

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0