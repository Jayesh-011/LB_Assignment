#include <stdio.h>

int CountOdd(int iNo)
{
    int iOddChk = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iOddChk = iNo % 10;

        if((iOddChk % 2) != 0)
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

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0