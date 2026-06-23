#include<stdio.h>
int OddFactorial(int iNo)
{
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = iNo ; iCnt >= 1;iCnt--){
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d.\n",iRet);

    return 0;
}

// Time Complexity = O(n)
// Where n >= 0