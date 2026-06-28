#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;

    iMask1 = iMask1 << (4);
    iMask2 = iMask2 << (17);

    iMask = iMask1 | iMask2;
    

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue);

    if(iRet == TRUE)
    {
        printf("5th & 18th Bit is ON\n");
    }
    else
    {
        printf("5th & 18th Bit is OFF\n");
    }

    return 0;
}