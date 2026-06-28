#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask3 = 0x1;
    UINT iMask = 0;

    iMask1 = iMask1 << (6);
    iMask2 = iMask2 << (7);
    iMask3 = iMask3 << (8);
    

    iMask = iMask1 | iMask2 | iMask3;
    

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
        printf("7th & 8th & 9th Bit is ON\n");
    }
    else
    {
        printf("7th & 8th & 9th Bit is OFF\n");
    }

    return 0;
}