#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{  
    UINT iMask = 0xF000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;    
}

int main()
{
    UINT iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number is %d\n",iRet);

    return 0;
}