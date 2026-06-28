#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL OnBit(UINT iNo)
{
    BOOL bResult = FALSE;
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;

    iMask1 = iMask1 << (8);
    iMask2 = iMask2 << (11);

    if(((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2))
    {
        bResult = TRUE;
    }

    return bResult;
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = OnBit(iValue);

    if(bRet)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE");
    }
    
    return 0;
}