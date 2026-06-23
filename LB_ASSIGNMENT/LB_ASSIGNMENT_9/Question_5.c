#include <stdio.h>

int CountDiff(int iNo)
{
    int iOddSum = 0;
    int iEvenSum = 0;

    int iTemp = 0;
    while(iNo != 0)
    {
        iTemp = iNo % 10;

        if((iTemp % 2) != 0)
        {
            iOddSum += iTemp;
        }
        else
        {
            iEvenSum += iTemp;
        }

        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0