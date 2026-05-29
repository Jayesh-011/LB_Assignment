#include<stdio.h>

int MultDigits(int iNo)
{   
    int iMult = 1;
    int iTemp = 0;

    while (iNo != 0)
    {
        iTemp = iNo % 10;

        iMult = iMult * iTemp;

        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}
// Time Complexity = O(n)
// Where n >= 0