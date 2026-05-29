#include<stdio.h>

int CountRange(int iNo)
{   
    int iRangeChk = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iRangeChk = iNo % 10;

        if(iRangeChk >= 3 && iRangeChk <= 7)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0