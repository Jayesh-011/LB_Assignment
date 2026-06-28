#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x1;

    iMask = iMask << (14);

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
        printf("15th Bit is ON\n");
    }
    else
    {
        printf("15th Bit is OFF\n");
    }

    return 0;
}