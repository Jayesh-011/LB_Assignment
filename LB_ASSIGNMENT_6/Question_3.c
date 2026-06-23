#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0){
        iNo = -iNo;
    }else if(iNo == 0){
        return 1;
    }

    for(int iCnt = iNo; iCnt >= 1 ; iCnt--) 
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("The factorial of given number is : %d\n",iRet);

    return 0;
}

// Time Complexity = O(n)
// Where n >= 0