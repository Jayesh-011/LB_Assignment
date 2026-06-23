#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iSum = 0;

    if(iStart < 0 || iEnd < 0){
        return 0;
    }

    for(int iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == 0){
        printf("Invalid Input");
    }else{
        printf("%d\n",iRet);
    }

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0