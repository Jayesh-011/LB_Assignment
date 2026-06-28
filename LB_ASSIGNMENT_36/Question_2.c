#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0xFFFFFFBF;
    UINT iMask2 = 0xFFFFFDFF;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = iMask1 & iMask2;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated Number is %d\n",iRet);

    return 0;
}