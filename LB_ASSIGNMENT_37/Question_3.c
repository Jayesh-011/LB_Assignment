#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{  
    UINT iMask = 0x1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo | iMask;

    return iResult;    
}

int main()
{
    UINT iValue = 0,iRet = 0,iLocation = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printf("Enter Bit Position : \n");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("Updated Number is %d\n",iRet);

    return 0;
}