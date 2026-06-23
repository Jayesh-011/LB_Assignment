#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = iNo ; iCnt >= 1;iCnt--){
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    return iEvenFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d.\n",iRet);

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0